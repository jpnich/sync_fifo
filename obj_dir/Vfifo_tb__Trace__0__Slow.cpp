// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo_tb__Syms.h"


VL_ATTR_COLD void Vfifo_tb___024root__trace_init_sub__TOP__0(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("fifo_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+26,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_init_top(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_init_top\n"); );
    // Body
    Vfifo_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfifo_tb___024root__trace_register(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vfifo_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfifo_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfifo_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfifo_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_const_0\n"); );
    // Init
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_full_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_full_0\n"); );
    // Init
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfifo_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_full_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->fifo_tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->fifo_tb__DOT__w_en));
    bufp->fullBit(oldp+3,(vlSelf->fifo_tb__DOT__rd_en));
    bufp->fullCData(oldp+4,(vlSelf->fifo_tb__DOT__in),8);
    bufp->fullIData(oldp+5,(vlSelf->fifo_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->fifo_tb__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+7,(vlSelf->fifo_tb__DOT__out),8);
    bufp->fullBit(oldp+8,((0x10U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))));
    bufp->fullBit(oldp+9,((0U == (IData)(vlSelf->fifo_tb__DOT__uut__DOT__pos))));
    bufp->fullCData(oldp+10,(vlSelf->fifo_tb__DOT__uut__DOT__memory[0]),8);
    bufp->fullCData(oldp+11,(vlSelf->fifo_tb__DOT__uut__DOT__memory[1]),8);
    bufp->fullCData(oldp+12,(vlSelf->fifo_tb__DOT__uut__DOT__memory[2]),8);
    bufp->fullCData(oldp+13,(vlSelf->fifo_tb__DOT__uut__DOT__memory[3]),8);
    bufp->fullCData(oldp+14,(vlSelf->fifo_tb__DOT__uut__DOT__memory[4]),8);
    bufp->fullCData(oldp+15,(vlSelf->fifo_tb__DOT__uut__DOT__memory[5]),8);
    bufp->fullCData(oldp+16,(vlSelf->fifo_tb__DOT__uut__DOT__memory[6]),8);
    bufp->fullCData(oldp+17,(vlSelf->fifo_tb__DOT__uut__DOT__memory[7]),8);
    bufp->fullCData(oldp+18,(vlSelf->fifo_tb__DOT__uut__DOT__memory[8]),8);
    bufp->fullCData(oldp+19,(vlSelf->fifo_tb__DOT__uut__DOT__memory[9]),8);
    bufp->fullCData(oldp+20,(vlSelf->fifo_tb__DOT__uut__DOT__memory[10]),8);
    bufp->fullCData(oldp+21,(vlSelf->fifo_tb__DOT__uut__DOT__memory[11]),8);
    bufp->fullCData(oldp+22,(vlSelf->fifo_tb__DOT__uut__DOT__memory[12]),8);
    bufp->fullCData(oldp+23,(vlSelf->fifo_tb__DOT__uut__DOT__memory[13]),8);
    bufp->fullCData(oldp+24,(vlSelf->fifo_tb__DOT__uut__DOT__memory[14]),8);
    bufp->fullCData(oldp+25,(vlSelf->fifo_tb__DOT__uut__DOT__memory[15]),8);
    bufp->fullCData(oldp+26,(vlSelf->fifo_tb__DOT__uut__DOT__w_ptr),8);
    bufp->fullCData(oldp+27,(vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr),8);
    bufp->fullCData(oldp+28,(vlSelf->fifo_tb__DOT__uut__DOT__pos),5);
    bufp->fullBit(oldp+29,(vlSelf->fifo_tb__DOT__clk));
}
