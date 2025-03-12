// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core___024root.h"

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_initial__TOP(Vtest_ascon_core___024root* vlSelf);
VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__0(Vtest_ascon_core___024root* vlSelf);
VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__1(Vtest_ascon_core___024root* vlSelf);
VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__2(Vtest_ascon_core___024root* vlSelf);

void Vtest_ascon_core___024root___eval_initial(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_ascon_core___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__clk__0 
        = vlSelfRef.test_ascon_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__rst_n__0 
        = vlSelfRef.test_ascon_core__DOT__rst_n;
}

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
                                         269);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_ascon_core__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         270);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_ascon_core__DOT__rst_n = 1U;
    vlSelfRef.test_ascon_core__DOT__key[0U] = vlSelfRef.test_ascon_core__DOT__KEY[0U];
    vlSelfRef.test_ascon_core__DOT__key[1U] = vlSelfRef.test_ascon_core__DOT__KEY[1U];
    vlSelfRef.test_ascon_core__DOT__key[2U] = vlSelfRef.test_ascon_core__DOT__KEY[2U];
    vlSelfRef.test_ascon_core__DOT__key[3U] = vlSelfRef.test_ascon_core__DOT__KEY[3U];
    vlSelfRef.test_ascon_core__DOT__nonce[0U] = vlSelfRef.test_ascon_core__DOT__NONCE[0U];
    vlSelfRef.test_ascon_core__DOT__nonce[1U] = vlSelfRef.test_ascon_core__DOT__NONCE[1U];
    vlSelfRef.test_ascon_core__DOT__nonce[2U] = vlSelfRef.test_ascon_core__DOT__NONCE[2U];
    vlSelfRef.test_ascon_core__DOT__nonce[3U] = vlSelfRef.test_ascon_core__DOT__NONCE[3U];
    vlSelfRef.test_ascon_core__DOT__sel_type = 0U;
    vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__data_length = 0U;
    vlSelfRef.test_ascon_core__DOT__data_position = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[0U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[1U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[2U] = 0U;
    vlSelfRef.test_ascon_core__DOT__data_in[3U] = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
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
    // Init
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk12__DOT__i;
    test_ascon_core__DOT__unnamedblk12__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk12__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk12__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk13__DOT__i;
    test_ascon_core__DOT__unnamedblk13__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk13__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk13__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk14__DOT__i;
    test_ascon_core__DOT__unnamedblk14__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk14__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk14__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk15__DOT__i;
    test_ascon_core__DOT__unnamedblk15__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk15__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk15__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk16__DOT__i;
    test_ascon_core__DOT__unnamedblk16__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk16__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk16__DOT__i__Vfirst = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__position;
    __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__position;
    __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__2__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ENCRYPT__2__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__2__position;
    __Vtask_test_ascon_core__DOT__ENCRYPT__2__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__3__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ENCRYPT__3__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__3__position;
    __Vtask_test_ascon_core__DOT__ENCRYPT__3__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__position;
    __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__position;
    __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__6__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__DECRYPT__6__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__6__position;
    __Vtask_test_ascon_core__DOT__DECRYPT__6__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__7__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__DECRYPT__7__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__7__position;
    __Vtask_test_ascon_core__DOT__DECRYPT__7__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__position;
    __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__position;
    __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__position = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         293);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         295);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("===ENCRYPT TEST START===\n",0);
    vlSelfRef.test_ascon_core__DOT__start_time = VL_TIME_UNITED_Q(1000);
    vlSelfRef.test_ascon_core__DOT__sel_type = 0U;
    vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         308);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.first(test_ascon_core__DOT__unnamedblk12__DOT__i))) {
        test_ascon_core__DOT__unnamedblk12__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk12__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.next(test_ascon_core__DOT__unnamedblk12__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk12__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__position 
                = VL_MULS_III(32, (IData)(0x10U), test_ascon_core__DOT__unnamedblk12__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__data, vlSelfRef.test_ascon_core__DOT__ASS_DATA
                        .at(test_ascon_core__DOT__unnamedblk12__DOT__i));
            vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__position;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__data[0U];
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__data[1U];
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__data[2U];
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__0__data[3U];
            co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 170);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if ((0U == (0xfU & vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH))) {
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__position 
            = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data[0U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data[1U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data[2U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__position;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data[0U];
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data[1U];
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data[2U];
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__data[3U];
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             170);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0U != vlSelfRef.test_ascon_core__DOT__PLAINTEXT.first(test_ascon_core__DOT__unnamedblk13__DOT__i))) {
        test_ascon_core__DOT__unnamedblk13__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk13__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__PLAINTEXT.next(test_ascon_core__DOT__unnamedblk13__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk13__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__ENCRYPT__2__position 
                = VL_MULS_III(32, (IData)(0x10U), test_ascon_core__DOT__unnamedblk13__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__ENCRYPT__2__data, vlSelfRef.test_ascon_core__DOT__PLAINTEXT
                        .at(test_ascon_core__DOT__unnamedblk13__DOT__i));
            vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
            vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__2__position;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__2__data[0U];
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__2__data[1U];
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__2__data[2U];
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__2__data[3U];
            co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 188);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            VL_ASSIGN_W(128,__Vtemp_1, vlSelfRef.test_ascon_core__DOT__CIPHERTEXT
                        .at(test_ascon_core__DOT__unnamedblk13__DOT__i));
            if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                           ^ __Vtemp_1[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                               ^ __Vtemp_1[1U])) 
                         | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                            ^ __Vtemp_1[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                                 ^ 
                                                 __Vtemp_1[3U])))) {
                VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,
                             128,vlSelfRef.test_ascon_core__DOT__data_out.data());
            } else {
                VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,
                             128,vlSelfRef.test_ascon_core__DOT__data_out.data());
            }
        }
    }
    if ((0U == (0xfU & vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH))) {
        __Vtask_test_ascon_core__DOT__ENCRYPT__3__position 
            = vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH;
        __Vtask_test_ascon_core__DOT__ENCRYPT__3__data[0U] = 0U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__3__data[1U] = 0U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__3__data[2U] = 0U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__3__data[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
        vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__3__position;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__3__data[0U];
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__3__data[1U];
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__3__data[2U];
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__3__data[3U];
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             188);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         333);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__tag[0U] 
                   ^ vlSelfRef.test_ascon_core__DOT__TAG[0U]) 
                  | (vlSelfRef.test_ascon_core__DOT__tag[1U] 
                     ^ vlSelfRef.test_ascon_core__DOT__TAG[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__tag[2U] 
                    ^ vlSelfRef.test_ascon_core__DOT__TAG[2U])) 
                | (vlSelfRef.test_ascon_core__DOT__tag[3U] 
                   ^ vlSelfRef.test_ascon_core__DOT__TAG[3U])))) {
        VL_WRITEF_NX("tag = %16x\tMATCH\n",0,128,vlSelfRef.test_ascon_core__DOT__tag.data());
    } else {
        VL_WRITEF_NX("tag = %16x\tFAIL\n",0,128,vlSelfRef.test_ascon_core__DOT__tag.data());
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    vlSelfRef.test_ascon_core__DOT__end_time = VL_TIME_UNITED_Q(1000);
    VL_WRITEF_NX("ENCRYPT cycle used: %3#\n===ENCRYPT TEST END  ===\n",0,
                 64,VL_DIV_QQQ(64, (vlSelfRef.test_ascon_core__DOT__end_time 
                                    - vlSelfRef.test_ascon_core__DOT__start_time), 0x64ULL));
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         351);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("===DECRYPT TEST START===\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         355);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__start_time = VL_TIME_UNITED_Q(1000);
    vlSelfRef.test_ascon_core__DOT__sel_type = 0U;
    vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         366);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.first(test_ascon_core__DOT__unnamedblk14__DOT__i))) {
        test_ascon_core__DOT__unnamedblk14__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk14__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.next(test_ascon_core__DOT__unnamedblk14__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk14__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__position 
                = VL_MULS_III(32, (IData)(0x10U), test_ascon_core__DOT__unnamedblk14__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__data, vlSelfRef.test_ascon_core__DOT__ASS_DATA
                        .at(test_ascon_core__DOT__unnamedblk14__DOT__i));
            vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__position;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__data[0U];
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__data[1U];
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__data[2U];
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__4__data[3U];
            co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 170);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if ((0U == (0xfU & vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH))) {
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__position 
            = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data[0U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data[1U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data[2U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__position;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data[0U];
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data[1U];
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data[2U];
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__5__data[3U];
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             170);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0U != vlSelfRef.test_ascon_core__DOT__CIPHERTEXT.first(test_ascon_core__DOT__unnamedblk15__DOT__i))) {
        test_ascon_core__DOT__unnamedblk15__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk15__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__CIPHERTEXT.next(test_ascon_core__DOT__unnamedblk15__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk15__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__DECRYPT__6__position 
                = VL_MULS_III(32, (IData)(0x10U), test_ascon_core__DOT__unnamedblk15__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__DECRYPT__6__data, vlSelfRef.test_ascon_core__DOT__CIPHERTEXT
                        .at(test_ascon_core__DOT__unnamedblk15__DOT__i));
            vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
            vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 1U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__DECRYPT__6__position;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__6__data[0U];
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__6__data[1U];
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__6__data[2U];
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__6__data[3U];
            co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            VL_ASSIGN_W(128,__Vtemp_2, vlSelfRef.test_ascon_core__DOT__PLAINTEXT
                        .at(test_ascon_core__DOT__unnamedblk15__DOT__i));
            if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                           ^ __Vtemp_2[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                               ^ __Vtemp_2[1U])) 
                         | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                            ^ __Vtemp_2[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                                 ^ 
                                                 __Vtemp_2[3U])))) {
                VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,
                             128,vlSelfRef.test_ascon_core__DOT__data_out.data());
            } else {
                VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,
                             128,vlSelfRef.test_ascon_core__DOT__data_out.data());
            }
        }
    }
    if ((0U == (0xfU & vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH))) {
        __Vtask_test_ascon_core__DOT__DECRYPT__7__position 
            = vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH;
        __Vtask_test_ascon_core__DOT__DECRYPT__7__data[0U] = 0U;
        __Vtask_test_ascon_core__DOT__DECRYPT__7__data[1U] = 0U;
        __Vtask_test_ascon_core__DOT__DECRYPT__7__data[2U] = 0U;
        __Vtask_test_ascon_core__DOT__DECRYPT__7__data[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
        vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 1U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__DECRYPT__7__position;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__7__data[0U];
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__7__data[1U];
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__7__data[2U];
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__7__data[3U];
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             206);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         391);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__tag[0U] 
                   ^ vlSelfRef.test_ascon_core__DOT__TAG[0U]) 
                  | (vlSelfRef.test_ascon_core__DOT__tag[1U] 
                     ^ vlSelfRef.test_ascon_core__DOT__TAG[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__tag[2U] 
                    ^ vlSelfRef.test_ascon_core__DOT__TAG[2U])) 
                | (vlSelfRef.test_ascon_core__DOT__tag[3U] 
                   ^ vlSelfRef.test_ascon_core__DOT__TAG[3U])))) {
        VL_WRITEF_NX("tag = %16x\tMATCH\n",0,128,vlSelfRef.test_ascon_core__DOT__tag.data());
    } else {
        VL_WRITEF_NX("tag = %16x\tFAIL\n",0,128,vlSelfRef.test_ascon_core__DOT__tag.data());
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    vlSelfRef.test_ascon_core__DOT__end_time = VL_TIME_UNITED_Q(1000);
    VL_WRITEF_NX("DECRYPT cycle used: %3#\n===DECRYPT TEST END  ===\n",0,
                 64,VL_DIV_QQQ(64, (vlSelfRef.test_ascon_core__DOT__end_time 
                                    - vlSelfRef.test_ascon_core__DOT__start_time), 0x64ULL));
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         409);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("===HASH256 TEST START===\n",0);
    vlSelfRef.test_ascon_core__DOT__start_time = VL_TIME_UNITED_Q(1000);
    vlSelfRef.test_ascon_core__DOT__sel_type = 1U;
    vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         423);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((0U != vlSelfRef.test_ascon_core__DOT__MESSAGE.first(test_ascon_core__DOT__unnamedblk16__DOT__i))) {
        test_ascon_core__DOT__unnamedblk16__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk16__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__MESSAGE.next(test_ascon_core__DOT__unnamedblk16__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk16__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__position 
                = VL_MULS_III(32, (IData)(8U), test_ascon_core__DOT__unnamedblk16__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__data, vlSelfRef.test_ascon_core__DOT__MESSAGE
                        .at(test_ascon_core__DOT__unnamedblk16__DOT__i));
            vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
            vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
            vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__position;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__data[0U];
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__data[1U];
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__data[2U];
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__8__data[3U];
            co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 224);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if ((0U == (7U & vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH))) {
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__position 
            = vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH;
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data[0U] = 0U;
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data[1U] = 0U;
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data[2U] = 0U;
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
        vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
        vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__position;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data[0U];
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data[1U];
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data[2U];
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__9__data[3U];
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             224);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         236);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_ASSIGN_W(128,__Vtemp_3, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                .at(0U));
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                   ^ __Vtemp_3[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                       ^ __Vtemp_3[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                    ^ __Vtemp_3[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                         ^ __Vtemp_3[3U])))) {
        VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    } else {
        VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    }
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         243);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_ASSIGN_W(128,__Vtemp_4, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                .at(1U));
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                   ^ __Vtemp_4[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                       ^ __Vtemp_4[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                    ^ __Vtemp_4[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                         ^ __Vtemp_4[3U])))) {
        VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    } else {
        VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    }
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         250);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_ASSIGN_W(128,__Vtemp_5, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                .at(2U));
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                   ^ __Vtemp_5[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                       ^ __Vtemp_5[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                    ^ __Vtemp_5[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                         ^ __Vtemp_5[3U])))) {
        VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    } else {
        VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    }
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         257);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_ASSIGN_W(128,__Vtemp_6, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                .at(3U));
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                   ^ __Vtemp_6[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                       ^ __Vtemp_6[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                    ^ __Vtemp_6[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                         ^ __Vtemp_6[3U])))) {
        VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    } else {
        VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    vlSelfRef.test_ascon_core__DOT__end_time = VL_TIME_UNITED_Q(1000);
    VL_WRITEF_NX("HASH256 cycle used: %3#\n===HASH256 TEST END  ===\n",0,
                 64,VL_DIV_QQQ(64, (vlSelfRef.test_ascon_core__DOT__end_time 
                                    - vlSelfRef.test_ascon_core__DOT__start_time), 0x64ULL));
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         445);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_FINISH_MT("../tb/test_ascon_core.sv", 449, "");
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
                                             39);
        vlSelfRef.test_ascon_core__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.test_ascon_core__DOT__clk)));
    }
}

