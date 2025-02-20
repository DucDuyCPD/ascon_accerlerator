// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__0(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_core__DOT__clk = 1U;
    vlSelfRef.test_ascon_core__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_ascon_core__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         43);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_ascon_core__DOT__rst_n = 1U;
    vlSelfRef.test_ascon_core__DOT__key[0U] = 0x5422c04aU;
    vlSelfRef.test_ascon_core__DOT__key[1U] = 0x78fd74d6U;
    vlSelfRef.test_ascon_core__DOT__key[2U] = 0x320247b1U;
    vlSelfRef.test_ascon_core__DOT__key[3U] = 0xadc05342U;
    vlSelfRef.test_ascon_core__DOT__nonce[0U] = 0U;
    vlSelfRef.test_ascon_core__DOT__nonce[1U] = 0U;
    vlSelfRef.test_ascon_core__DOT__nonce[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__nonce[3U] = 0U;
    vlSelfRef.test_ascon_core__DOT__sel_type = 1U;
    vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0U;
    vlSelfRef.test_ascon_core__DOT__data_position = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AE_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__1(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1d4c0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         141);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_AE_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         148);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AE_AM = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_core__DOT__data_position = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0x73696854U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0x20736920U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         158);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_core__DOT__data_position = 8U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0x7420796dU;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0x20747365U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         163);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_core__DOT__data_position = 0x10U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0x20726f66U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0x636f7270U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         168);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_core__DOT__data_position = 0x18U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0x69737365U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0x6120676eU;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         173);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_core__DOT__data_position = 0x20U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0x636f7373U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0x65746169U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         178);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_core__DOT__data_position = 0x28U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0x61642064U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0x73206174U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         183);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_core__DOT__data_position = 0x30U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0x20706574U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0x20646e61U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         188);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_core__DOT__data_position = 0x38U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0x6f736261U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0x6272U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         193);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AE_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         202);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         203);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         204);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         207);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_FINISH_MT("../tb/test_ascon_core.sv", 208, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__2(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             37);
        vlSelfRef.test_ascon_core__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.test_ascon_core__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___act_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5 = 0;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_64;
    // Body
    if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt = 0ULL;
    }
    if (vlSelfRef.test_ascon_core__DOT__process_en_AE_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
            : 0ULL);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s3 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
             : 0ULL) ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_core__DOT__key[0U]))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s4 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s1 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s4 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s1 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_32 
        = ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)) 
           | ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)) 
              | (3U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))));
    if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x4_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x1_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[2U])));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x4_i = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x1_i = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0 
        = (vlSelfRef.test_ascon_core__DOT__data_length 
           - vlSelfRef.test_ascon_core__DOT__data_position);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    if ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt = 1ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt = 1ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 1ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 1ULL;
    } else if ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                << 0x38U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                           >> 8U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    } else if ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                << 0x30U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                           >> 0x10U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    } else if ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                << 0x28U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                        >> 0x18U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    } else if ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
    } else if ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x38U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           >> 8U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
    } else if ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x30U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           >> 0x10U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
    } else if ((0xfU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x28U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                        >> 0x18U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
    }
    if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_2 
        = ((0x10U < vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_22 
        = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_23 
        = ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_24 
        = ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_25 
        = ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_26 
        = ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_27 
        = ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_28 
        = ((0xfU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1));
    __Vtemp_40[1U] = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_27)
                       ? ((IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                   >> 0x20U)) ^ (0x10000U 
                                                 | (IData)(
                                                           ((0xffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))) 
                                                            >> 0x20U))))
                       : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_28)
                           ? ((IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                       >> 0x20U)) ^ 
                              (0x1000000U | (IData)(
                                                    ((0xffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])))) 
                                                     >> 0x20U))))
                           : ((IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                       >> 0x20U)) ^ (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U]))) 
                                                             >> 0x20U)))));
    __Vtemp_41[0U] = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_26)
                       ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                          ^ (IData)((0xffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                       : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_27)
                           ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                              ^ (IData)((0xffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                           : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_28)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                  ^ (IData)((0xffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                               : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                  ^ (IData)((((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))));
    __Vtemp_47[1U] = (((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                       ? (IData)(((1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                  >> 0x20U)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_22)
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                            >> 0x20U))
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_23)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                             >> 0x20U))
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_24)
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                              >> 0x20U))
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_25)
                                                    ? 
                                                   (1U 
                                                    ^ (IData)(
                                                              (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                               >> 0x20U)))
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_26)
                                                     ? 
                                                    ((IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                              >> 0x20U)) 
                                                     ^ 
                                                     (0x100U 
                                                      | (IData)(
                                                                ((0xffffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))) 
                                                                 >> 0x20U))))
                                                     : 
                                                    __Vtemp_40[1U]))))));
    __Vtemp_51[0U] = (((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                       ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                       : (((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                           : (((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                               & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                               ? (IData)((1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM))
                               : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_22)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                      ^ (0x100U | (0xffU 
                                                   & vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_23)
                                       ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                          ^ (0x10000U 
                                             | (0xffffU 
                                                & vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_24)
                                           ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                              ^ (0x1000000U 
                                                 | (0xffffffU 
                                                    & vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                           : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_25)
                                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                                  ^ 
                                                  vlSelfRef.test_ascon_core__DOT__data_in[0U])
                                               : __Vtemp_41[0U])))))));
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_2) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s0 
            = test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3;
        __Vtemp_64[0U] = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                          ^ vlSelfRef.test_ascon_core__DOT__data_in[0U]);
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s0 
            = (((8U < vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_32))
                ? test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5
                : ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                    ? (1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM)
                    : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                           ^ (0x100ULL | (QData)((IData)(
                                                         (0xffU 
                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                        : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                            ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                               ^ (0x10000ULL | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                            : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                   ^ (0x1000000ULL 
                                      | (QData)((IData)(
                                                        (0xffffffU 
                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                    ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                       ^ (0x100000000ULL 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                    : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                           ^ (0x10000000000ULL 
                                              | (0xffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                        : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                            ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                               ^ (0x1000000000000ULL 
                                                  | (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                            : ((7U 
                                                == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                   ^ 
                                                   (0x100000000000000ULL 
                                                    | (0xffffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                                : (
                                                   (8U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                                    ? test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_22)
                                                     ? 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                     ^ 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                                            >> 8U))))
                                                     : 
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_23)
                                                      ? 
                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                           << 0x10U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                                             >> 0x10U))))
                                                      : 
                                                     ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_24)
                                                       ? 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                       ^ 
                                                       (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                                              >> 0x18U))))
                                                       : 
                                                      ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_25)
                                                        ? 
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                        ^ 
                                                        (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U]))))
                                                        : 
                                                       ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_26)
                                                         ? 
                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                         ^ 
                                                         (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                           << 0x38U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                              << 0x18U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                >> 8U))))
                                                         : 
                                                        ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_27)
                                                          ? 
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                            << 0x30U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                               << 0x10U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                 >> 0x10U))))
                                                          : 
                                                         ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_28)
                                                           ? 
                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                  >> 0x18U))))
                                                           : test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3)))))))))))))))));
        __Vtemp_64[0U] = (((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                           : (((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                               & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                               : (((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                   & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                   : (((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                       ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                       : (((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                           : (((5U 
                                                == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                               & (0U 
                                                  == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                               : __Vtemp_51[0U]))))));
    }
    __Vtemp_53[2U] = (((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                       ? 0U : (((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                ? 0U : (((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                         & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                         ? 0U : (((8U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                  ? 0U
                                                  : 0U))));
    __Vtemp_59[1U] = (((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                       ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                  >> 0x20U)) : (((3U 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                            >> 0x20U))
                                                 : 
                                                (((4U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                             >> 0x20U))
                                                  : 
                                                 (((5U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                              >> 0x20U))
                                                   : 
                                                  (((6U 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                    ? (IData)(
                                                              (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                               >> 0x20U))
                                                    : 
                                                   (((7U 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                     ? (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp_47[1U]))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1 
        = (((QData)((IData)(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_32)
                              ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                         >> 0x20U))
                              : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_2)
                                  ? ((IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                              >> 0x20U)) 
                                     ^ vlSelfRef.test_ascon_core__DOT__data_in[1U])
                                  : (((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                      & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                      ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                 >> 0x20U))
                                      : (((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                          & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                          ? (IData)(
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                     >> 0x20U))
                                          : __Vtemp_59[1U])))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_32)
                                          ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                          : __Vtemp_64[0U]))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                : 0xffffffffffffffffULL) & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] 
        = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] 
        = (IData)(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                    ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last) 
                   >> 0x20U));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
        = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
        = (IData)(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                    ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last) 
                   >> 0x20U));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s0 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AE_AM)
                ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                : 0xffffffffffffffffULL) & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x4_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x2_p8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x3_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x0_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x1_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                          >> 0x27U))))))));
}

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_sequent__TOP__1(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_32 
        = ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)) 
           | ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)) 
              | (3U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))));
    if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x4_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x1_i 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[2U])));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x4_i = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x1_i = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0 
        = (vlSelfRef.test_ascon_core__DOT__data_length 
           - vlSelfRef.test_ascon_core__DOT__data_position);
    if ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt = 1ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt = 1ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 0ULL;
    } else if ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt = 1ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt = 1ULL;
    } else if ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                << 0x38U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                           >> 8U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    } else if ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                << 0x30U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                           >> 0x10U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    } else if ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                << 0x28U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                        >> 0x18U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    } else if ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
    } else if ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x38U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           >> 8U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
    } else if ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x30U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           >> 0x10U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
    } else if ((0xfU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x28U) | (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                        >> 0x18U)));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_2 
        = ((0x10U < vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_22 
        = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_23 
        = ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_24 
        = ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_25 
        = ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_26 
        = ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_27 
        = ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_28 
        = ((0xfU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)));
    if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt;
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_comb__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5 = 0;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_64;
    // Body
    if (vlSelfRef.test_ascon_core__DOT__process_en_AE_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s3 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
             : 0ULL) ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_core__DOT__key[0U]))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s4 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s1 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s4 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s1 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
            : 0ULL);
    if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4);
    __Vtemp_40[1U] = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_27)
                       ? ((IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                   >> 0x20U)) ^ (0x10000U 
                                                 | (IData)(
                                                           ((0xffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))) 
                                                            >> 0x20U))))
                       : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_28)
                           ? ((IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                       >> 0x20U)) ^ 
                              (0x1000000U | (IData)(
                                                    ((0xffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])))) 
                                                     >> 0x20U))))
                           : ((IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                       >> 0x20U)) ^ (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U]))) 
                                                             >> 0x20U)))));
    __Vtemp_41[0U] = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_26)
                       ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                          ^ (IData)((0xffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                       : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_27)
                           ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                              ^ (IData)((0xffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                           : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_28)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                  ^ (IData)((0xffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                               : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                  ^ (IData)((((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))));
    __Vtemp_47[1U] = (((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                       ? (IData)(((1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                  >> 0x20U)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_22)
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                            >> 0x20U))
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_23)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                             >> 0x20U))
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_24)
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                              >> 0x20U))
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_25)
                                                    ? 
                                                   (1U 
                                                    ^ (IData)(
                                                              (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                               >> 0x20U)))
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_26)
                                                     ? 
                                                    ((IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                              >> 0x20U)) 
                                                     ^ 
                                                     (0x100U 
                                                      | (IData)(
                                                                ((0xffffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))) 
                                                                 >> 0x20U))))
                                                     : 
                                                    __Vtemp_40[1U]))))));
    __Vtemp_51[0U] = (((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                       ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                       : (((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                           : (((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                               & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                               ? (IData)((1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM))
                               : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_22)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                      ^ (0x100U | (0xffU 
                                                   & vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_23)
                                       ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                          ^ (0x10000U 
                                             | (0xffffU 
                                                & vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_24)
                                           ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                              ^ (0x1000000U 
                                                 | (0xffffffU 
                                                    & vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                           : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_25)
                                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                                                  ^ 
                                                  vlSelfRef.test_ascon_core__DOT__data_in[0U])
                                               : __Vtemp_41[0U])))))));
    __Vtemp_53[2U] = (((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                       ? 0U : (((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                ? 0U : (((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                         & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                         ? 0U : (((8U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                  ? 0U
                                                  : 0U))));
    __Vtemp_59[1U] = (((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                       ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                  >> 0x20U)) : (((3U 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                            >> 0x20U))
                                                 : 
                                                (((4U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                             >> 0x20U))
                                                  : 
                                                 (((5U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                              >> 0x20U))
                                                   : 
                                                  (((6U 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                    ? (IData)(
                                                              (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                               >> 0x20U))
                                                    : 
                                                   (((7U 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                                     ? (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp_47[1U]))))));
    __Vtemp_64[0U] = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_2)
                       ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM) 
                          ^ vlSelfRef.test_ascon_core__DOT__data_in[0U])
                       : (((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                           : (((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                               & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                               : (((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                   & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                   : (((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                       & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                       ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                       : (((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                           : (((5U 
                                                == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                               & (0U 
                                                  == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                               : __Vtemp_51[0U])))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1 
        = (((QData)((IData)(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_32)
                              ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                         >> 0x20U))
                              : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_2)
                                  ? ((IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                              >> 0x20U)) 
                                     ^ vlSelfRef.test_ascon_core__DOT__data_in[1U])
                                  : (((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                      & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                      ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                 >> 0x20U))
                                      : (((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                                          & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))
                                          ? (IData)(
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM 
                                                     >> 0x20U))
                                          : __Vtemp_59[1U])))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_32)
                                          ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM)
                                          : __Vtemp_64[0U]))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s0 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_2)
            ? test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3
            : (((8U < vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0) 
                & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_32))
                ? test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5
                : ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                    ? (1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM)
                    : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                           ^ (0x100ULL | (QData)((IData)(
                                                         (0xffU 
                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                        : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                            ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                               ^ (0x10000ULL | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                            : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                   ^ (0x1000000ULL 
                                      | (QData)((IData)(
                                                        (0xffffffU 
                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                    ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                       ^ (0x100000000ULL 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                    : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                           ^ (0x10000000000ULL 
                                              | (0xffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                        : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                            ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                               ^ (0x1000000000000ULL 
                                                  | (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                            : ((7U 
                                                == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                   ^ 
                                                   (0x100000000000000ULL 
                                                    | (0xffffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                                : (
                                                   (8U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_0)
                                                    ? test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_5
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_22)
                                                     ? 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                     ^ 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                                            >> 8U))))
                                                     : 
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_23)
                                                      ? 
                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                           << 0x10U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                                             >> 0x10U))))
                                                      : 
                                                     ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_24)
                                                       ? 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                       ^ 
                                                       (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__data_in[0U])) 
                                                              >> 0x18U))))
                                                       : 
                                                      ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_25)
                                                        ? 
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                        ^ 
                                                        (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[1U]))))
                                                        : 
                                                       ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_26)
                                                         ? 
                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                         ^ 
                                                         (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                           << 0x38U) 
                                                          | (((QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                              << 0x18U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                >> 8U))))
                                                         : 
                                                        ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_27)
                                                          ? 
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                            << 0x30U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                               << 0x10U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                 >> 0x10U))))
                                                          : 
                                                         ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_28)
                                                           ? 
                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[2U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                  >> 0x18U))))
                                                           : test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT____VdfgRegularize_h134055a9_0_3))))))))))))))))));
    if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
               ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] 
        = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] 
        = (IData)(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                    ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last) 
                   >> 0x20U));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
        = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
        = (IData)(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                    ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last) 
                   >> 0x20U));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AE_AM)
                ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                : 0xffffffffffffffffULL) & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s0 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                : 0xffffffffffffffffULL) & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x4_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x2_p8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x3_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x0_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x1_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                          >> 0x27U))))))));
}

void Vtest_ascon_core___024root___timing_resume(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_ascon_core___024root___eval_triggers__act(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core___024root___eval_act(Vtest_ascon_core___024root* vlSelf);

bool Vtest_ascon_core___024root___eval_phase__act(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_ascon_core___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_ascon_core___024root___timing_resume(vlSelf);
        Vtest_ascon_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtest_ascon_core___024root___eval_nba(Vtest_ascon_core___024root* vlSelf);

bool Vtest_ascon_core___024root___eval_phase__nba(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_ascon_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__nba(Vtest_ascon_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__act(Vtest_ascon_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_ascon_core___024root___eval(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtest_ascon_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../tb/test_ascon_core.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtest_ascon_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../tb/test_ascon_core.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_ascon_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_ascon_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_ascon_core___024root___eval_debug_assertions(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
