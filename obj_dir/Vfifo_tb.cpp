// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfifo_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfifo_tb::Vfifo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfifo_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfifo_tb::Vfifo_tb(const char* _vcname__)
    : Vfifo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfifo_tb::~Vfifo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vfifo_tb___024root___eval_static(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___eval_settle(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf);

void Vfifo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfifo_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfifo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfifo_tb___024root___eval_static(&(vlSymsp->TOP));
        Vfifo_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vfifo_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfifo_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vfifo_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vfifo_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vfifo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vfifo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfifo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfifo_tb___024root___eval_final(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb::final() {
    Vfifo_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfifo_tb::hierName() const { return vlSymsp->name(); }
const char* Vfifo_tb::modelName() const { return "Vfifo_tb"; }
unsigned Vfifo_tb::threads() const { return 1; }
void Vfifo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vfifo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfifo_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfifo_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfifo_tb___024root__trace_init_top(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfifo_tb___024root__trace_decl_types(tracep);
    Vfifo_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_register(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfifo_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfifo_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfifo_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
