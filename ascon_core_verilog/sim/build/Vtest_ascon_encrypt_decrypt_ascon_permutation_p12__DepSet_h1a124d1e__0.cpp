// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_encrypt_decrypt.h for the primary calling header

#include "Vtest_ascon_encrypt_decrypt__pch.h"
#include "Vtest_ascon_encrypt_decrypt_ascon_permutation_p12.h"

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__1(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r11__DOT__x1_s = ((vlSelfRef.__PVT__r11__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r11__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__f);
    vlSelfRef.__PVT__r11__DOT__h = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x3_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r11__DOT__j = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__x3_s = ((vlSelfRef.__PVT__r11__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__h);
    vlSelfRef.__PVT__r11__DOT__x0_s = (vlSelfRef.__PVT__r11__DOT__f 
                                       ^ vlSelfRef.__PVT__r11__DOT__j);
}

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__1(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r11__DOT__x3_s = ((vlSelfRef.__PVT__r11__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__h);
    vlSelfRef.__PVT__r11__DOT__j = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__x0_s = (vlSelfRef.__PVT__r11__DOT__f 
                                       ^ vlSelfRef.__PVT__r11__DOT__j);
}