void Vtest_ascon_core___024root___act_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf);

void Vtest_ascon_core___024root___eval_act(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_ascon_core___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___act_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_48;
    // Body
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_5 
        = (1U & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                 & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__data_out[0U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U];
        vlSelfRef.test_ascon_core__DOT__data_out[1U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U];
        vlSelfRef.test_ascon_core__DOT__data_out[2U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U];
        vlSelfRef.test_ascon_core__DOT__data_out[3U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x2_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x3_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x4_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__data_out[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__data_out[1U] = 0U;
        if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out);
            vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                           >> 0x20U));
        } else {
            vlSelfRef.test_ascon_core__DOT__data_out[2U] = 0U;
            vlSelfRef.test_ascon_core__DOT__data_out[3U] = 0U;
        }
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x2_last = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x3_last = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x4_last = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_4 
        = (1U & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                 & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_3 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
            | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
               | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash))) 
           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
    if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[2U])));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0 
        = (vlSelfRef.test_ascon_core__DOT__data_length 
           - vlSelfRef.test_ascon_core__DOT__data_position);
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_4));
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_3) {
        if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM;
        } else if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt;
        } else if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash;
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        }
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
    }
    if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8 
        = (((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)) 
            | ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)) 
               | (3U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))))
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
            : ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                    : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                        : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                            : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                    : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                        : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                            : ((8U 
                                                == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                ? (1ULL 
                                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM)
                                                : (
                                                   (9U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                    ^ 
                                                    (0x100ULL 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                    : 
                                                   ((0xaU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                     ^ 
                                                     (0x10000ULL 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                     : 
                                                    ((0xbU 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                      ? 
                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                      ^ 
                                                      (0x1000000ULL 
                                                       | (QData)((IData)(
                                                                         (0xffffffU 
                                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                      : 
                                                     ((0xcU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                       ? 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                       ^ 
                                                       (0x100000000ULL 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                       : 
                                                      ((0xdU 
                                                        == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                        ? 
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                        ^ 
                                                        (0x10000000000ULL 
                                                         | (0xffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                                        : 
                                                       ((0xeU 
                                                         == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                         ? 
                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                         ^ 
                                                         (0x1000000000000ULL 
                                                          | (0xffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                                         : 
                                                        ((0xfU 
                                                          == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                          ? 
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                          ^ 
                                                          (0x100000000000000ULL 
                                                           | (0xffffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                                          : 
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[0U])))))))))))))))))))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
    } else if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x3_last;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x4_last;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8);
    if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
        if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
                = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[2U])));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 
                = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[0U])));
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 = 0ULL;
        }
    } else if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
    } else if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
            = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                 ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                 : 0ULL) ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__key[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 
            = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                : 0ULL);
    } else if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
        if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 = 0ULL;
        }
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
        = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
            ? 1ULL : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (0x100ULL | (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                       : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                           ? (0x10000ULL | (QData)((IData)(
                                                           (0xffffU 
                                                            & vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                           : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                               ? (0x1000000ULL | (QData)((IData)(
                                                                 (0xffffffU 
                                                                  & vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                               : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                   ? (0x100000000ULL 
                                      | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                                   : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                       ? (0x10000000000ULL 
                                          | (0xffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                                       : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                           ? (0x1000000000000ULL 
                                              | (0xffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                                           : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                               ? (0x100000000000000ULL 
                                                  | (0xffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                                               : (((QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.test_ascon_core__DOT__data_in[2U])))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
        = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
            ? 0ULL : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? 0ULL : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                  ? 0ULL : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                             ? 0ULL
                                             : ((4U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                  ? 0ULL
                                                  : 
                                                 ((6U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? 1ULL
                                                     : 
                                                    ((9U 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                      ? 
                                                     (0x100ULL 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                      : 
                                                     ((0xaU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                       ? 
                                                      (0x10000ULL 
                                                       | (QData)((IData)(
                                                                         (0xffffU 
                                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                       : 
                                                      ((0xbU 
                                                        == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                        ? 
                                                       (0x1000000ULL 
                                                        | (QData)((IData)(
                                                                          (0xffffffU 
                                                                           & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                        : 
                                                       ((0xcU 
                                                         == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                         ? 
                                                        (0x100000000ULL 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                                         : 
                                                        ((0xdU 
                                                          == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                          ? 
                                                         (0x10000000000ULL 
                                                          | (0xffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                          : 
                                                         ((0xeU 
                                                           == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                           ? 
                                                          (0x1000000000000ULL 
                                                           | (0xffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                           : 
                                                          ((0xfU 
                                                            == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                            ? 
                                                           (0x100000000000000ULL 
                                                            | (0xffffffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__data_in[0U])))))))))))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__s0 
        = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
            ? (1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM)
            : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                   ^ (0x100ULL | (QData)((IData)((0xffU 
                                                  & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                    ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                       ^ (0x10000ULL | (QData)((IData)(
                                                       (0xffffU 
                                                        & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                    : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                           ^ (0x1000000ULL | (QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                        : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                            ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                               ^ (0x100000000ULL | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                            : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                   ^ (0x10000000000ULL 
                                      | (0xffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))
                                : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                    ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                       ^ (0x1000000000000ULL 
                                          | (0xffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))
                                    : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                           ^ (0x100000000000000ULL 
                                              | (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))
                                        : (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                           ^ (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__s0
             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                 ? ((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                     ? (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                     : (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                        ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                 : 0ULL)) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
             ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                 ? 0x1000808c0001ULL : ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                         ? 0x80100cc0002ULL
                                         : ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                             ? 0x80000cc0003ULL
                                             : 0x80000cc0004ULL)))
             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                 ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__s0
                 : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                     ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                         : 0ULL) : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                     ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                         : 0ULL) : 0ULL)))) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12);
    __Vtemp_32[1U] = ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                  >> 0x20U)) : ((0xbU 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                 ? (IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffffU 
                                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                                            >> 0x20U))
                                                 : 
                                                ((0xcU 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xdU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? (IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xeU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? (IData)(
                                                              ((0xffffffffffffULL 
                                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xfU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? (IData)(
                                                               ((0xffffffffffffffULL 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1 
                                                                >> 0x20U))))))));
    __Vtemp_34[0U] = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)((QData)((IData)((0xffU 
                                                  & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                       : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                           ? (IData)((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                           : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                               ? (IData)((QData)((IData)(
                                                         (0xffffffU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                               : ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                   ? (IData)((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))
                                   : ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                       ? (IData)((0xffffffffffULL 
                                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                       : ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                           ? (IData)(
                                                     (0xffffffffffffULL 
                                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                           : ((0xfU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                               ? (IData)(
                                                         (0xffffffffffffffULL 
                                                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                               : (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))))))));
    __Vtemp_36[3U] = ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                  >> 0x20U)) : ((9U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                            >> 0x20U))
                                                 : 
                                                ((0xaU 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xbU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xcU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? (IData)(
                                                              (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xdU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                >> 0x20U))
                                                     : 
                                                    ((0xeU 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                      ? (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                 >> 0x20U))
                                                      : 
                                                     ((0xfU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                       ? (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                  >> 0x20U))
                                                       : (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                  >> 0x20U))))))))));
    __Vtemp_40[2U] = ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)((0xffffffffffffULL 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0))
                       : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                           ? (IData)((0xffffffffffffffULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0))
                           : ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                               : ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                   : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                       ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                       : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                           : ((0xcU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                               : ((0xdU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                   : 
                                                  ((0xeU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                    : 
                                                   ((0xfU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                     : (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))))))))));
    __Vtemp_48[3U] = ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                                  >> 0x20U)) : ((3U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                 ? (IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffffU 
                                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                                                            >> 0x20U))
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? (IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                              >> 0x20U))
                                                   : 
                                                  ((6U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? (IData)(
                                                              ((0xffffffffffffULL 
                                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                               >> 0x20U))
                                                    : 
                                                   ((7U 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? (IData)(
                                                               ((0xffffffffffffffULL 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp_36[3U]))))));
    if ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] = 0U;
    } else if ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
            = (IData)((QData)((IData)((0xffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
            = (IData)(((QData)((IData)((0xffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                       >> 0x20U));
    } else {
        if ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)((0xffffU 
                                           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        } else if ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)((0xffffffU 
                                           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        } else if ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)));
        } else if ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((0xffffffffffULL & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0));
        } else {
            if ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else if ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else if ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] 
                    = __Vtemp_34[0U];
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] 
                    = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                        ? (IData)(((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                   >> 0x20U)) : __Vtemp_32[1U]);
            }
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = __Vtemp_40[2U];
        }
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
            = __Vtemp_48[3U];
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
            : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                ? ((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                    ? (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                    : (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                       ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                : 0ULL));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x2_last
                            : 0ULL)) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12
            : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                    ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                        : 0ULL) : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                    ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                        : 0ULL) : 0ULL))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xf0ULL ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                            : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                     : 0ULL) ^ (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__key[2U]))))
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                    ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                        : 0ULL) : 0ULL)))) 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xe1ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xd2ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xc3ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                          >> 0x27U))))))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x4_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x2_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x3_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x0_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x1_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x4_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x2_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x3_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x0_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x1_p8 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
                                              >> 0x1cU))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
            : 0ULL);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init;
}

void Vtest_ascon_core___024root___nba_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core___024root___nba_sequent__TOP__1(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core___024root___nba_comb__TOP__0(Vtest_ascon_core___024root* vlSelf);

void Vtest_ascon_core___024root___eval_nba(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.test_ascon_core__DOT__rst_n) {
        if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12;
            if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12;
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash = 0ULL;
            }
        }
        vlSelfRef.test_ascon_core__DOT__tag[0U] = (IData)(
                                                          (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                                             : 0ULL) 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__key[2U])))));
        vlSelfRef.test_ascon_core__DOT__tag[1U] = (IData)(
                                                          ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                              ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                                              : 0ULL) 
                                                            ^ 
                                                            (((QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                                           >> 0x20U));
        vlSelfRef.test_ascon_core__DOT__tag[2U] = (IData)(
                                                          (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                                             : 0ULL) 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__key[0U])))));
        vlSelfRef.test_ascon_core__DOT__tag[3U] = (IData)(
                                                          ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                              ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                                              : 0ULL) 
                                                            ^ 
                                                            (((QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                                                           >> 0x20U));
        if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            if ((0x10U <= (vlSelfRef.test_ascon_core__DOT__data_length 
                           - vlSelfRef.test_ascon_core__DOT__data_position))) {
                if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt = 0ULL;
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] 
                    = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                               ^ (((QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] 
                    = (IData)(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                ^ (((QData)((IData)(
                                                    vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))) 
                               >> 0x20U));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] 
                    = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                               ^ (((QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] 
                    = (IData)(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                                ^ (((QData)((IData)(
                                                    vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__data_in[2U])))) 
                               >> 0x20U));
            } else {
                if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
                    if (((((((((0U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                       - vlSelfRef.test_ascon_core__DOT__data_position)) 
                               | (1U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                         - vlSelfRef.test_ascon_core__DOT__data_position))) 
                              | (2U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                        - vlSelfRef.test_ascon_core__DOT__data_position))) 
                             | (3U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                       - vlSelfRef.test_ascon_core__DOT__data_position))) 
                            | (4U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                      - vlSelfRef.test_ascon_core__DOT__data_position))) 
                           | (5U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                     - vlSelfRef.test_ascon_core__DOT__data_position))) 
                          | (6U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                    - vlSelfRef.test_ascon_core__DOT__data_position))) 
                         | (7U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                   - vlSelfRef.test_ascon_core__DOT__data_position)))) {
                        if ((0U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                    - vlSelfRef.test_ascon_core__DOT__data_position))) {
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
                        } else if ((1U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                           - vlSelfRef.test_ascon_core__DOT__data_position))) {
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                                = ((0xffffffffffffff00ULL 
                                    & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt) 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
                        } else if ((2U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                           - vlSelfRef.test_ascon_core__DOT__data_position))) {
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                                = ((0xffffffffffff0000ULL 
                                    & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt) 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
                        } else if ((3U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                           - vlSelfRef.test_ascon_core__DOT__data_position))) {
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                                = ((0xffffffffff000000ULL 
                                    & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt) 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
                        } else if ((4U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                           - vlSelfRef.test_ascon_core__DOT__data_position))) {
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                                = (((QData)((IData)(
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                                                     >> 0x20U))) 
                                    << 0x20U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
                        } else if ((5U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                           - vlSelfRef.test_ascon_core__DOT__data_position))) {
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                                = (((QData)((IData)(
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                                                                >> 0x28U))))) 
                                    << 0x28U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
                        } else if ((6U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                           - vlSelfRef.test_ascon_core__DOT__data_position))) {
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                                = (((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                                                                >> 0x30U))))) 
                                    << 0x30U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
                        } else {
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                                = (((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                                                                >> 0x38U))))) 
                                    << 0x38U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
                        }
                    } else if (((((((((8U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                              - vlSelfRef.test_ascon_core__DOT__data_position)) 
                                      | (9U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                                - vlSelfRef.test_ascon_core__DOT__data_position))) 
                                     | (0xaU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                                 - vlSelfRef.test_ascon_core__DOT__data_position))) 
                                    | (0xbU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                                - vlSelfRef.test_ascon_core__DOT__data_position))) 
                                   | (0xcU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                               - vlSelfRef.test_ascon_core__DOT__data_position))) 
                                  | (0xdU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                              - vlSelfRef.test_ascon_core__DOT__data_position))) 
                                 | (0xeU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                             - vlSelfRef.test_ascon_core__DOT__data_position))) 
                                | (0xfU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                            - vlSelfRef.test_ascon_core__DOT__data_position)))) {
                        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last;
                        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                            = ((8U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                       - vlSelfRef.test_ascon_core__DOT__data_position))
                                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                : ((9U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                           - vlSelfRef.test_ascon_core__DOT__data_position))
                                    ? ((0xffffffffffffff00ULL 
                                        & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt) 
                                       ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                    : ((0xaU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                                 - vlSelfRef.test_ascon_core__DOT__data_position))
                                        ? ((0xffffffffffff0000ULL 
                                            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt) 
                                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                        : ((0xbU == 
                                            (vlSelfRef.test_ascon_core__DOT__data_length 
                                             - vlSelfRef.test_ascon_core__DOT__data_position))
                                            ? ((0xffffffffff000000ULL 
                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt) 
                                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                            : ((0xcU 
                                                == 
                                                (vlSelfRef.test_ascon_core__DOT__data_length 
                                                 - vlSelfRef.test_ascon_core__DOT__data_position))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                                                     >> 0x20U))) 
                                                    << 0x20U) 
                                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                                : (
                                                   (0xdU 
                                                    == 
                                                    (vlSelfRef.test_ascon_core__DOT__data_length 
                                                     - vlSelfRef.test_ascon_core__DOT__data_position))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (IData)(
                                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                                                                >> 0x28U))))) 
                                                     << 0x28U) 
                                                    ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (vlSelfRef.test_ascon_core__DOT__data_length 
                                                      - vlSelfRef.test_ascon_core__DOT__data_position))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                                                                >> 0x30U))))) 
                                                      << 0x30U) 
                                                     ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                                     : 
                                                    (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                                                                >> 0x38U))))) 
                                                      << 0x38U) 
                                                     ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last))))))));
                    }
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt);
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt);
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x2_last;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x3_last;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x4_last;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U];
            }
        }
        if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
            if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x0_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x2_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x3_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM 
                    = ((0x10U <= (vlSelfRef.test_ascon_core__DOT__data_length 
                                  - vlSelfRef.test_ascon_core__DOT__data_position))
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x4_p8
                        : (0x8000000000000000ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x4_p8));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x1_p8;
            } else if ((8U <= (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position))) {
                if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM = 0ULL;
                }
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__s0;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM;
            }
        }
        if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12);
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12);
        } else if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count 
                = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                    | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                   | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash));
        }
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__tag[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_sequent__TOP__1(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_5 
        = (1U & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                 & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_4 
        = (1U & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                 & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0 
        = (vlSelfRef.test_ascon_core__DOT__data_length 
           - vlSelfRef.test_ascon_core__DOT__data_position);
    if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[0U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[2U])));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 = 0ULL;
    }
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_4));
    if ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last = 1ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x100000000000000ULL | (0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
            = ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                ? 1ULL : ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                           ? (0x100ULL | (QData)((IData)(
                                                         (0xffU 
                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                           : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                               ? (0x10000ULL | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                               : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                   ? (0x1000000ULL 
                                      | (QData)((IData)(
                                                        (0xffffffU 
                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                   : ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                       ? (0x100000000ULL 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                       : ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                           ? (0x10000000000ULL 
                                              | (0xffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                           : ((0xeU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                               ? (0x1000000000000ULL 
                                                  | (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                               : ((0xfU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? 
                                                  (0x100000000000000ULL 
                                                   | (0xffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[0U])))))))))));
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_comb__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_48;
    // Body
    if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__data_out[0U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U];
        vlSelfRef.test_ascon_core__DOT__data_out[1U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U];
        vlSelfRef.test_ascon_core__DOT__data_out[2U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U];
        vlSelfRef.test_ascon_core__DOT__data_out[3U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x2_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x3_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x4_last 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__data_out[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__data_out[1U] = 0U;
        if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out);
            vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                           >> 0x20U));
        } else {
            vlSelfRef.test_ascon_core__DOT__data_out[2U] = 0U;
            vlSelfRef.test_ascon_core__DOT__data_out[3U] = 0U;
        }
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x2_last = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x3_last = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x4_last = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_3 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
            | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
               | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash))) 
           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_1_3) {
        if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM;
        } else if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt;
        } else if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash;
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        }
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
    if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8 
        = (((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)) 
            | ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)) 
               | (3U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))))
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
            : ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                    : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                        : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                            : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                    : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                        : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                            : ((8U 
                                                == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                ? (1ULL 
                                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM)
                                                : (
                                                   (9U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                    ^ 
                                                    (0x100ULL 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                    : 
                                                   ((0xaU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                     ^ 
                                                     (0x10000ULL 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                     : 
                                                    ((0xbU 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                      ? 
                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                      ^ 
                                                      (0x1000000ULL 
                                                       | (QData)((IData)(
                                                                         (0xffffffU 
                                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                      : 
                                                     ((0xcU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                       ? 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                       ^ 
                                                       (0x100000000ULL 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                       : 
                                                      ((0xdU 
                                                        == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                        ? 
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                        ^ 
                                                        (0x10000000000ULL 
                                                         | (0xffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                                        : 
                                                       ((0xeU 
                                                         == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                         ? 
                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                         ^ 
                                                         (0x1000000000000ULL 
                                                          | (0xffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                                         : 
                                                        ((0xfU 
                                                          == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                          ? 
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                          ^ 
                                                          (0x100000000000000ULL 
                                                           | (0xffffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))
                                                          : 
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[0U])))))))))))))))))))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
    } else if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x3_last;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x4_last;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__s0 
        = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
            ? (1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM)
            : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                   ^ (0x100ULL | (QData)((IData)((0xffU 
                                                  & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                    ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                       ^ (0x10000ULL | (QData)((IData)(
                                                       (0xffffU 
                                                        & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                    : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                           ^ (0x1000000ULL | (QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                        : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                            ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                               ^ (0x100000000ULL | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                            : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                   ^ (0x10000000000ULL 
                                      | (0xffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))
                                : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                    ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                       ^ (0x1000000000000ULL 
                                          | (0xffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))
                                    : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                           ^ (0x100000000000000ULL 
                                              | (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))
                                        : (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                           ^ (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__s0
             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                 ? ((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                     ? (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                     : (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                        ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                 : 0ULL)) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8);
    if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
        if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
                = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[2U])));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 
                = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[0U])));
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 = 0ULL;
        }
    } else if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
    } else if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
            = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                 ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                 : 0ULL) ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__key[0U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 
            = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                : 0ULL);
    } else if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
        if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 = 0ULL;
        }
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
             ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                 ? 0x1000808c0001ULL : ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                         ? 0x80100cc0002ULL
                                         : ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                             ? 0x80000cc0003ULL
                                             : 0x80000cc0004ULL)))
             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                 ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__s0
                 : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                     ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                         : 0ULL) : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                     ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                         : 0ULL) : 0ULL)))) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12);
    __Vtemp_32[1U] = ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                  >> 0x20U)) : ((0xbU 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                 ? (IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffffU 
                                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                                            >> 0x20U))
                                                 : 
                                                ((0xcU 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xdU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? (IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xeU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? (IData)(
                                                              ((0xffffffffffffULL 
                                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xfU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? (IData)(
                                                               ((0xffffffffffffffULL 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1 
                                                                >> 0x20U))))))));
    __Vtemp_34[0U] = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)((QData)((IData)((0xffU 
                                                  & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                       : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                           ? (IData)((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                           : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                               ? (IData)((QData)((IData)(
                                                         (0xffffffU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                               : ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                   ? (IData)((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))
                                   : ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                       ? (IData)((0xffffffffffULL 
                                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                       : ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                           ? (IData)(
                                                     (0xffffffffffffULL 
                                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                           : ((0xfU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                               ? (IData)(
                                                         (0xffffffffffffffULL 
                                                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                               : (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))))))));
    __Vtemp_36[3U] = ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                  >> 0x20U)) : ((9U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                            >> 0x20U))
                                                 : 
                                                ((0xaU 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xbU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xcU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? (IData)(
                                                              (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xdU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                >> 0x20U))
                                                     : 
                                                    ((0xeU 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                      ? (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                 >> 0x20U))
                                                      : 
                                                     ((0xfU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                       ? (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                  >> 0x20U))
                                                       : (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                  >> 0x20U))))))))));
    __Vtemp_40[2U] = ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)((0xffffffffffffULL 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0))
                       : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                           ? (IData)((0xffffffffffffffULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0))
                           : ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                               : ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                   : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                       ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                       : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                           : ((0xcU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                               : ((0xdU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                   : 
                                                  ((0xeU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                    : 
                                                   ((0xfU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                     : (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))))))))));
    __Vtemp_48[3U] = ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                       ? (IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                                  >> 0x20U)) : ((3U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                 ? (IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffffU 
                                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                                                            >> 0x20U))
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                   ? (IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                              >> 0x20U))
                                                   : 
                                                  ((6U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                    ? (IData)(
                                                              ((0xffffffffffffULL 
                                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                               >> 0x20U))
                                                    : 
                                                   ((7U 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                                                     ? (IData)(
                                                               ((0xffffffffffffffULL 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp_36[3U]))))));
    if ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] = 0U;
    } else if ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
            = (IData)((QData)((IData)((0xffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
            = (IData)(((QData)((IData)((0xffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                       >> 0x20U));
    } else {
        if ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)((0xffffU 
                                           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        } else if ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)((0xffffffU 
                                           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        } else if ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)));
        } else if ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((0xffffffffffULL & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0));
        } else {
            if ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else if ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else if ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] 
                    = __Vtemp_34[0U];
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] 
                    = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_0)
                        ? (IData)(((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                   >> 0x20U)) : __Vtemp_32[1U]);
            }
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = __Vtemp_40[2U];
        }
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
            = __Vtemp_48[3U];
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
            : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                ? ((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                    ? (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                    : (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                       ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                : 0ULL));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x2_last
                            : 0ULL)) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12
            : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                    ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                        : 0ULL) : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                    ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                        : 0ULL) : 0ULL))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xf0ULL ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                            : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                     : 0ULL) ^ (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__key[2U]))))
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                    ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                        : 0ULL) : 0ULL)))) 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xe1ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xd2ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xc3ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                          >> 0x27U))))))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x4_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x2_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x3_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x0_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x1_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x4_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x2_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x3_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x0_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__x1_p8 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[7U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[8U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[9U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[0xaU] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o 
                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
        = ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
                                              >> 0x1cU))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
            : 0ULL);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init;
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
