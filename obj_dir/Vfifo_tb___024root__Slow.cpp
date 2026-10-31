// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"
#include "Vfifo_tb__Syms.h"
#include "Vfifo_tb___024root.h"

void Vfifo_tb___024root___ctor_var_reset(Vfifo_tb___024root* vlSelf);

Vfifo_tb___024root::Vfifo_tb___024root(Vfifo_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfifo_tb___024root___ctor_var_reset(this);
}

void Vfifo_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfifo_tb___024root::~Vfifo_tb___024root() {
}
