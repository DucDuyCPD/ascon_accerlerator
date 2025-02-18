// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_encrypt_decrypt.h for the primary calling header

#include "Vtest_ascon_encrypt_decrypt__pch.h"
#include "Vtest_ascon_encrypt_decrypt__Syms.h"
#include "Vtest_ascon_encrypt_decrypt___024root.h"

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___eval_initial__TOP(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__clk = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__rst_n = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[0U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[1U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[2U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[3U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[0U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[1U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[2U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[3U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_AE_AM = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U] = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__encrypt_decrypt_mode_sel = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt = 0ULL;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt = 0ULL;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___dump_triggers__stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___eval_triggers__stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_encrypt_decrypt___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___stl_sequent__TOP__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root____Vm_traceActivitySetAll(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___stl_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);
void Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__2(Vtest_ascon_encrypt_decrypt___024root* vlSelf);

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___eval_stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtest_ascon_encrypt_decrypt___024root___stl_sequent__TOP__0(vlSelf);
        Vtest_ascon_encrypt_decrypt___024root____Vm_traceActivitySetAll(vlSelf);
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12));
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12));
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___stl_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12));
        Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__2(vlSelf);
    }
}
