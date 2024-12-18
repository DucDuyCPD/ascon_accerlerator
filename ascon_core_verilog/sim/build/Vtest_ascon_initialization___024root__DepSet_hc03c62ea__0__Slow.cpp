// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_initialization.h for the primary calling header

#include "Vtest_ascon_initialization__pch.h"
#include "Vtest_ascon_initialization___024root.h"

VL_ATTR_COLD void Vtest_ascon_initialization___024root___eval_static(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest_ascon_initialization___024root___eval_initial__TOP(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_initialization__DOT__clk = 0U;
    vlSelfRef.test_ascon_initialization__DOT__rst_n = 0U;
    vlSelfRef.test_ascon_initialization__DOT__sel_type = 0U;
    vlSelfRef.test_ascon_initialization__DOT__key[0U] = 0U;
    vlSelfRef.test_ascon_initialization__DOT__key[1U] = 0U;
    vlSelfRef.test_ascon_initialization__DOT__key[2U] = 0U;
    vlSelfRef.test_ascon_initialization__DOT__key[3U] = 0U;
    vlSelfRef.test_ascon_initialization__DOT__nonce[0U] = 0U;
    vlSelfRef.test_ascon_initialization__DOT__nonce[1U] = 0U;
    vlSelfRef.test_ascon_initialization__DOT__nonce[2U] = 0U;
    vlSelfRef.test_ascon_initialization__DOT__nonce[3U] = 0U;
}

VL_ATTR_COLD void Vtest_ascon_initialization___024root___eval_final(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_initialization___024root___dump_triggers__stl(Vtest_ascon_initialization___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_ascon_initialization___024root___eval_phase__stl(Vtest_ascon_initialization___024root* vlSelf);

VL_ATTR_COLD void Vtest_ascon_initialization___024root___eval_settle(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtest_ascon_initialization___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../tb/test_ascon_initialization.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_ascon_initialization___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_initialization___024root___dump_triggers__stl(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtest_ascon_initialization___024root___act_sequent__TOP__0(Vtest_ascon_initialization___024root* vlSelf);
VL_ATTR_COLD void Vtest_ascon_initialization___024root____Vm_traceActivitySetAll(Vtest_ascon_initialization___024root* vlSelf);

VL_ATTR_COLD void Vtest_ascon_initialization___024root___eval_stl(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_ascon_initialization___024root___act_sequent__TOP__0(vlSelf);
        Vtest_ascon_initialization___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtest_ascon_initialization___024root___eval_triggers__stl(Vtest_ascon_initialization___024root* vlSelf);

VL_ATTR_COLD bool Vtest_ascon_initialization___024root___eval_phase__stl(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_ascon_initialization___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_ascon_initialization___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_initialization___024root___dump_triggers__act(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_ascon_initialization.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge test_ascon_initialization.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_initialization___024root___dump_triggers__nba(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_ascon_initialization.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge test_ascon_initialization.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_ascon_initialization___024root____Vm_traceActivitySetAll(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
}

VL_ATTR_COLD void Vtest_ascon_initialization___024root___ctor_var_reset(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test_ascon_initialization__DOT__k = VL_RAND_RESET_I(8);
    vlSelf->test_ascon_initialization__DOT__rate = VL_RAND_RESET_I(8);
    vlSelf->test_ascon_initialization__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->test_ascon_initialization__DOT__b = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_initialization__DOT__key);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_initialization__DOT__nonce);
    vlSelf->test_ascon_initialization__DOT__sel_type = VL_RAND_RESET_I(2);
    vlSelf->test_ascon_initialization__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_initialization__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__IV = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__S[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(320, vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__zeros_key);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x0_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x1_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x2_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x3_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x4_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__test_ascon_initialization__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_ascon_initialization__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
