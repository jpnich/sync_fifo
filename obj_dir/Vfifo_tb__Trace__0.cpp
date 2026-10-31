// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo_tb__Syms.h"


void Vfifo_tb___024root__trace_chg_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_0\n"); );
    // Init
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfifo_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfifo_tb___024root__trace_chg_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->fifo_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->fifo_tb__DOT__w_en));
        bufp->chgBit(oldp+2,(vlSelf->fifo_tb__DOT__rd_en));
        bufp->chgCData(oldp+3,(vlSelf->fifo_tb__DOT__in),8);
        bufp->chgIData(oldp+4,(vlSelf->fifo_tb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+6,(vlSelf->fifo_tb__DOT__out),8);
        bufp->chgBit(oldp+7,((0x10U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))));
        bufp->chgBit(oldp+8,((0U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))));
        bufp->chgCData(oldp+9,(vlSelf->fifo_tb__DOT__uut__DOT__memory[0]),8);
        bufp->chgCData(oldp+10,(vlSelf->fifo_tb__DOT__uut__DOT__memory[1]),8);
        bufp->chgCData(oldp+11,(vlSelf->fifo_tb__DOT__uut__DOT__memory[2]),8);
        bufp->chgCData(oldp+12,(vlSelf->fifo_tb__DOT__uut__DOT__memory[3]),8);
        bufp->chgCData(oldp+13,(vlSelf->fifo_tb__DOT__uut__DOT__memory[4]),8);
        bufp->chgCData(oldp+14,(vlSelf->fifo_tb__DOT__uut__DOT__memory[5]),8);
        bufp->chgCData(oldp+15,(vlSelf->fifo_tb__DOT__uut__DOT__memory[6]),8);
        bufp->chgCData(oldp+16,(vlSelf->fifo_tb__DOT__uut__DOT__memory[7]),8);
        bufp->chgCData(oldp+17,(vlSelf->fifo_tb__DOT__uut__DOT__memory[8]),8);
        bufp->chgCData(oldp+18,(vlSelf->fifo_tb__DOT__uut__DOT__memory[9]),8);
        bufp->chgCData(oldp+19,(vlSelf->fifo_tb__DOT__uut__DOT__memory[10]),8);
        bufp->chgCData(oldp+20,(vlSelf->fifo_tb__DOT__uut__DOT__memory[11]),8);
        bufp->chgCData(oldp+21,(vlSelf->fifo_tb__DOT__uut__DOT__memory[12]),8);
        bufp->chgCData(oldp+22,(vlSelf->fifo_tb__DOT__uut__DOT__memory[13]),8);
        bufp->chgCData(oldp+23,(vlSelf->fifo_tb__DOT__uut__DOT__memory[14]),8);
        bufp->chgCData(oldp+24,(vlSelf->fifo_tb__DOT__uut__DOT__memory[15]),8);
        bufp->chgCData(oldp+25,(vlSelf->fifo_tb__DOT__uut__DOT__w_ptr),8);
        bufp->chgCData(oldp+26,(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr),8);
        bufp->chgCData(oldp+27,(vlSelf->fifo_tb__DOT__uut__DOT__pos),5);
    }
    bufp->chgBit(oldp+28,(vlSelf->fifo_tb__DOT__clk));
}

void Vfifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_cleanup\n"); );
    // Init
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
