// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_ascon_initialization__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtest_ascon_initialization::Vtest_ascon_initialization(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest_ascon_initialization__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtest_ascon_initialization::Vtest_ascon_initialization(const char* _vcname__)
    : Vtest_ascon_initialization(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest_ascon_initialization::~Vtest_ascon_initialization() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest_ascon_initialization___024root___eval_debug_assertions(Vtest_ascon_initialization___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_ascon_initialization___024root___eval_static(Vtest_ascon_initialization___024root* vlSelf);
void Vtest_ascon_initialization___024root___eval_initial(Vtest_ascon_initialization___024root* vlSelf);
void Vtest_ascon_initialization___024root___eval_settle(Vtest_ascon_initialization___024root* vlSelf);
void Vtest_ascon_initialization___024root___eval(Vtest_ascon_initialization___024root* vlSelf);

void Vtest_ascon_initialization::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_ascon_initialization::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_ascon_initialization___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest_ascon_initialization___024root___eval_static(&(vlSymsp->TOP));
        Vtest_ascon_initialization___024root___eval_initial(&(vlSymsp->TOP));
        Vtest_ascon_initialization___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest_ascon_initialization___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtest_ascon_initialization::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtest_ascon_initialization::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtest_ascon_initialization::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest_ascon_initialization___024root___eval_final(Vtest_ascon_initialization___024root* vlSelf);

VL_ATTR_COLD void Vtest_ascon_initialization::final() {
    Vtest_ascon_initialization___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest_ascon_initialization::hierName() const { return vlSymsp->name(); }
const char* Vtest_ascon_initialization::modelName() const { return "Vtest_ascon_initialization"; }
unsigned Vtest_ascon_initialization::threads() const { return 1; }
void Vtest_ascon_initialization::prepareClone() const { contextp()->prepareClone(); }
void Vtest_ascon_initialization::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtest_ascon_initialization::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtest_ascon_initialization___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtest_ascon_initialization___024root__trace_init_top(Vtest_ascon_initialization___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_ascon_initialization___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_initialization___024root*>(voidSelf);
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest_ascon_initialization___024root__trace_decl_types(tracep);
    Vtest_ascon_initialization___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_ascon_initialization___024root__trace_register(Vtest_ascon_initialization___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_ascon_initialization::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtest_ascon_initialization::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtest_ascon_initialization___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}