// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core__Syms.h"
#include "Vtest_ascon_core___024root.h"

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_initial__TOP(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__stl(Vtest_ascon_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_triggers__stl(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtest_ascon_core___024root___act_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf);
VL_ATTR_COLD void Vtest_ascon_core___024root____Vm_traceActivitySetAll(Vtest_ascon_core___024root* vlSelf);
VL_ATTR_COLD void Vtest_ascon_core_ascon_permutation_p12___stl_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core___024root___act_sequent__TOP__1(Vtest_ascon_core___024root* vlSelf);

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_stl(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_ascon_core___024root___act_sequent__TOP__0(vlSelf);
        Vtest_ascon_core___024root____Vm_traceActivitySetAll(vlSelf);
        Vtest_ascon_core_ascon_permutation_p12___stl_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12));
        Vtest_ascon_core___024root___act_sequent__TOP__1(vlSelf);
    }
}
