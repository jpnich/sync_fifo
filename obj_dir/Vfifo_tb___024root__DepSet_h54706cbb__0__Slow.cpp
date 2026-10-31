// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"
#include "Vfifo_tb___024root.h"

VL_ATTR_COLD void Vfifo_tb___024root___eval_static(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_final(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__stl(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfifo_tb___024root___eval_phase__stl(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_settle(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fifo_tb.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfifo_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__stl(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo_tb___024root___stl_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->fifo_tb__DOT__empty = (0U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos));
    vlSelf->fifo_tb__DOT__full = (0x10U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos));
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_stl(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfifo_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_triggers__stl(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD bool Vfifo_tb___024root___eval_phase__stl(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vfifo_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge fifo_tb.clk or posedge fifo_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge fifo_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__nba(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge fifo_tb.clk or posedge fifo_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge fifo_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo_tb___024root___ctor_var_reset(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->fifo_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fifo_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fifo_tb__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->fifo_tb__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->fifo_tb__DOT__in = VL_RAND_RESET_I(8);
    vlSelf->fifo_tb__DOT__out = VL_RAND_RESET_I(8);
    vlSelf->fifo_tb__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->fifo_tb__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->fifo_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fifo_tb__DOT__uut__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fifo_tb__DOT__uut__DOT__w_ptr = VL_RAND_RESET_I(8);
    vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr = VL_RAND_RESET_I(8);
    vlSelf->fifo_tb__DOT__uut__DOT__pos = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
