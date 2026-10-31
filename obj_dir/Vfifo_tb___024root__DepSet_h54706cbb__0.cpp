// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"
#include "Vfifo_tb___024root.h"

VL_ATTR_COLD void Vfifo_tb___024root___eval_initial__TOP(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial\n"); );
    // Body
    Vfifo_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelf->fifo_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0 
        = vlSelf->fifo_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->fifo_tb__DOT__clk = 0U;
    vlSelf->fifo_tb__DOT__rst = 1U;
    vlSelf->fifo_tb__DOT__w_en = 0U;
    vlSelf->fifo_tb__DOT__rd_en = 0U;
    vlSelf->fifo_tb__DOT__in = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "fifo_tb.v", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "fifo_tb.v", 
                                       46);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))) {
        VL_WRITEF("Empty\n");
    } else {
        VL_WRITEF("Error\n");
    }
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__w_en = 1U;
    vlSelf->fifo_tb__DOT__in = 0xa1U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = 0xb2U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = 0xc3U;
    vlSelf->fifo_tb__DOT__w_en = 0U;
    if ((2U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))) {
        VL_WRITEF("pos = 3\n");
    } else {
        VL_WRITEF("Error\n");
    }
    vlSelf->fifo_tb__DOT__rd_en = 1U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%b\n",8,vlSelf->fifo_tb__DOT__out);
    vlSelf->fifo_tb__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%b\n",8,vlSelf->fifo_tb__DOT__out);
    vlSelf->fifo_tb__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%b\n",8,vlSelf->fifo_tb__DOT__out);
    vlSelf->fifo_tb__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->fifo_tb__DOT__rd_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "fifo_tb.v", 
                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))) {
        VL_WRITEF("Empty\n");
    } else {
        VL_WRITEF("Error\n");
    }
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__w_en = 1U;
    vlSelf->fifo_tb__DOT__in = 0U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__in = (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fifo_tb__DOT__in)));
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 0x10U;
    vlSelf->fifo_tb__DOT__w_en = 0U;
    if ((0x10U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))) {
        VL_WRITEF("Full\n");
    } else {
        VL_WRITEF("Error\n");
    }
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__rd_en = 1U;
    vlSelf->fifo_tb__DOT__w_en = 1U;
    vlSelf->fifo_tb__DOT__in = 0xffU;
    co_await vlSelf->__VtrigSched_h34785657__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge fifo_tb.clk)", 
                                                       "fifo_tb.v", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->fifo_tb__DOT__rd_en = 0U;
    vlSelf->fifo_tb__DOT__w_en = 0U;
    if ((0xfU == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))) {
        VL_WRITEF("pos is at end\n");
    } else {
        VL_WRITEF("Error\n");
    }
    VL_FINISH_MT("fifo_tb.v", 113, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "fifo_tb.v", 
                                           25);
        vlSelf->fifo_tb__DOT__clk = (1U & (~ (IData)(vlSelf->fifo_tb__DOT__clk)));
    }
}

void Vfifo_tb___024root___eval_act(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__fifo_tb__DOT__uut__DOT__w_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdlyvdim0__fifo_tb__DOT__uut__DOT__memory__v0;
    __Vdlyvdim0__fifo_tb__DOT__uut__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__fifo_tb__DOT__uut__DOT__memory__v0;
    __Vdlyvval__fifo_tb__DOT__uut__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fifo_tb__DOT__uut__DOT__memory__v0;
    __Vdlyvset__fifo_tb__DOT__uut__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = 0;
    CData/*4:0*/ __Vdly__fifo_tb__DOT__uut__DOT__pos;
    __Vdly__fifo_tb__DOT__uut__DOT__pos = 0;
    // Body
    __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__pos = vlSelf->fifo_tb__DOT__uut__DOT__pos;
    __Vdly__fifo_tb__DOT__uut__DOT__w_ptr = vlSelf->fifo_tb__DOT__uut__DOT__w_ptr;
    __Vdlyvset__fifo_tb__DOT__uut__DOT__memory__v0 = 0U;
    if (vlSelf->fifo_tb__DOT__rst) {
        __Vdly__fifo_tb__DOT__uut__DOT__pos = 0U;
        __Vdly__fifo_tb__DOT__uut__DOT__w_ptr = 0U;
        __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = 0U;
        vlSelf->fifo_tb__DOT__out = 0U;
    } else {
        __Vdly__fifo_tb__DOT__uut__DOT__pos = (0x1fU 
                                               & ((2U 
                                                   == 
                                                   ((((IData)(vlSelf->fifo_tb__DOT__w_en) 
                                                      & (~ (IData)(vlSelf->fifo_tb__DOT__full))) 
                                                     << 1U) 
                                                    | ((IData)(vlSelf->fifo_tb__DOT__rd_en) 
                                                       & (~ (IData)(vlSelf->fifo_tb__DOT__empty)))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((((IData)(vlSelf->fifo_tb__DOT__w_en) 
                                                       & (~ (IData)(vlSelf->fifo_tb__DOT__full))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->fifo_tb__DOT__rd_en) 
                                                        & (~ (IData)(vlSelf->fifo_tb__DOT__empty)))))
                                                    ? 
                                                   ((IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))));
        if (((IData)(vlSelf->fifo_tb__DOT__w_en) & 
             (0x10U != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos)))) {
            __Vdlyvval__fifo_tb__DOT__uut__DOT__memory__v0 
                = vlSelf->fifo_tb__DOT__in;
            __Vdlyvset__fifo_tb__DOT__uut__DOT__memory__v0 = 1U;
            __Vdlyvdim0__fifo_tb__DOT__uut__DOT__memory__v0 
                = (0xfU & (IData)(vlSelf->fifo_tb__DOT__uut__DOT__w_ptr));
            __Vdly__fifo_tb__DOT__uut__DOT__w_ptr = 
                ((0xfU == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__w_ptr))
                  ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__w_ptr))));
        }
        if (((IData)(vlSelf->fifo_tb__DOT__rd_en) & 
             (0U != (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos)))) {
            vlSelf->fifo_tb__DOT__out = vlSelf->fifo_tb__DOT__uut__DOT__memory
                [(0xfU & (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))];
            __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr 
                = ((0xfU == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr))));
        }
    }
    vlSelf->fifo_tb__DOT__uut__DOT__w_ptr = __Vdly__fifo_tb__DOT__uut__DOT__w_ptr;
    vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr = __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr;
    if (__Vdlyvset__fifo_tb__DOT__uut__DOT__memory__v0) {
        vlSelf->fifo_tb__DOT__uut__DOT__memory[__Vdlyvdim0__fifo_tb__DOT__uut__DOT__memory__v0] 
            = __Vdlyvval__fifo_tb__DOT__uut__DOT__memory__v0;
    }
    vlSelf->fifo_tb__DOT__uut__DOT__pos = __Vdly__fifo_tb__DOT__uut__DOT__pos;
    vlSelf->fifo_tb__DOT__empty = (0U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos));
    vlSelf->fifo_tb__DOT__full = (0x10U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos));
}

void Vfifo_tb___024root___eval_nba(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h34785657__0.resume("@(negedge fifo_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vfifo_tb___024root___timing_commit(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h34785657__0.commit("@(negedge fifo_tb.clk)");
    }
}

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf);

bool Vfifo_tb___024root___eval_phase__act(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__act(vlSelf);
    Vfifo_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vfifo_tb___024root___timing_resume(vlSelf);
        Vfifo_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfifo_tb___024root___eval_phase__nba(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfifo_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__nba(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fifo_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vfifo_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fifo_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vfifo_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vfifo_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
