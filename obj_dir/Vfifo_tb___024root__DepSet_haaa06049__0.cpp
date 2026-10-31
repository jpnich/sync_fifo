// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"
#include "Vfifo_tb__Syms.h"
#include "Vfifo_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->fifo_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->fifo_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->fifo_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelf->fifo_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0 
        = vlSelf->fifo_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
