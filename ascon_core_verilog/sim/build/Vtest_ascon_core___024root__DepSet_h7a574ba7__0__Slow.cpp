// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core___024root.h"

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_static(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_final(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__stl(Vtest_ascon_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_ascon_core___024root___eval_phase__stl(Vtest_ascon_core___024root* vlSelf);

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_settle(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_settle\n"); );
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
            Vtest_ascon_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../tb/test_ascon_core.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_ascon_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__stl(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___dump_triggers__stl\n"); );
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

void Vtest_ascon_core___024root___act_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf);
VL_ATTR_COLD void Vtest_ascon_core___024root____Vm_traceActivitySetAll(Vtest_ascon_core___024root* vlSelf);

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_stl(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_ascon_core___024root___act_sequent__TOP__0(vlSelf);
        Vtest_ascon_core___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_triggers__stl(Vtest_ascon_core___024root* vlSelf);

VL_ATTR_COLD bool Vtest_ascon_core___024root___eval_phase__stl(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_ascon_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_ascon_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__act(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_ascon_core.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge test_ascon_core.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__nba(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_ascon_core.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge test_ascon_core.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_ascon_core___024root____Vm_traceActivitySetAll(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root____Vm_traceActivitySetAll\n"); );
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

VL_ATTR_COLD void Vtest_ascon_core___024root___ctor_var_reset(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test_ascon_core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_core__DOT__rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_core__DOT__key);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_core__DOT__nonce);
    vlSelf->test_ascon_core__DOT__sel_type = VL_RAND_RESET_I(2);
    vlSelf->test_ascon_core__DOT__mode_sel_encrypt_decrypt = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_core__DOT__data_length = VL_RAND_RESET_I(32);
    vlSelf->test_ascon_core__DOT__data_position = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_core__DOT__data_in);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_core__DOT__data_out);
    vlSelf->test_ascon_core__DOT__process_en_init = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_core__DOT__process_en_AD_AM = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_core__DOT__process_en_encrypt_decrypt = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_core__DOT__process_en_hash = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_core__DOT__process_en_final = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_core__DOT__tag);
    vlSelf->test_ascon_core__DOT__data_read_file_key.atDefault() = 0;
    vlSelf->test_ascon_core__DOT__data_read_file_nonce.atDefault() = 0;
    vlSelf->test_ascon_core__DOT__data_read_file_plaintext.atDefault() = 0;
    vlSelf->test_ascon_core__DOT__data_read_file_ass_data.atDefault() = 0;
    vlSelf->test_ascon_core__DOT__data_read_file_ciphertext.atDefault() = 0;
    vlSelf->test_ascon_core__DOT__data_read_file_tag.atDefault() = 0;
    vlSelf->test_ascon_core__DOT__data_read_file_message.atDefault() = 0;
    vlSelf->test_ascon_core__DOT__data_read_file_hash_out.atDefault() = 0;
    VL_ZERO_RESET_W(128, vlSelf->test_ascon_core__DOT__KEY);
    VL_ZERO_RESET_W(128, vlSelf->test_ascon_core__DOT__NONCE);
    VL_ZERO_RESET_W(128, vlSelf->test_ascon_core__DOT__PLAINTEXT.atDefault().data());
    VL_ZERO_RESET_W(128, vlSelf->test_ascon_core__DOT__ASS_DATA.atDefault().data());
    VL_ZERO_RESET_W(128, vlSelf->test_ascon_core__DOT__CIPHERTEXT.atDefault().data());
    VL_ZERO_RESET_W(128, vlSelf->test_ascon_core__DOT__TAG);
    VL_ZERO_RESET_W(128, vlSelf->test_ascon_core__DOT__MESSAGE.atDefault().data());
    VL_ZERO_RESET_W(128, vlSelf->test_ascon_core__DOT__HASH_OUT.atDefault().data());
    vlSelf->test_ascon_core__DOT__PLAINTEXT_LENGTH = 0;
    vlSelf->test_ascon_core__DOT__ASS_DATA_LENGTH = 0;
    vlSelf->test_ascon_core__DOT__CIPHERTEXT_LENGTH = 0;
    vlSelf->test_ascon_core__DOT__MESSAGE_LENGTH = 0;
    vlSelf->test_ascon_core__DOT__count = 0;
    vlSelf->test_ascon_core__DOT__start_time = 0;
    vlSelf->test_ascon_core__DOT__end_time = 0;
    vlSelf->test_ascon_core__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->test_ascon_core__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->test_ascon_core__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->test_ascon_core__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->test_ascon_core__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__count = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0_init = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_init = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2_init = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__hash_out = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x0_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x1_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x2_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x3_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x4_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__s0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x2_last = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x3_last = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x4_last = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__test_ascon_core__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_ascon_core__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
