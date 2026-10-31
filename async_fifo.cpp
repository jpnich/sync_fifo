
#ifndef ASYNC_FIFO_REF_MODEL_HPP
#define ASYNC_FIFO_REF_MODEL_HPP

#include <cstdint>
#include <deque>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

class AsyncFifoRefModel {
public:
    using Data = std::uint64_t;

    struct WriteResult {
        bool accepted;
        bool full;
    };

    struct ReadResult {
        bool accepted;
        Data expected_data;
        bool empty;
    };

    explicit AsyncFifoRefModel(unsigned depth)
        : depth_(depth),
          addr_bits_(0),
          ptr_mask_(0),
          gray_full_mask_(0) {
        if (depth < 2 || (depth & (depth - 1)) != 0) {
            throw std::invalid_argument(
                "FIFO depth must be a power of two >= 2");
        }

        unsigned d = depth;
        while (d > 1) {
            ++addr_bits_;
            d >>= 1;
        }

        // Pointer has one extra wrap bit.
        ptr_mask_ = (std::uint64_t(1) << (addr_bits_ + 1)) - 1;

        // Invert the two most significant Gray-pointer bits
        // for the standard asynchronous FIFO full comparison.
        gray_full_mask_ =
            (std::uint64_t(1) << addr_bits_) |
            (std::uint64_t(1) << (addr_bits_ - 1));

        reset();
    }

    static std::uint64_t binary_to_gray(std::uint64_t binary) {
        return binary ^ (binary >> 1);
    }

    void reset() {
        wr_bin_ = 0;
        rd_bin_ = 0;
        wr_gray_ = 0;
        rd_gray_ = 0;

        // Synchronizer stages, ordered from source to destination.
        rd_gray_sync1_ = 0;
        rd_gray_sync2_ = 0;
        wr_gray_sync1_ = 0;
        wr_gray_sync2_ = 0;

        full_ = false;
        empty_ = true;

        expected_.clear();
        accepted_writes_ = 0;
        accepted_reads_ = 0;
        errors_ = 0;
    }

    // Call once on each active write-clock edge.
    // Inputs are sampled before the edge's state updates.
    WriteResult write_edge(bool wr_en, Data wr_data,
                           bool reset_active = false) {
        if (reset_active) {
            reset();
            return {false, full_};
        }

        const bool accepted = wr_en && !full_;

        const std::uint64_t next_wr_bin =
            (wr_bin_ + (accepted ? 1 : 0)) & ptr_mask_;
        const std::uint64_t next_wr_gray =
            binary_to_gray(next_wr_bin);

        // Full is computed using the pre-edge synchronized read
        // pointer, matching conventional registered-full RTL.
        const bool next_full =
            next_wr_gray == (rd_gray_sync2_ ^ gray_full_mask_);

        // Nonblocking-assignment behavior: stage 2 receives old stage 1.
        const std::uint64_t old_rd_sync1 = rd_gray_sync1_;
        rd_gray_sync1_ = rd_gray_;
        rd_gray_sync2_ = old_rd_sync1;

        if (accepted) {
            if (expected_.size() >= depth_) {
                report_error("Reference queue overflow");
            } else {
                expected_.push_back(wr_data);
                ++accepted_writes_;
            }
        }

        wr_bin_ = next_wr_bin;
        wr_gray_ = next_wr_gray;
        full_ = next_full;

        return {accepted, full_};
    }

    // Call once on each active read-clock edge.
    // expected_data is valid only when accepted == true.
    ReadResult read_edge(bool rd_en, bool reset_active = false) {
        if (reset_active) {
            reset();
            return {false, 0, empty_};
        }

        const bool accepted = rd_en && !empty_;
        Data data = 0;

        const std::uint64_t next_rd_bin =
            (rd_bin_ + (accepted ? 1 : 0)) & ptr_mask_;
        const std::uint64_t next_rd_gray =
            binary_to_gray(next_rd_bin);

        // Empty is computed using the pre-edge synchronized write
        // pointer, matching conventional registered-empty RTL.
        const bool next_empty = next_rd_gray == wr_gray_sync2_;

        const std::uint64_t old_wr_sync1 = wr_gray_sync1_;
        wr_gray_sync1_ = wr_gray_;
        wr_gray_sync2_ = old_wr_sync1;

        if (accepted) {
            if (expected_.empty()) {
                report_error(
                    "Read accepted by model but reference queue is empty");
            } else {
                data = expected_.front();
                expected_.pop_front();
                ++accepted_reads_;
            }
        }

        rd_bin_ = next_rd_bin;
        rd_gray_ = next_rd_gray;
        empty_ = next_empty;

        return {accepted, data, empty_};
    }

    bool full() const  { return full_; }
    bool empty() const { return empty_; }

    std::size_t pending_transactions() const {
        return expected_.size();
    }

    std::uint64_t accepted_writes() const {
        return accepted_writes_;
    }

    std::uint64_t accepted_reads() const {
        return accepted_reads_;
    }

    unsigned error_count() const {
        return errors_;
    }

    // Call this after a read edge when the RTL has a valid read.
    void check_read_data(Data actual, Data expected,
                         const std::string& context = "") {
        if (actual != expected) {
            std::ostringstream os;
            os << "DATA MISMATCH";
            if (!context.empty()) os << " [" << context << "]";
            os << ": expected=0x" << std::hex << expected
               << ", actual=0x" << actual;
            report_error(os.str());
        }
    }

    void check_flags(bool rtl_full, bool rtl_empty,
                     const std::string& context = "") {
        if (rtl_full != full_) {
            std::ostringstream os;
            os << "FULL FLAG MISMATCH";
            if (!context.empty()) os << " [" << context << "]";
            os << ": model=" << full_ << ", RTL=" << rtl_full;
            report_error(os.str());
        }

        if (rtl_empty != empty_) {
            std::ostringstream os;
            os << "EMPTY FLAG MISMATCH";
            if (!context.empty()) os << " [" << context << "]";
            os << ": model=" << empty_ << ", RTL=" << rtl_empty;
            report_error(os.str());
        }
    }

    void report_summary() const {
        std::cout << "\n=== Async FIFO reference summary ===\n"
                  << "Depth             : " << depth_ << '\n'
                  << "Accepted writes   : " << accepted_writes_ << '\n'
                  << "Accepted reads    : " << accepted_reads_ << '\n'
                  << "Pending items     : " << expected_.size() << '\n'
                  << "Errors            : " << errors_ << '\n';
    }

private:
    const unsigned depth_;
    unsigned addr_bits_;
    std::uint64_t ptr_mask_;
    std::uint64_t gray_full_mask_;

    std::uint64_t wr_bin_ = 0;
    std::uint64_t rd_bin_ = 0;
    std::uint64_t wr_gray_ = 0;
    std::uint64_t rd_gray_ = 0;

    std::uint64_t rd_gray_sync1_ = 0;
    std::uint64_t rd_gray_sync2_ = 0;
    std::uint64_t wr_gray_sync1_ = 0;
    std::uint64_t wr_gray_sync2_ = 0;

    bool full_ = false;
    bool empty_ = true;

    std::deque<Data> expected_;
    std::uint64_t accepted_writes_ = 0;
    std::uint64_t accepted_reads_ = 0;
    unsigned errors_ = 0;

    void report_error(const std::string& message) {
        ++errors_;
        std::cerr << "[FIFO REF ERROR] " << message << '\n';
    }
};

#endif // ASYNC_FIFO_REF_MODEL_HPP
