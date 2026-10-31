// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB___024ROOT_H_
#define VERILATED_VFIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fifo_tb__DOT__clk;
    CData/*0:0*/ fifo_tb__DOT__rst;
    CData/*0:0*/ fifo_tb__DOT__w_en;
    CData/*0:0*/ fifo_tb__DOT__rd_en;
    CData/*7:0*/ fifo_tb__DOT__in;
    CData/*7:0*/ fifo_tb__DOT__out;
    CData/*0:0*/ fifo_tb__DOT__full;
    CData/*0:0*/ fifo_tb__DOT__empty;
    CData/*7:0*/ fifo_tb__DOT__uut__DOT__w_ptr;
    CData/*7:0*/ fifo_tb__DOT__uut__DOT__rd_ptr;
    CData/*4:0*/ fifo_tb__DOT__uut__DOT__pos;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ fifo_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ fifo_tb__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> fifo_tb__DOT__uut__DOT__memory;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h34785657__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfifo_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfifo_tb___024root(Vfifo_tb__Syms* symsp, const char* v__name);
    ~Vfifo_tb___024root();
    VL_UNCOPYABLE(Vfifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
