//hex decoder and debouncing taken from another personal project

module de10_lite(
    input CLK,
    input [1:0] KEY,
    input [9:0] SW,

    output [9:0] LED,
    output [6:0] HEX0,
    output [6:0] HEX1,
    output [6:0] HEX2,
    output [6:0] HEX3,
    output [6:0] HEX4,
    output [6:0] HEX5
);

    wire rst;
    
    reg key_meta;
    reg key_sync;
    reg key_stable;
    reg key_stable_d;

    reg [19:0] debounce_count;
    reg step_enable;

    wire [7:0] fifo_out;
    wire fifo_full;
    wire fifo_empty;

    reg [7:0] fifo_input;
    reg fifo_write;
    reg fifo_read;

    reg [23:0] display_data;

    assign rst = ~KEY[0];

    always @(posedge CLK or posedge rst) begin
        if (rst) begin
            key_meta <= 1'b1;
            key_sync <= 1'b1;
        end
        else begin
            key_meta <= KEY[1];
            key_sync <= key_meta;
        end
    end

    always @(posedge CLK or posedge rst) begin
        if (rst) begin
            key_stable <= 1'b1;
            debounce_count <= 20'd0;
        end
        else begin
            if (key_sync == key_stable) begin
                debounce_count <= 20'd0;
            end
            else if (&debounce_count) begin
                key_stable <= key_sync;
                debounce_count <= 20'd0;
            end
            else begin
                debounce_count <= debounce_count + 1'b1;
            end
        end
    end

    always @(posedge CLK or posedge rst) begin
        if (rst) begin
            key_stable_d <= 1'b1;
            step_enable <= 1'b0;
        end
        else begin
            key_stable_d <= key_stable;
            step_enable <= key_stable_d & ~key_stable;
        end
    end


    always @(*) begin
        fifo_input = SW[9:2];
    end

    //SW0 write
    //SW1 read
    //KEY1 execute

    always @(*) begin
        fifo_write = 1'b0;
        fifo_read = 1'b0;

        if (step_enable) begin
            fifo_write = SW[0] && !fifo_full;
            fifo_read = SW[1] && !fifo_empty;
        end
    end

    fifo my_fifo (
        .clk(CLK),
        .rst(rst),
        .w_en(fifo_write),
        .rd_en(fifo_read),
        .in(fifo_input),
        .out(fifo_out),
        .full(fifo_full),
        .empty(fifo_empty)
    );


    assign LED[7:0] = fifo_out;
    assign LED[8] = fifo_full;
    assign LED[9] = fifo_empty;

    always @(*) begin
        if (SW[0])
            display_data = {16'b0, fifo_input};
        else
            display_data = {16'b0, fifo_out};
    end

    hex_decoder h0 (
        .value(display_data[3:0]),
        .segments(HEX0)
    );

    hex_decoder h1 (
        .value(display_data[7:4]),
        .segments(HEX1)
    );

    hex_decoder h2 (
        .value(display_data[11:8]),
        .segments(HEX2)
    );

    hex_decoder h3 (
        .value(display_data[15:12]),
        .segments(HEX3)
    );

    hex_decoder h4 (
        .value(display_data[19:16]),
        .segments(HEX4)
    );

    hex_decoder h5 (
        .value(display_data[23:20]),
        .segments(HEX5)
    );

endmodule

module hex_decoder (
    input [3:0] value,
    output reg [6:0] segments
);

    always @(*) begin
        case (value)
            4'h0: segments = 7'b1000000;
            4'h1: segments = 7'b1111001;
            4'h2: segments = 7'b0100100;
            4'h3: segments = 7'b0110000;
            4'h4: segments = 7'b0011001;
            4'h5: segments = 7'b0010010;
            4'h6: segments = 7'b0000010;
            4'h7: segments = 7'b1111000;
            4'h8: segments = 7'b0000000;
            4'h9: segments = 7'b0010000;
            4'hA: segments = 7'b0001000;
            4'hB: segments = 7'b0000011;
            4'hC: segments = 7'b1000110;
            4'hD: segments = 7'b0100001;
            4'hE: segments = 7'b0000110;
            4'hF: segments = 7'b0001110;
            default: segments = 7'b1111111;
        endcase
    end

endmodule

module fifo(
    input wire clk,
    input wire rst,
    input wire w_en,
    input wire rd_en,
    input wire [7:0] in,
    output reg [7:0] out,
    output wire full,
    output wire empty
);

    reg [7:0] memory [0:15];
    reg [3:0] w_ptr;        //log2(16)=4
    reg [3:0] rd_ptr;
    reg [4:0] pos;

    assign full = (pos == 16);
    assign empty = (pos == 0);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            w_ptr <= 0;
            rd_ptr <= 0;
            pos <= 0;
            out <= 0;
        end

        else begin
            if(w_en && !full) begin
                memory[w_ptr] <= in;
                w_ptr <= (w_ptr == 15) ? 0 : w_ptr + 1; //loops otherwise
            end
            if(rd_en && !empty) begin
                out <= memory[rd_ptr];
                rd_ptr <= (rd_ptr == 15) ? 0 : rd_ptr + 1;
            end
            case({w_en && !full, rd_en && !empty})         //obv pos won't change if equal
                2'b10: pos <= pos + 1;                  
                2'b01: pos <= pos - 1;                  
                default: pos <= pos;
            endcase
        end
    end
endmodule


