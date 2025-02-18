// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_encrypt_decrypt.h for the primary calling header

#include "Vtest_ascon_encrypt_decrypt__pch.h"
#include "Vtest_ascon_encrypt_decrypt___024root.h"

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___eval_static(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___eval_final(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___dump_triggers__stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_ascon_encrypt_decrypt___024root___eval_phase__stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf);

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___eval_settle(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_settle\n"); );
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
            Vtest_ascon_encrypt_decrypt___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../tb/test_ascon_encrypt_decrypt.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_ascon_encrypt_decrypt___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___dump_triggers__stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___stl_sequent__TOP__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0 = 0;
    CData/*0:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_2;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_2 = 0;
    QData/*63:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_3;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_3 = 0;
    QData/*63:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_5;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_5 = 0;
    CData/*0:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_22;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_22 = 0;
    CData/*0:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_23;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_23 = 0;
    CData/*0:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_24;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_24 = 0;
    CData/*0:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_25;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_25 = 0;
    CData/*0:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_26;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_26 = 0;
    CData/*0:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_27;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_27 = 0;
    CData/*0:0*/ test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_28;
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_28 = 0;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_64;
    // Body
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_27 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U]))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_28 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_3 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U]))));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_5 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_final 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[1U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[0U]))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_32 
        = ((1U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)) 
           | ((2U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)) 
              | (3U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))));
    if ((0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[2U])));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x4_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[0U])));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[2U])));
    } else {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x4_i = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i = 0ULL;
    }
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length 
           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position);
    if ((0U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (1ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt);
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
    } else if ((1U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (0x100ULL | (QData)((IData)((0xffU 
                                              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
    } else if ((2U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (0x10000ULL | (QData)((IData)((0xffffU 
                                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
    } else if ((3U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (0x1000000ULL | (QData)((IData)((0xffffffU 
                                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
    } else if ((4U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (0x100000000ULL | (QData)((IData)(
                                                   vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
    } else if ((5U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (0x10000000000ULL | (0xffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
    } else if ((6U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (0x1000000000000ULL | (0xffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
    } else if ((7U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (0x100000000000000ULL | (0xffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
    } else if ((8U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = (1ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt);
    } else if ((9U == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])) 
                   << 0x38U) | (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                 << 0x18U) | ((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])) 
                                              >> 8U))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
               ^ (0x100ULL | (QData)((IData)((0xffU 
                                              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])))));
    } else if ((0xaU == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])) 
                   << 0x30U) | (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                 << 0x10U) | ((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])) 
                                              >> 0x10U))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
               ^ (0x10000ULL | (QData)((IData)((0xffffU 
                                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])))));
    } else if ((0xbU == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])) 
                   << 0x28U) | (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                 << 8U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])) 
                                           >> 0x18U))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
               ^ (0x1000000ULL | (QData)((IData)((0xffffffU 
                                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])))));
    } else if ((0xcU == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])) 
                   << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U]))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
               ^ (0x100000000ULL | (QData)((IData)(
                                                   vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))));
    } else if ((0xdU == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U])) 
                   << 0x38U) | (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])) 
                                 << 0x18U) | ((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                              >> 8U))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
               ^ (0x10000000000ULL | (0xffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))))));
    } else if ((0xeU == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U])) 
                   << 0x30U) | (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])) 
                                 << 0x10U) | ((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                              >> 0x10U))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
               ^ (0x1000000000000ULL | (0xffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))))));
    } else if ((0xfU == vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0)) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U])) 
                   << 0x28U) | (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])) 
                                 << 8U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                           >> 0x18U))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
               ^ (0x100000000000000ULL | (0xffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U]))))));
    } else {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_27;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_28;
    }
    if (vlSelfRef.test_ascon_encrypt_decrypt__DOT__encrypt_decrypt_mode_sel) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s0 
            = (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1 
            = (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])));
    } else {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s0 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_27;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1 
            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_28;
    }
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_2 
        = ((0x10U < test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_22 
        = ((9U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_23 
        = ((0xaU == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_24 
        = ((0xbU == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_25 
        = ((0xcU == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_26 
        = ((0xdU == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_27 
        = ((0xeU == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)));
    test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_28 
        = ((0xfU == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s0 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U] 
        = (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U] 
        = (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
                   >> 0x20U));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U] 
        = (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U] 
        = (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
                   >> 0x20U));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1));
    __Vtemp_40[1U] = ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_27)
                       ? ((IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                   >> 0x20U)) ^ (0x10000U 
                                                 | (IData)(
                                                           ((0xffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))) 
                                                            >> 0x20U))))
                       : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_28)
                           ? ((IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                       >> 0x20U)) ^ 
                              (0x1000000U | (IData)(
                                                    ((0xffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))) 
                                                     >> 0x20U))))
                           : ((IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                       >> 0x20U)) ^ (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))) 
                                                             >> 0x20U)))));
    __Vtemp_41[0U] = ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_26)
                       ? ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                          ^ (IData)((0xffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))))))
                       : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_27)
                           ? ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                              ^ (IData)((0xffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))))))
                           : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_28)
                               ? ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                                  ^ (IData)((0xffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))))))
                               : ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                                  ^ (IData)((((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))))))));
    __Vtemp_47[1U] = (((8U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                       ? (IData)(((1ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                                  >> 0x20U)) : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_22)
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                            >> 0x20U))
                                                 : 
                                                ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_23)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                             >> 0x20U))
                                                  : 
                                                 ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_24)
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                              >> 0x20U))
                                                   : 
                                                  ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_25)
                                                    ? 
                                                   (1U 
                                                    ^ (IData)(
                                                              (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                               >> 0x20U)))
                                                    : 
                                                   ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_26)
                                                     ? 
                                                    ((IData)(
                                                             (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                              >> 0x20U)) 
                                                     ^ 
                                                     (0x100U 
                                                      | (IData)(
                                                                ((0xffffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))) 
                                                                 >> 0x20U))))
                                                     : 
                                                    __Vtemp_40[1U]))))));
    __Vtemp_51[0U] = (((6U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                       ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                       : (((7U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                           ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                           : (((8U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                               & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                               ? (IData)((1ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM))
                               : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_22)
                                   ? ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                                      ^ (0x100U | (0xffU 
                                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))
                                   : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_23)
                                       ? ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                                          ^ (0x10000U 
                                             | (0xffffU 
                                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))
                                       : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_24)
                                           ? ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                                              ^ (0x1000000U 
                                                 | (0xffffffU 
                                                    & vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))
                                           : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_25)
                                               ? ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                                                  ^ 
                                                  vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])
                                               : __Vtemp_41[0U])))))));
    if (test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_2) {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s0 
            = test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_3;
        __Vtemp_64[0U] = ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM) 
                          ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]);
    } else {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s0 
            = (((8U < test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_32))
                ? test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_5
                : ((0U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                    ? (1ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM)
                    : ((1U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                        ? (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                           ^ (0x100ULL | (QData)((IData)(
                                                         (0xffU 
                                                          & vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))))
                        : ((2U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                            ? (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                               ^ (0x10000ULL | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))))
                            : ((3U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                                ? (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                   ^ (0x1000000ULL 
                                      | (QData)((IData)(
                                                        (0xffffffU 
                                                         & vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])))))
                                : ((4U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                                    ? (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                       ^ (0x100000000ULL 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))))
                                    : ((5U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                                        ? (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                           ^ (0x10000000000ULL 
                                              | (0xffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))))))
                                        : ((6U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                                            ? (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                               ^ (0x1000000000000ULL 
                                                  | (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))))))
                                            : ((7U 
                                                == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                                                ? (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                                   ^ 
                                                   (0x100000000000000ULL 
                                                    | (0xffffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U]))))))
                                                : (
                                                   (8U 
                                                    == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0)
                                                    ? test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_5
                                                    : 
                                                   ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_22)
                                                     ? 
                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                                     ^ 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U])) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])) 
                                                            >> 8U))))
                                                     : 
                                                    ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_23)
                                                      ? 
                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U])) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                           << 0x10U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])) 
                                                             >> 0x10U))))
                                                      : 
                                                     ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_24)
                                                       ? 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                                       ^ 
                                                       (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U])) 
                                                              >> 0x18U))))
                                                       : 
                                                      ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_25)
                                                        ? 
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                                        ^ 
                                                        (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U]))))
                                                        : 
                                                       ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_26)
                                                         ? 
                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                                         ^ 
                                                         (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U])) 
                                                           << 0x38U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U])) 
                                                              << 0x18U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                                >> 8U))))
                                                         : 
                                                        ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_27)
                                                          ? 
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U])) 
                                                            << 0x30U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U])) 
                                                               << 0x10U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                                 >> 0x10U))))
                                                          : 
                                                         ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_28)
                                                           ? 
                                                          (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])) 
                                                                  >> 0x18U))))
                                                           : test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_3)))))))))))))))));
        __Vtemp_64[0U] = (((0U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                           ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                           : (((1U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                               & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                               ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                               : (((2U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                   & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                   ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                                   : (((3U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                       & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                       ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                                       : (((4U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                           & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                           ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                                           : (((5U 
                                                == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                               & (0U 
                                                  == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                               ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                                               : __Vtemp_51[0U]))))));
    }
    __Vtemp_53[2U] = (((5U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                       ? 0U : (((6U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                ? 0U : (((7U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                         & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                         ? 0U : (((8U 
                                                   == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                                  ? 0U
                                                  : 0U))));
    __Vtemp_59[1U] = (((2U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                       ? (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                  >> 0x20U)) : (((3U 
                                                  == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                            >> 0x20U))
                                                 : 
                                                (((4U 
                                                   == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                             >> 0x20U))
                                                  : 
                                                 (((5U 
                                                    == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                              >> 0x20U))
                                                   : 
                                                  (((6U 
                                                     == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                                    ? (IData)(
                                                              (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                               >> 0x20U))
                                                    : 
                                                   (((7U 
                                                      == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                                     ? (IData)(
                                                               (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp_47[1U]))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1 
        = (((QData)((IData)(((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_32)
                              ? (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                         >> 0x20U))
                              : ((IData)(test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_2)
                                  ? ((IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                              >> 0x20U)) 
                                     ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U])
                                  : (((0U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                      & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                      ? (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                 >> 0x20U))
                                      : (((1U == test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_0) 
                                          & (0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type)))
                                          ? (IData)(
                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
                                                     >> 0x20U))
                                          : __Vtemp_59[1U])))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_32)
                                          ? (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM)
                                          : __Vtemp_64[0U]))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s0 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x4_p8 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x2_p8 
        = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x3_p8 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x0_p8 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x1_p8 
        = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                          >> 0x27U))))))));
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___eval_triggers__stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___eval_stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf);

VL_ATTR_COLD bool Vtest_ascon_encrypt_decrypt___024root___eval_phase__stl(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_ascon_encrypt_decrypt___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_ascon_encrypt_decrypt___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___dump_triggers__act(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_ascon_encrypt_decrypt.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge test_ascon_encrypt_decrypt.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___dump_triggers__nba(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_ascon_encrypt_decrypt.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge test_ascon_encrypt_decrypt.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root____Vm_traceActivitySetAll(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root____Vm_traceActivitySetAll\n"); );
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

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___ctor_var_reset(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->test_ascon_encrypt_decrypt__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_encrypt_decrypt__DOT__rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_encrypt_decrypt__DOT__key);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_encrypt_decrypt__DOT__nonce);
    vlSelf->test_ascon_encrypt_decrypt__DOT__sel_type = VL_RAND_RESET_I(2);
    vlSelf->test_ascon_encrypt_decrypt__DOT__process_en_AE_AM = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_encrypt_decrypt__DOT__data_length = VL_RAND_RESET_I(32);
    vlSelf->test_ascon_encrypt_decrypt__DOT__data_position = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_encrypt_decrypt__DOT__data);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length = VL_RAND_RESET_I(32);
    vlSelf->test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain);
    vlSelf->test_ascon_encrypt_decrypt__DOT__encrypt_decrypt_mode_sel = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_encrypt_decrypt__DOT__process_en_encrypt_decrypt = VL_RAND_RESET_I(1);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x0_i_final = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x1_i_final = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x2_i_final = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x3_i_final = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__x4_i_final = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_encrypt_decrypt__DOT__tag);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__IV = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x4_i = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(320, vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x0_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x1_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x2_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x3_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x4_p8 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT____VdfgRegularize_h134055a9_0_32 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_0 = VL_RAND_RESET_I(32);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_27 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT____VdfgRegularize_had75f156_0_28 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 = VL_RAND_RESET_Q(64);
    vlSelf->test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__test_ascon_encrypt_decrypt__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__test_ascon_encrypt_decrypt__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
