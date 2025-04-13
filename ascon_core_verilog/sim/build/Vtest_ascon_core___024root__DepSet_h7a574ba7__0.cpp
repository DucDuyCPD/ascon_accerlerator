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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__done__0 
        = vlSelfRef.test_ascon_core__DOT__done;
}

VL_INLINE_OPT VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__0(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_core__DOT__clk = 1U;
    vlSelfRef.test_ascon_core__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         365);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_ascon_core__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         366);
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i__Vfirst = 0;
    CData/*1:0*/ __Vtask_test_ascon_core__DOT__INITIALIZATION__0__select_type;
    __Vtask_test_ascon_core__DOT__INITIALIZATION__0__select_type = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__position;
    __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__position;
    __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__3__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ENCRYPT__3__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__3__position;
    __Vtask_test_ascon_core__DOT__ENCRYPT__3__position = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__127__03a96__KET__;
    __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__127__03a96__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__95__03a64__KET__;
    __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__95__03a64__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__63__03a32__KET__;
    __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__63__03a32__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__31__03a0__KET__;
    __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__31__03a0__KET__ = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__4__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ENCRYPT__4__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__4__position;
    __Vtask_test_ascon_core__DOT__ENCRYPT__4__position = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__127__03a96__KET__;
    __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__127__03a96__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__95__03a64__KET__;
    __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__95__03a64__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__63__03a32__KET__;
    __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__63__03a32__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__31__03a0__KET__;
    __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__31__03a0__KET__ = 0;
    CData/*1:0*/ __Vtask_test_ascon_core__DOT__INITIALIZATION__6__select_type;
    __Vtask_test_ascon_core__DOT__INITIALIZATION__6__select_type = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__position;
    __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__position;
    __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__9__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__DECRYPT__9__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__9__position;
    __Vtask_test_ascon_core__DOT__DECRYPT__9__position = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__127__03a96__KET__;
    __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__127__03a96__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__95__03a64__KET__;
    __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__95__03a64__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__63__03a32__KET__;
    __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__63__03a32__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__31__03a0__KET__;
    __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__31__03a0__KET__ = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__10__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__DECRYPT__10__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__10__position;
    __Vtask_test_ascon_core__DOT__DECRYPT__10__position = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__127__03a96__KET__;
    __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__127__03a96__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__95__03a64__KET__;
    __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__95__03a64__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__63__03a32__KET__;
    __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__63__03a32__KET__ = 0;
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__31__03a0__KET__;
    __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__31__03a0__KET__ = 0;
    CData/*1:0*/ __Vtask_test_ascon_core__DOT__INITIALIZATION__12__select_type;
    __Vtask_test_ascon_core__DOT__INITIALIZATION__12__select_type = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__position;
    __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__position = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__in;
    VL_ZERO_W(128, __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__in);
    IData/*31:0*/ __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__position;
    __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__position = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         394);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         396);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("===ENCRYPT TEST START===\n",0);
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time 
        = VL_TIME_UNITED_Q(1000);
    __Vtask_test_ascon_core__DOT__INITIALIZATION__0__select_type = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 1U;
    vlSelfRef.test_ascon_core__DOT__sel_type = __Vtask_test_ascon_core__DOT__INITIALIZATION__0__select_type;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    if ((0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.first(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i))) {
        test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.next(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__position 
                = VL_MULS_III(32, (IData)(0x10U), test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__in, vlSelfRef.test_ascon_core__DOT__ASS_DATA
                        .at(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i));
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 146);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 148);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__position;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 151);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__in[2U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__in[3U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 155);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__in[0U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 157);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__1__in[1U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 160);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
            while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
                co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( test_ascon_core.done)", 
                                                                     "../tb/test_ascon_core.sv", 
                                                                     163);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
        }
    }
    if ((0U == (0xfU & vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH))) {
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__position 
            = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in[0U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in[1U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in[2U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in[3U] = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             146);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             148);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__position;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             151);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in[2U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in[3U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             155);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in[0U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             157);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__2__in[1U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             160);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
        while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
            co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( test_ascon_core.done)", 
                                                                 "../tb/test_ascon_core.sv", 
                                                                 163);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    }
    if ((0U != vlSelfRef.test_ascon_core__DOT__PLAINTEXT.first(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i))) {
        test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__PLAINTEXT.next(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__ENCRYPT__3__position 
                = VL_MULS_III(32, (IData)(0x10U), test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__ENCRYPT__3__in, vlSelfRef.test_ascon_core__DOT__PLAINTEXT
                        .at(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i));
            vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out[0U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__31__03a0__KET__;
            vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out[1U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__63__03a32__KET__;
            vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out[2U] 
                = (IData)((((QData)((IData)(__Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__127__03a96__KET__)) 
                            << 0x20U) | (QData)((IData)(__Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__95__03a64__KET__))));
            vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out[3U] 
                = (IData)(((((QData)((IData)(__Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__127__03a96__KET__)) 
                             << 0x20U) | (QData)((IData)(__Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__95__03a64__KET__))) 
                           >> 0x20U));
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 174);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 176);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__3__position;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 179);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__3__in[2U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 181);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__3__in[3U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 183);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__3__in[0U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 185);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__ENCRYPT__3__in[1U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 188);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 1U;
            vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
            while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
                co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( test_ascon_core.done)", 
                                                                     "../tb/test_ascon_core.sv", 
                                                                     191);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 192);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 195);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__95__03a64__KET__ 
                = vlSelfRef.test_ascon_core__DOT__data_out[2U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 197);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__127__03a96__KET__ 
                = vlSelfRef.test_ascon_core__DOT__data_out[3U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 199);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__31__03a0__KET__ 
                = vlSelfRef.test_ascon_core__DOT__data_out[0U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 201);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_test_ascon_core__DOT__ENCRYPT__3__out__BRA__63__03a32__KET__ 
                = vlSelfRef.test_ascon_core__DOT__data_out[1U];
            VL_ASSIGN_W(128,__Vtemp_2, vlSelfRef.test_ascon_core__DOT__CIPHERTEXT
                        .at(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i));
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
    if ((0U == (0xfU & vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH))) {
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__position 
            = vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH;
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__in[0U] = 0U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__in[1U] = 0U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__in[2U] = 0U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__in[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out[0U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__31__03a0__KET__;
        vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out[1U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__63__03a32__KET__;
        vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out[2U] 
            = (IData)((((QData)((IData)(__Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__127__03a96__KET__)) 
                        << 0x20U) | (QData)((IData)(__Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__95__03a64__KET__))));
        vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out[3U] 
            = (IData)(((((QData)((IData)(__Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__127__03a96__KET__)) 
                         << 0x20U) | (QData)((IData)(__Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__95__03a64__KET__))) 
                       >> 0x20U));
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             174);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             176);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__4__position;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             179);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__4__in[2U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             181);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__4__in[3U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             183);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__4__in[0U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             185);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__ENCRYPT__4__in[1U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             188);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 1U;
        vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 0U;
        while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
            co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( test_ascon_core.done)", 
                                                                 "../tb/test_ascon_core.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             192);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             195);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__95__03a64__KET__ 
            = vlSelfRef.test_ascon_core__DOT__data_out[2U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             197);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__127__03a96__KET__ 
            = vlSelfRef.test_ascon_core__DOT__data_out[3U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             199);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__31__03a0__KET__ 
            = vlSelfRef.test_ascon_core__DOT__data_out[0U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             201);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_test_ascon_core__DOT__ENCRYPT__4__out__BRA__63__03a32__KET__ 
            = vlSelfRef.test_ascon_core__DOT__data_out[1U];
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         249);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 1U;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             251);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         255);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[0U] 
        = vlSelfRef.test_ascon_core__DOT__tag[0U];
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         257);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[1U] 
        = vlSelfRef.test_ascon_core__DOT__tag[1U];
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         259);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[2U] 
        = vlSelfRef.test_ascon_core__DOT__tag[2U];
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         261);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[3U] 
        = vlSelfRef.test_ascon_core__DOT__tag[3U];
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[0U] 
                   ^ vlSelfRef.test_ascon_core__DOT__TAG[0U]) 
                  | (vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[1U] 
                     ^ vlSelfRef.test_ascon_core__DOT__TAG[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[2U] 
                    ^ vlSelfRef.test_ascon_core__DOT__TAG[2U])) 
                | (vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[3U] 
                   ^ vlSelfRef.test_ascon_core__DOT__TAG[3U])))) {
        VL_WRITEF_NX("tag = %16x\tMATCH\n",0,128,vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out.data());
    } else {
        VL_WRITEF_NX("tag = %16x\tFAIL\n",0,128,vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out.data());
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time 
        = VL_TIME_UNITED_Q(1000);
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__encrypt_cycle_use 
        = VL_ISTOR_D_Q(64, VL_DIVS_QQQ(64, (vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time 
                                            - vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time), 0x64ULL));
    VL_WRITEF_NX("===ENCRYPT TEST END  ===\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         435);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("===DECRYPT TEST START===\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         439);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time 
        = VL_TIME_UNITED_Q(1000);
    __Vtask_test_ascon_core__DOT__INITIALIZATION__6__select_type = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 1U;
    vlSelfRef.test_ascon_core__DOT__sel_type = __Vtask_test_ascon_core__DOT__INITIALIZATION__6__select_type;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    if ((0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.first(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i))) {
        test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.next(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__position 
                = VL_MULS_III(32, (IData)(0x10U), test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__in, vlSelfRef.test_ascon_core__DOT__ASS_DATA
                        .at(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i));
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 146);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 148);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__position;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 151);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__in[2U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__in[3U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 155);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__in[0U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 157);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__7__in[1U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 160);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
            while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
                co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( test_ascon_core.done)", 
                                                                     "../tb/test_ascon_core.sv", 
                                                                     163);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
        }
    }
    if ((0U == (0xfU & vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH))) {
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__position 
            = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in[0U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in[1U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in[2U] = 0U;
        __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in[3U] = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             146);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             148);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__position;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             151);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in[2U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in[3U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             155);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in[0U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             157);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__ASSOCIATED_DATA__8__in[1U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             160);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
        while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
            co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( test_ascon_core.done)", 
                                                                 "../tb/test_ascon_core.sv", 
                                                                 163);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    }
    if ((0U != vlSelfRef.test_ascon_core__DOT__CIPHERTEXT.first(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i))) {
        test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__CIPHERTEXT.next(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__DECRYPT__9__position 
                = VL_MULS_III(32, (IData)(0x10U), test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__DECRYPT__9__in, vlSelfRef.test_ascon_core__DOT__CIPHERTEXT
                        .at(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i));
            vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out[0U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__31__03a0__KET__;
            vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out[1U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__63__03a32__KET__;
            vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out[2U] 
                = (IData)((((QData)((IData)(__Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__127__03a96__KET__)) 
                            << 0x20U) | (QData)((IData)(__Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__95__03a64__KET__))));
            vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out[3U] 
                = (IData)(((((QData)((IData)(__Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__127__03a96__KET__)) 
                             << 0x20U) | (QData)((IData)(__Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__95__03a64__KET__))) 
                           >> 0x20U));
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 212);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 214);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__DECRYPT__9__position;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 217);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__9__in[2U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 219);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__9__in[3U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 221);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[0U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__9__in[0U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 223);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[1U] 
                = __Vtask_test_ascon_core__DOT__DECRYPT__9__in[1U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 226);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 1U;
            vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 1U;
            while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
                co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( test_ascon_core.done)", 
                                                                     "../tb/test_ascon_core.sv", 
                                                                     229);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 230);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 233);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__95__03a64__KET__ 
                = vlSelfRef.test_ascon_core__DOT__data_out[2U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 235);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__127__03a96__KET__ 
                = vlSelfRef.test_ascon_core__DOT__data_out[3U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 237);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__31__03a0__KET__ 
                = vlSelfRef.test_ascon_core__DOT__data_out[0U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 239);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_test_ascon_core__DOT__DECRYPT__9__out__BRA__63__03a32__KET__ 
                = vlSelfRef.test_ascon_core__DOT__data_out[1U];
            VL_ASSIGN_W(128,__Vtemp_5, vlSelfRef.test_ascon_core__DOT__PLAINTEXT
                        .at(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk10__DOT__i));
            if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                           ^ __Vtemp_5[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                               ^ __Vtemp_5[1U])) 
                         | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                            ^ __Vtemp_5[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                                 ^ 
                                                 __Vtemp_5[3U])))) {
                VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,
                             128,vlSelfRef.test_ascon_core__DOT__data_out.data());
            } else {
                VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,
                             128,vlSelfRef.test_ascon_core__DOT__data_out.data());
            }
        }
    }
    if ((0U == (0xfU & vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH))) {
        __Vtask_test_ascon_core__DOT__DECRYPT__10__position 
            = vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH;
        __Vtask_test_ascon_core__DOT__DECRYPT__10__in[0U] = 0U;
        __Vtask_test_ascon_core__DOT__DECRYPT__10__in[1U] = 0U;
        __Vtask_test_ascon_core__DOT__DECRYPT__10__in[2U] = 0U;
        __Vtask_test_ascon_core__DOT__DECRYPT__10__in[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out[0U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__31__03a0__KET__;
        vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out[1U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__63__03a32__KET__;
        vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out[2U] 
            = (IData)((((QData)((IData)(__Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__127__03a96__KET__)) 
                        << 0x20U) | (QData)((IData)(__Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__95__03a64__KET__))));
        vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out[3U] 
            = (IData)(((((QData)((IData)(__Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__127__03a96__KET__)) 
                         << 0x20U) | (QData)((IData)(__Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__95__03a64__KET__))) 
                       >> 0x20U));
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             212);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             214);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__DECRYPT__10__position;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             217);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__10__in[2U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             219);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__10__in[3U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             221);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[0U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__10__in[0U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             223);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[1U] 
            = __Vtask_test_ascon_core__DOT__DECRYPT__10__in[1U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             226);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 1U;
        vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt = 1U;
        while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
            co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( test_ascon_core.done)", 
                                                                 "../tb/test_ascon_core.sv", 
                                                                 229);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             230);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             233);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__95__03a64__KET__ 
            = vlSelfRef.test_ascon_core__DOT__data_out[2U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             235);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__127__03a96__KET__ 
            = vlSelfRef.test_ascon_core__DOT__data_out[3U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             237);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__31__03a0__KET__ 
            = vlSelfRef.test_ascon_core__DOT__data_out[0U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             239);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_test_ascon_core__DOT__DECRYPT__10__out__BRA__63__03a32__KET__ 
            = vlSelfRef.test_ascon_core__DOT__data_out[1U];
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         249);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 1U;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             251);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         255);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[0U] 
        = vlSelfRef.test_ascon_core__DOT__tag[0U];
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         257);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[1U] 
        = vlSelfRef.test_ascon_core__DOT__tag[1U];
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         259);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[2U] 
        = vlSelfRef.test_ascon_core__DOT__tag[2U];
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         261);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[3U] 
        = vlSelfRef.test_ascon_core__DOT__tag[3U];
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[0U] 
                   ^ vlSelfRef.test_ascon_core__DOT__TAG[0U]) 
                  | (vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[1U] 
                     ^ vlSelfRef.test_ascon_core__DOT__TAG[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[2U] 
                    ^ vlSelfRef.test_ascon_core__DOT__TAG[2U])) 
                | (vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out[3U] 
                   ^ vlSelfRef.test_ascon_core__DOT__TAG[3U])))) {
        VL_WRITEF_NX("tag = %16x\tMATCH\n",0,128,vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out.data());
    } else {
        VL_WRITEF_NX("tag = %16x\tFAIL\n",0,128,vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out.data());
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time 
        = VL_TIME_UNITED_Q(1000);
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__decrypt_cycle_use 
        = VL_ISTOR_D_Q(64, VL_DIVS_QQQ(64, (vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time 
                                            - vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time), 0x64ULL));
    VL_WRITEF_NX("===DECRYPT TEST END  ===\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         476);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("===HASH256 TEST START===\n",0);
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time 
        = VL_TIME_UNITED_Q(1000);
    __Vtask_test_ascon_core__DOT__INITIALIZATION__12__select_type = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 1U;
    vlSelfRef.test_ascon_core__DOT__sel_type = __Vtask_test_ascon_core__DOT__INITIALIZATION__12__select_type;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    if ((0U != vlSelfRef.test_ascon_core__DOT__MESSAGE.first(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i))) {
        test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__MESSAGE.next(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i__Vfirst = 0U;
            __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__position 
                = VL_MULS_III(32, (IData)(8U), test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i);
            VL_ASSIGN_W(128,__Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__in, vlSelfRef.test_ascon_core__DOT__MESSAGE
                        .at(test_ascon_core__DOT__unnamedblk6__DOT__unnamedblk11__DOT__i));
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 276);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_length 
                = vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 278);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_position 
                = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__position;
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 281);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[2U] 
                = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__in[2U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 283);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__data_in[3U] 
                = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__13__in[3U];
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 286);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
            while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
                co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( test_ascon_core.done)", 
                                                                     "../tb/test_ascon_core.sv", 
                                                                     289);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                                 nullptr, 
                                                 "../tb/test_ascon_core.sv", 
                                                 290);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
        }
    }
    if ((0U == (7U & vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH))) {
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__position 
            = vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH;
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__in[0U] = 0U;
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__in[1U] = 0U;
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__in[2U] = 0U;
        __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__in[3U] = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             276);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_length 
            = vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             278);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_position 
            = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__position;
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             281);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[2U] 
            = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__in[2U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             283);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__data_in[3U] 
            = __Vtask_test_ascon_core__DOT__ABSORB_MESSAGE__14__in[3U];
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             286);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 1U;
        while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
            co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( test_ascon_core.done)", 
                                                                 "../tb/test_ascon_core.sv", 
                                                                 289);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             290);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    }
    vlSelfRef.test_ascon_core__DOT__process_en_init = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_AD_AM = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_final = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         304);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 1U;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             307);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         308);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x61a80ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         311);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_ASSIGN_W(128,__Vtemp_7, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                .at(0U));
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                   ^ __Vtemp_7[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                       ^ __Vtemp_7[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                    ^ __Vtemp_7[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                         ^ __Vtemp_7[3U])))) {
        VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    } else {
        VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         318);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 1U;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             321);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         322);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x61a80ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         325);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_ASSIGN_W(128,__Vtemp_8, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                .at(1U));
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                   ^ __Vtemp_8[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                       ^ __Vtemp_8[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                    ^ __Vtemp_8[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                         ^ __Vtemp_8[3U])))) {
        VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    } else {
        VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         332);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 1U;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             335);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         336);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x61a80ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         339);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_ASSIGN_W(128,__Vtemp_9, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                .at(2U));
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                   ^ __Vtemp_9[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                       ^ __Vtemp_9[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                    ^ __Vtemp_9[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                         ^ __Vtemp_9[3U])))) {
        VL_WRITEF_NX("data_out = %16x\tMATCH\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    } else {
        VL_WRITEF_NX("data_out = %16x\tFAIL\n",0,128,
                     vlSelfRef.test_ascon_core__DOT__data_out.data());
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         346);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 1U;
    while ((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h7cd2085d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( test_ascon_core.done)", 
                                                             "../tb/test_ascon_core.sv", 
                                                             349);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         350);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.test_ascon_core__DOT__process_en_hash = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x61a80ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         353);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_ASSIGN_W(128,__Vtemp_10, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                .at(3U));
    if ((0U == ((((vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                   ^ __Vtemp_10[0U]) | (vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                                        ^ __Vtemp_10[1U])) 
                 | (vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                    ^ __Vtemp_10[2U])) | (vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                                          ^ __Vtemp_10[3U])))) {
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
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time 
        = VL_TIME_UNITED_Q(1000);
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__hash_cycle_use 
        = VL_ISTOR_D_Q(64, VL_DIVS_QQQ(64, (vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time 
                                            - vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time), 0x64ULL));
    VL_WRITEF_NX("===HASH256 TEST END  ===\n",0);
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "../tb/test_ascon_core.sv", 
                                         505);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("data length: %8#, associated data: %8#, encrypt cycle use: %.1f, speed: %.4f cycles/byte\ndata length: %8#, associated data: %8#, decrypt cycle use: %.1f, speed: %.4f cycles/byte\nmessage length: %8#, hash cycle use: %.1f, speed: %.4f cycles/byte\n",0,
                 32,vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH,
                 32,vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH,
                 64,vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__encrypt_cycle_use,
                 64,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__encrypt_cycle_use 
                     / VL_ITOR_D_I(32, (vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH 
                                        + vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH))),
                 32,vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH,
                 32,vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH,
                 64,vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__decrypt_cycle_use,
                 64,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__decrypt_cycle_use 
                     / VL_ITOR_D_I(32, (vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH 
                                        + vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH))),
                 32,vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH,
                 64,vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__hash_cycle_use,
                 64,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__hash_cycle_use 
                     / VL_ITOR_D_I(32, vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH)));
    VL_FINISH_MT("../tb/test_ascon_core.sv", 511, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__2(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_core.sv", 
                                             19);
        vlSelfRef.test_ascon_core__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.test_ascon_core__DOT__clk)));
    }
}

void Vtest_ascon_core___024root___act_comb__TOP__0(Vtest_ascon_core___024root* vlSelf);

void Vtest_ascon_core___024root___eval_act(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_act\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xcULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_ascon_core___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___act_comb__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___act_comb__TOP__0\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_14;
    __VdfgRegularize_hd87f99a1_0_14 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_15;
    __VdfgRegularize_hd87f99a1_0_15 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_16;
    __VdfgRegularize_hd87f99a1_0_16 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_17;
    __VdfgRegularize_hd87f99a1_0_17 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_18;
    __VdfgRegularize_hd87f99a1_0_18 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_19;
    __VdfgRegularize_hd87f99a1_0_19 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_20;
    __VdfgRegularize_hd87f99a1_0_20 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_21;
    __VdfgRegularize_hd87f99a1_0_21 = 0;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_47;
    // Body
    if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[0U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[1U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[2U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[3U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
    } else {
        if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[2U] 
                = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out);
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[3U] 
                = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                           >> 0x20U));
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[0U] 
                = vlSelfRef.test_ascon_core__DOT__data_out[0U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[1U] 
                = vlSelfRef.test_ascon_core__DOT__data_out[1U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[2U] 
                = vlSelfRef.test_ascon_core__DOT__data_out[2U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[3U] 
                = vlSelfRef.test_ascon_core__DOT__data_out[3U];
        }
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final) 
           | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_5 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
           | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
           | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
              | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position 
        = (vlSelfRef.test_ascon_core__DOT__data_length 
           - vlSelfRef.test_ascon_core__DOT__data_position);
    if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[0U])));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 = 0ULL;
    }
    if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8 
        = ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
            ? ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                    : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                        : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                            : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                    : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                        : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                            : ((8U 
                                                == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                ? (1ULL 
                                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM)
                                                : (
                                                   (9U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                    ^ 
                                                    (0x100ULL 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                    : 
                                                   ((0xaU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                     ^ 
                                                     (0x10000ULL 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                     : 
                                                    ((0xbU 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                      ? 
                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                      ^ 
                                                      (0x1000000ULL 
                                                       | (QData)((IData)(
                                                                         (0xffffffU 
                                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                      : 
                                                     ((0xcU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                       ? 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                       ^ 
                                                       (0x100000000ULL 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                       : 
                                                      ((0xdU 
                                                        == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                                         == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                                          == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))))))))))))))))
            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8 
        = ((~ (IData)(vlSelfRef.test_ascon_core__DOT__done)) 
           & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
               & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) 
              | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12 
        = ((~ (IData)(vlSelfRef.test_ascon_core__DOT__done)) 
           & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash) 
              | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                 | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final) 
                    | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                       & (0U != (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_5) 
           | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3) 
           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) 
           & (1U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) 
           & (1U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) 
           & (2U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) 
            & (3U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))) 
           | ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) 
              & (2U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))));
    vlSelfRef.test_ascon_core__DOT__err = ((vlSelfRef.test_ascon_core__DOT__data_length 
                                            < vlSelfRef.test_ascon_core__DOT__data_position) 
                                           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0) 
                                               | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                              & (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0) 
                                                  | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)) 
                                                 & (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_5) 
                                                     | (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4)) 
                                                    & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
                                                        | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                                                           | (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4))) 
                                                       & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3) 
                                                          | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))))));
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1) {
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
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
        = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
            ? 1ULL : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (0x100ULL | (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                       : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                           ? (0x10000ULL | (QData)((IData)(
                                                           (0xffffU 
                                                            & vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                           : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? (0x1000000ULL | (QData)((IData)(
                                                                 (0xffffffU 
                                                                  & vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                               : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? (0x100000000ULL 
                                      | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                                   : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                       ? (0x10000000000ULL 
                                          | (0xffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                                       : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                           ? (0x1000000000000ULL 
                                              | (0xffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                                           : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
        = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
            ? 0ULL : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? 0ULL : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? 0ULL : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                             ? 0ULL
                                             : ((4U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                 ? 0ULL
                                                 : 
                                                ((5U 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                  ? 0ULL
                                                  : 
                                                 ((6U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? 0ULL
                                                   : 
                                                  ((7U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? 1ULL
                                                     : 
                                                    ((9U 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                      ? 
                                                     (0x100ULL 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                      : 
                                                     ((0xaU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                       ? 
                                                      (0x10000ULL 
                                                       | (QData)((IData)(
                                                                         (0xffffU 
                                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                       : 
                                                      ((0xbU 
                                                        == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                        ? 
                                                       (0x1000000ULL 
                                                        | (QData)((IData)(
                                                                          (0xffffffU 
                                                                           & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                        : 
                                                       ((0xcU 
                                                         == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                         ? 
                                                        (0x100000000ULL 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                                         : 
                                                        ((0xdU 
                                                          == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                                           == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                                            == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
        = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
            ? (1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM)
            : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                   ^ (0x100ULL | (QData)((IData)((0xffU 
                                                  & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                    ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                       ^ (0x10000ULL | (QData)((IData)(
                                                       (0xffffU 
                                                        & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                    : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                           ^ (0x1000000ULL | (QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelfRef.test_ascon_core__DOT__data_in[2U])))))
                        : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                            ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                               ^ (0x100000000ULL | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U]))))
                            : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                   ^ (0x10000000000ULL 
                                      | (0xffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))
                                : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                    ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                                       ^ (0x1000000000000ULL 
                                          | (0xffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__data_in[2U]))))))
                                    : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
    if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))) {
        if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) {
            if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8;
            } else if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
                if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[2U])));
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                        = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[0U])));
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5;
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt;
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
            }
        } else if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) {
            if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
                if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0x1000808c0001ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                        = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__nonce[0U])));
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                            ? 0x80100cc0002ULL : ((2U 
                                                   == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                                   ? 0x80000cc0003ULL
                                                   : 0x80000cc0004ULL));
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12;
            } else if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8;
            } else if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
                if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
                }
            } else if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
                if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
                }
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
            }
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
        }
    } else if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
            : 0ULL);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
        = ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))
            ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt
                        : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                     ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                         ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                             ? (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__nonce[2U])))
                                             : 0ULL)
                                         : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                 ? 
                                                ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                    ? 
                                                   (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                                                    : 0xffffffffffffffffULL) 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                                                 | ((~ 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                                                    & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                                        : 0ULL)))
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                                   : 0ULL)
                                                  : 0ULL))))
                                     : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                                  ? 0ULL
                                                  : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
            : 0ULL);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg 
        = ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))
            ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt
                        : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                     ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                                         : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                 ? 
                                                ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                    ? 
                                                   (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)
                                                    : 0xffffffffffffffffULL) 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                                 | ((~ 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                                    & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                        : 0ULL)))
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                   : 0ULL)
                                                  : 0ULL))))
                                     : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                                  ? 0ULL
                                                  : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save));
    if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp 
            = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0
                : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                    ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                          ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                             >> 8U) : 0ULL) << 8U) 
                       ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                    : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                              ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                 >> 0x10U) : 0ULL) 
                            << 0x10U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                        : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                            ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                  ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                     >> 0x18U) : 0ULL) 
                                << 0x18U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                            : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                ? (((QData)((IData)(
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                      ? (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                                                 >> 0x20U))
                                                      : 0U))) 
                                    << 0x20U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                                : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                    ? (((QData)((IData)(
                                                        ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                          ? 
                                                         (0xffffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                                                     >> 0x28U)))
                                                          : 0U))) 
                                        << 0x28U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                                    : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                        ? (((QData)((IData)(
                                                            ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                              ? 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                                                         >> 0x30U)))
                                                              : 0U))) 
                                            << 0x30U) 
                                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                                        : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                            ? (((QData)((IData)(
                                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                                                             >> 0x38U)))
                                                                  : 0U))) 
                                                << 0x38U) 
                                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last))))))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp 
            = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                      ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                         >> 8U) : 0ULL) << 8U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                    ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                          ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                             >> 0x10U) : 0ULL) << 0x10U) 
                       ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                    : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                              ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                 >> 0x18U) : 0ULL) 
                            << 0x18U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                        : ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                            ? (((QData)((IData)(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                                             >> 0x20U))
                                                  : 0U))) 
                                << 0x20U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                            : ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                ? (((QData)((IData)(
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                      ? 
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                                                 >> 0x28U)))
                                                      : 0U))) 
                                    << 0x28U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                : ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                    ? (((QData)((IData)(
                                                        ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                          ? 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                                                     >> 0x30U)))
                                                          : 0U))) 
                                        << 0x30U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                    : ((0xfU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                        ? (((QData)((IData)(
                                                            ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                              ? 
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                                                         >> 0x38U)))
                                                              : 0U))) 
                                            << 0x38U) 
                                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                        : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt);
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt);
    }
    __Vtemp_31[1U] = ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                  >> 0x20U)) : ((0xbU 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                 ? (IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffffU 
                                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                                            >> 0x20U))
                                                 : 
                                                ((0xcU 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xdU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? (IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xeU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? (IData)(
                                                              ((0xffffffffffffULL 
                                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xfU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? (IData)(
                                                               ((0xffffffffffffffULL 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1 
                                                                >> 0x20U))))))));
    __Vtemp_33[0U] = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)((QData)((IData)((0xffU 
                                                  & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                       : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                           ? (IData)((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                           : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? (IData)((QData)((IData)(
                                                         (0xffffffU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                               : ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? (IData)((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))
                                   : ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                       ? (IData)((0xffffffffffULL 
                                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                       : ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                           ? (IData)(
                                                     (0xffffffffffffULL 
                                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                           : ((0xfU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                               ? (IData)(
                                                         (0xffffffffffffffULL 
                                                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                               : (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))))))));
    __Vtemp_35[3U] = ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                  >> 0x20U)) : ((9U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                            >> 0x20U))
                                                 : 
                                                ((0xaU 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xbU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xcU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? (IData)(
                                                              (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xdU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                >> 0x20U))
                                                     : 
                                                    ((0xeU 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                      ? (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                 >> 0x20U))
                                                      : 
                                                     ((0xfU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                       ? (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                  >> 0x20U))
                                                       : (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                  >> 0x20U))))))))));
    __Vtemp_39[2U] = ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)((0xffffffffffffULL 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0))
                       : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                           ? (IData)((0xffffffffffffffULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0))
                           : ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                               : ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                   : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                       ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                       : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                           : ((0xcU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                               : ((0xdU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                   : 
                                                  ((0xeU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                    : 
                                                   ((0xfU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                     : (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))))))))));
    __Vtemp_47[3U] = ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                                  >> 0x20U)) : ((3U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                 ? (IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffffU 
                                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                                                            >> 0x20U))
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? (IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                              >> 0x20U))
                                                   : 
                                                  ((6U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? (IData)(
                                                              ((0xffffffffffffULL 
                                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                               >> 0x20U))
                                                    : 
                                                   ((7U 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? (IData)(
                                                               ((0xffffffffffffffULL 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp_35[3U]))))));
    if ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] = 0U;
    } else if ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
            = (IData)((QData)((IData)((0xffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
            = (IData)(((QData)((IData)((0xffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                       >> 0x20U));
    } else {
        if ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)((0xffffU 
                                           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        } else if ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)((0xffffffU 
                                           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        } else if ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)));
        } else if ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((0xffffffffffULL & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0));
        } else {
            if ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else if ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else if ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] 
                    = __Vtemp_33[0U];
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] 
                    = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? (IData)(((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                   >> 0x20U)) : __Vtemp_31[1U]);
            }
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = __Vtemp_39[2U];
        }
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
            = __Vtemp_47[3U];
    }
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8
            : 0ULL);
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12 = 0ULL;
    }
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg) 
            & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xf0ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                              ? 0xb4ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                            ? 0x78ULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                ? 0xb4ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x78ULL
                                                    : 0ULL)))))) 
           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xffffffffffffff0fULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                            ? 0xffffffffffffff4bULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                ? 0xffffffffffffff87ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                    ? 0xffffffffffffff4bULL
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                     ? 0xffffffffffffff87ULL
                                                     : 0xffffffffffffffffULL))))) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg));
    if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
            : 0ULL);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
            & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21) 
              | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg) 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12))));
    __VdfgRegularize_hd87f99a1_0_14 = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15);
    __VdfgRegularize_hd87f99a1_0_21 = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8 
           & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                                                      >> 0x29U))))))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg) 
                     & __VdfgRegularize_hd87f99a1_0_14) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg) 
                        & __VdfgRegularize_hd87f99a1_0_21) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
        = ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16) 
              | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25 
                 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7 
                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
        = (((((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23) 
             | test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22) 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3) 
                    | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14) 
                       | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
                           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18) 
                          | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21 
                              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12) 
                             | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                                 & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15)) 
                                | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg)))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
        = (__VdfgRegularize_hd87f99a1_0_14 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23 
                                               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13) 
                                              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
                                                  & __VdfgRegularize_hd87f99a1_0_21) 
                                                 | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
                                                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12) 
                                                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
                                                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18) 
                                                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22 
                                                          | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19 
                                                             | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
                                                                | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17 
                                                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13) 
                                                                   | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9 
                                                                      & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
           ^ ((((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s)))) 
                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
                             >> 1U)) ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s)))) 
                                         << 0x3aU) 
                                        | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
                                           >> 6U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o) 
            & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xe1ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                              ? 0xa5ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                            ? 0x69ULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                ? 0xa5ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x69ULL
                                                    : 0ULL)))))) 
           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xffffffffffffff1eULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                            ? 0xffffffffffffff5aULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                ? 0xffffffffffffff96ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                    ? 0xffffffffffffff5aULL
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                     ? 0xffffffffffffff96ULL
                                                     : 0xffffffffffffffffULL))))) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc));
    __VdfgRegularize_hd87f99a1_0_15 = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15);
    __VdfgRegularize_hd87f99a1_0_20 = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8 
           & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
            & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21) 
              | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc) 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                                                      >> 0x29U))))))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc) 
                     & __VdfgRegularize_hd87f99a1_0_15) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc) 
                        & __VdfgRegularize_hd87f99a1_0_20) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
        = ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16) 
              | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25 
                 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7 
                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
        = (((((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23) 
             | test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22) 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3) 
                    | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14) 
                       | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
                           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18) 
                          | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21 
                              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12) 
                             | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc 
                                 & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15)) 
                                | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc)))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
        = (__VdfgRegularize_hd87f99a1_0_15 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23 
                                               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13) 
                                              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
                                                  & __VdfgRegularize_hd87f99a1_0_20) 
                                                 | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
                                                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12) 
                                                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
                                                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18) 
                                                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22 
                                                          | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19 
                                                             | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
                                                                | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17 
                                                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13) 
                                                                   | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9 
                                                                      & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
           ^ ((((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s)))) 
                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
                             >> 1U)) ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s)))) 
                                         << 0x3aU) 
                                        | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
                                           >> 6U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o) 
            & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xd2ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                              ? 0x96ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                            ? 0x5aULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                ? 0x96ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x5aULL
                                                    : 0ULL)))))) 
           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xffffffffffffff2dULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                            ? 0xffffffffffffff69ULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                ? 0xffffffffffffffa5ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                    ? 0xffffffffffffff69ULL
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                     ? 0xffffffffffffffa5ULL
                                                     : 0xffffffffffffffffULL))))) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc));
    __VdfgRegularize_hd87f99a1_0_16 = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15);
    __VdfgRegularize_hd87f99a1_0_19 = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8 
           & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
            & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21) 
              | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc) 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                                                      >> 0x29U))))))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc) 
                     & __VdfgRegularize_hd87f99a1_0_16) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc) 
                        & __VdfgRegularize_hd87f99a1_0_19) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
        = ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16) 
              | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25 
                 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7 
                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
        = (((((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23) 
             | test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22) 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3) 
                    | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14) 
                       | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
                           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18) 
                          | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21 
                              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12) 
                             | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc 
                                 & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15)) 
                                | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc)))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
        = (__VdfgRegularize_hd87f99a1_0_16 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23 
                                               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13) 
                                              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
                                                  & __VdfgRegularize_hd87f99a1_0_19) 
                                                 | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
                                                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12) 
                                                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
                                                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18) 
                                                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22 
                                                          | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19 
                                                             | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
                                                                | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17 
                                                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13) 
                                                                   | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9 
                                                                      & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
           ^ ((((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s)))) 
                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
                             >> 1U)) ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s)))) 
                                         << 0x3aU) 
                                        | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
                                           >> 6U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o) 
            & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xc3ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                              ? 0x87ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                            ? 0x4bULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                ? 0x87ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x4bULL
                                                    : 0ULL)))))) 
           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xffffffffffffff3cULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                            ? 0xffffffffffffff78ULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                ? 0xffffffffffffffb4ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                    ? 0xffffffffffffff78ULL
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                     ? 0xffffffffffffffb4ULL
                                                     : 0xffffffffffffffffULL))))) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc));
    __VdfgRegularize_hd87f99a1_0_17 = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15);
    __VdfgRegularize_hd87f99a1_0_18 = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8 
           & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
            & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21) 
              | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc) 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
        = ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16) 
              | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25 
                 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7 
                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc) 
                     & __VdfgRegularize_hd87f99a1_0_17) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc) 
                        & __VdfgRegularize_hd87f99a1_0_18) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
        = (__VdfgRegularize_hd87f99a1_0_17 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23 
                                               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13) 
                                              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
                                                  & __VdfgRegularize_hd87f99a1_0_18) 
                                                 | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
                                                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12) 
                                                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
                                                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18) 
                                                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22 
                                                          | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19 
                                                             | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
                                                                | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17 
                                                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13) 
                                                                   | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9 
                                                                      & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
        = (((((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23) 
             | test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22) 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3) 
                    | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14) 
                       | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
                           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18) 
                          | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21 
                              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12) 
                             | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc 
                                 & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15)) 
                                | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc)))))))));
}

void Vtest_ascon_core___024root___nba_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core___024root___nba_comb__TOP__0(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core___024root___nba_comb__TOP__1(Vtest_ascon_core___024root* vlSelf);

void Vtest_ascon_core___024root___eval_nba(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_nba\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_sequent__TOP__0\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count;
    __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0;
    // Body
    __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count;
    if (vlSelfRef.test_ascon_core__DOT__rst_n) {
        if (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) 
             | (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12))) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state 
                = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                   ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                        << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                     >> 0x13U)) ^ (
                                                   ((QData)((IData)(
                                                                    (0xfffffffU 
                                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                                    << 0x24U) 
                                                   | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                                      >> 0x1cU))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                   ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s)))) 
                        << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                     >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                 << 0x17U) 
                                                | (QData)((IData)(
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                                              >> 0x29U))))))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                   ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                        << 3U) | (QData)((IData)((7U 
                                                  & (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                             >> 0x3dU)))))) 
                      ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                          << 0x19U) | (QData)((IData)(
                                                      (0x1ffffffU 
                                                       & (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                  >> 0x27U))))))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                   ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                        << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                     >> 0xaU)) ^ (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                                   << 0x2fU) 
                                                  | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                                     >> 0x11U))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                   ^ ((((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                        << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                     >> 1U)) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                                 << 0x3aU) 
                                                | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                                   >> 6U))));
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save = 0ULL;
        }
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
        if (vlSelfRef.test_ascon_core__DOT__err) {
            vlSelfRef.test_ascon_core__DOT__data_out[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__data_out[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__data_out[2U] = 0U;
            vlSelfRef.test_ascon_core__DOT__data_out[3U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 = 0ULL;
            __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
            vlSelfRef.test_ascon_core__DOT__done = 0U;
            vlSelfRef.test_ascon_core__DOT__tag[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__tag[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__tag[2U] = 0U;
            vlSelfRef.test_ascon_core__DOT__tag[3U] = 0U;
        } else {
            vlSelfRef.test_ascon_core__DOT__data_out[0U] 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[0U];
            vlSelfRef.test_ascon_core__DOT__data_out[1U] 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[1U];
            vlSelfRef.test_ascon_core__DOT__data_out[2U] 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[2U];
            vlSelfRef.test_ascon_core__DOT__data_out[3U] 
                = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[3U];
            if (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p))) {
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
                vlSelfRef.test_ascon_core__DOT__done = 1U;
            } else if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count) {
                vlSelfRef.test_ascon_core__DOT__done = 1U;
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
                vlSelfRef.test_ascon_core__DOT__tag[0U] 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[0U];
                vlSelfRef.test_ascon_core__DOT__tag[1U] 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[1U];
                vlSelfRef.test_ascon_core__DOT__tag[2U] 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[2U];
                vlSelfRef.test_ascon_core__DOT__tag[3U] 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[3U];
                __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
            } else {
                vlSelfRef.test_ascon_core__DOT__done = 0U;
                __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count 
                    = (((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                          | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                         | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                        | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)) 
                       & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p));
            }
        }
        if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            if ((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
                if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt = 0ULL;
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] 
                    = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5);
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] 
                    = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5 
                               >> 0x20U));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] 
                    = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3);
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] 
                    = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3 
                               >> 0x20U));
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt;
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
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM 
                    = ((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8
                        : ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                            ? (0x8000000000000000ULL 
                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)
                            : (0x8000000000000000ULL 
                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8)));
                if ((0U == vlSelfRef.test_ascon_core__DOT__data_length)) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM;
                } else if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM = 0ULL;
                }
            } else if ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
                if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM = 0ULL;
                }
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8;
            }
        }
        if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[0U] 
                = (IData)((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                             : 0ULL) ^ (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__key[2U])))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[1U] 
                = (IData)(((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                              ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                              : 0ULL) ^ (((QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                           >> 0x20U));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[2U] 
                = (IData)((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                             : 0ULL) ^ (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__key[0U])))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[3U] 
                = (IData)(((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                              ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                              : 0ULL) ^ (((QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                           >> 0x20U));
        }
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out = 0ULL;
        vlSelfRef.test_ascon_core__DOT__data_out[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__data_out[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__data_out[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__data_out[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 = 0ULL;
        __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
        vlSelfRef.test_ascon_core__DOT__done = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp[3U] = 0U;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count 
        = __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count;
}

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_comb__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_comb__TOP__0\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final) 
           | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_5 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
           | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
           | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
              | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position 
        = (vlSelfRef.test_ascon_core__DOT__data_length 
           - vlSelfRef.test_ascon_core__DOT__data_position);
    if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 
            = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__key[0U])));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_5) 
           | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt));
    if ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last = 1ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x100ULL | (QData)((IData)((0xffU & 
                                           vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x10000ULL | (QData)((IData)((0xffffU 
                                             & vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x1000000ULL | (QData)((IData)((0xffffffU 
                                               & vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U])));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x10000000000ULL | (0xffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
            = (0x1000000000000ULL | (0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last = 0ULL;
    } else if ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
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
            = ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                ? 1ULL : ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                           ? (0x100ULL | (QData)((IData)(
                                                         (0xffU 
                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                           : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? (0x10000ULL | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                               : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? (0x1000000ULL 
                                      | (QData)((IData)(
                                                        (0xffffffU 
                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                   : ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                       ? (0x100000000ULL 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                       : ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                           ? (0x10000000000ULL 
                                              | (0xffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                           : ((0xeU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                               ? (0x1000000000000ULL 
                                                  | (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                               : ((0xfU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
    vlSelfRef.test_ascon_core__DOT__err = ((vlSelfRef.test_ascon_core__DOT__data_length 
                                            < vlSelfRef.test_ascon_core__DOT__data_position) 
                                           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0) 
                                               | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                              & (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0) 
                                                  | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)) 
                                                 & (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_5) 
                                                     | (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4)) 
                                                    & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
                                                        | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                                                           | (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4))) 
                                                       & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3) 
                                                          | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))))));
}

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_comb__TOP__1(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_comb__TOP__1\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24 = 0;
    QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_14;
    __VdfgRegularize_hd87f99a1_0_14 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_15;
    __VdfgRegularize_hd87f99a1_0_15 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_16;
    __VdfgRegularize_hd87f99a1_0_16 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_17;
    __VdfgRegularize_hd87f99a1_0_17 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_18;
    __VdfgRegularize_hd87f99a1_0_18 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_19;
    __VdfgRegularize_hd87f99a1_0_19 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_20;
    __VdfgRegularize_hd87f99a1_0_20 = 0;
    QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_21;
    __VdfgRegularize_hd87f99a1_0_21 = 0;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_47;
    // Body
    if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[0U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[1U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[2U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[3U] 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2;
    } else {
        if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[2U] 
                = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out);
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[3U] 
                = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                           >> 0x20U));
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[0U] 
                = vlSelfRef.test_ascon_core__DOT__data_out[0U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[1U] 
                = vlSelfRef.test_ascon_core__DOT__data_out[1U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[2U] 
                = vlSelfRef.test_ascon_core__DOT__data_out[2U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp[3U] 
                = vlSelfRef.test_ascon_core__DOT__data_out[3U];
        }
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8 
        = ((~ (IData)(vlSelfRef.test_ascon_core__DOT__done)) 
           & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
               & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) 
              | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12 
        = ((~ (IData)(vlSelfRef.test_ascon_core__DOT__done)) 
           & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash) 
              | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                 | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final) 
                    | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                       & (0U != (IData)(vlSelfRef.test_ascon_core__DOT__sel_type)))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3) 
           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
    if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8 
        = ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
            ? ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                    : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                        : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                            : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                    : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                        : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                            : ((8U 
                                                == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                ? (1ULL 
                                                   ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM)
                                                : (
                                                   (9U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                    ^ 
                                                    (0x100ULL 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                    : 
                                                   ((0xaU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                     ^ 
                                                     (0x10000ULL 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                     : 
                                                    ((0xbU 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                      ? 
                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                      ^ 
                                                      (0x1000000ULL 
                                                       | (QData)((IData)(
                                                                         (0xffffffU 
                                                                          & vlSelfRef.test_ascon_core__DOT__data_in[0U])))))
                                                      : 
                                                     ((0xcU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                       ? 
                                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM 
                                                       ^ 
                                                       (0x100000000ULL 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.test_ascon_core__DOT__data_in[0U]))))
                                                       : 
                                                      ((0xdU 
                                                        == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                                         == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                                          == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                                                             vlSelfRef.test_ascon_core__DOT__data_in[0U]))))))))))))))))))))
            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[0U]))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) 
           & (1U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) 
           & (0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) 
           & (1U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) 
           & (2U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state)));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p 
        = (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) 
            & (3U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))) 
           | ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) 
              & (2U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))));
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1) {
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
    if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp 
            = ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0
                : ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                    ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                          ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                             >> 8U) : 0ULL) << 8U) 
                       ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                    : ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                              ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                 >> 0x10U) : 0ULL) 
                            << 0x10U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                        : ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                            ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                  ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                     >> 0x18U) : 0ULL) 
                                << 0x18U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                            : ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                ? (((QData)((IData)(
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                      ? (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                                                 >> 0x20U))
                                                      : 0U))) 
                                    << 0x20U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                                : ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                    ? (((QData)((IData)(
                                                        ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                          ? 
                                                         (0xffffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                                                     >> 0x28U)))
                                                          : 0U))) 
                                        << 0x28U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                                    : ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                        ? (((QData)((IData)(
                                                            ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                              ? 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                                                         >> 0x30U)))
                                                              : 0U))) 
                                            << 0x30U) 
                                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                                        : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                            ? (((QData)((IData)(
                                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                                                                             >> 0x38U)))
                                                                  : 0U))) 
                                                << 0x38U) 
                                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last)
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last))))))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp 
            = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                      ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                         >> 8U) : 0ULL) << 8U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                    ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                          ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                             >> 0x10U) : 0ULL) << 0x10U) 
                       ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                    : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                        ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                              ? (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                 >> 0x18U) : 0ULL) 
                            << 0x18U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                        : ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                            ? (((QData)((IData)(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                                             >> 0x20U))
                                                  : 0U))) 
                                << 0x20U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                            : ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                ? (((QData)((IData)(
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                      ? 
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                                                 >> 0x28U)))
                                                      : 0U))) 
                                    << 0x28U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                : ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                    ? (((QData)((IData)(
                                                        ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                          ? 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                                                     >> 0x30U)))
                                                          : 0U))) 
                                        << 0x30U) ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                    : ((0xfU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                        ? (((QData)((IData)(
                                                            ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                              ? 
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                                                                         >> 0x38U)))
                                                              : 0U))) 
                                            << 0x38U) 
                                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last)
                                        : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))));
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt);
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt);
    }
    __Vtemp_31[1U] = ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                  >> 0x20U)) : ((0xbU 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                 ? (IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffffU 
                                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                                            >> 0x20U))
                                                 : 
                                                ((0xcU 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xdU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? (IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xeU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? (IData)(
                                                              ((0xffffffffffffULL 
                                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xfU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? (IData)(
                                                               ((0xffffffffffffffULL 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1) 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1 
                                                                >> 0x20U))))))));
    __Vtemp_33[0U] = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)((QData)((IData)((0xffU 
                                                  & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                       : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                           ? (IData)((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                           : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? (IData)((QData)((IData)(
                                                         (0xffffffU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))))
                               : ((0xcU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? (IData)((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))
                                   : ((0xdU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                       ? (IData)((0xffffffffffULL 
                                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                       : ((0xeU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                           ? (IData)(
                                                     (0xffffffffffffULL 
                                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                           : ((0xfU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                               ? (IData)(
                                                         (0xffffffffffffffULL 
                                                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))
                                               : (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1))))))));
    __Vtemp_35[3U] = ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                  >> 0x20U)) : ((9U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                 ? (IData)(
                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                            >> 0x20U))
                                                 : 
                                                ((0xaU 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                  ? (IData)(
                                                            (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xbU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? (IData)(
                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xcU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? (IData)(
                                                              (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xdU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? (IData)(
                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                >> 0x20U))
                                                     : 
                                                    ((0xeU 
                                                      == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                      ? (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                 >> 0x20U))
                                                      : 
                                                     ((0xfU 
                                                       == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                       ? (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                  >> 0x20U))
                                                       : (IData)(
                                                                 (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0 
                                                                  >> 0x20U))))))))));
    __Vtemp_39[2U] = ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)((0xffffffffffffULL 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0))
                       : ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                           ? (IData)((0xffffffffffffffULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0))
                           : ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                               : ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                   : ((0xaU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                       ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                       : ((0xbU == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                           ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                           : ((0xcU 
                                               == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                               ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                               : ((0xdU 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                   : 
                                                  ((0xeU 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                    : 
                                                   ((0xfU 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)
                                                     : (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))))))))));
    __Vtemp_47[3U] = ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                       ? (IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                                  >> 0x20U)) : ((3U 
                                                 == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                 ? (IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffffU 
                                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                                                            >> 0x20U))
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                   ? (IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                              >> 0x20U))
                                                   : 
                                                  ((6U 
                                                    == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? (IData)(
                                                              ((0xffffffffffffULL 
                                                                & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                               >> 0x20U))
                                                    : 
                                                   ((7U 
                                                     == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                     ? (IData)(
                                                               ((0xffffffffffffffULL 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0) 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp_35[3U]))))));
    if ((0U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
            = (1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM);
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] = 0U;
    } else if ((1U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
            = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
               ^ (0x100ULL | (QData)((IData)((0xffU 
                                              & vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
            = (IData)((QData)((IData)((0xffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
            = (IData)(((QData)((IData)((0xffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))) 
                       >> 0x20U));
    } else {
        if ((2U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                   ^ (0x10000ULL | (QData)((IData)(
                                                   (0xffffU 
                                                    & vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)((0xffffU 
                                           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        } else if ((3U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                   ^ (0x1000000ULL | (QData)((IData)(
                                                     (0xffffffU 
                                                      & vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)((0xffffffU 
                                           & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)))));
        } else if ((4U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                   ^ (0x100000000ULL | (QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0)));
        } else if ((5U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
                = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                   ^ (0x10000000000ULL | (0xffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[2U]))))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = (IData)((0xffffffffffULL & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0));
        } else {
            if ((6U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
                    = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                       ^ (0x1000000000000ULL | (0xffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__data_in[2U]))))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else if ((7U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
                    = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                       ^ (0x100000000000000ULL | (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__data_in[2U]))))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8 
                    = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM 
                       ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[2U]))));
                if ((8U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] = 0U;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] = 0U;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U] 
                        = __Vtemp_33[0U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U] 
                        = ((9U == vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                            ? (IData)(((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1)))) 
                                       >> 0x20U)) : 
                           __Vtemp_31[1U]);
                }
            }
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U] 
                = __Vtemp_39[2U];
        }
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U] 
            = __Vtemp_47[3U];
    }
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p = 0ULL;
    }
    if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))) {
        if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) {
            if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8;
            } else if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
                if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[2U])));
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                        = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[0U])));
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5;
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt;
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
            }
        } else if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) {
            if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
                if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0x1000808c0001ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                        = (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__nonce[0U])));
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                            ? 0x80100cc0002ULL : ((2U 
                                                   == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                                   ? 0x80000cc0003ULL
                                                   : 0x80000cc0004ULL));
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12;
            } else if (vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8;
            } else if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
                if (vlSelfRef.test_ascon_core__DOT__process_en_final) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
                }
            } else if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
                if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
                }
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
            }
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
        }
    } else if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg = 0ULL;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
            : 0ULL);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
        = ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))
            ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt
                        : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                     ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                         ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                             ? (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__nonce[2U])))
                                             : 0ULL)
                                         : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                 ? 
                                                ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                    ? 
                                                   (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                                                    : 0xffffffffffffffffULL) 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                                                 | ((~ 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                                                    & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                                        : 0ULL)))
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                                   : 0ULL)
                                                  : 0ULL))))
                                     : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                                  ? 0ULL
                                                  : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
            : 0ULL);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg 
        = ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state))
            ? ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt
                        : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                     ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                                         : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                 ? 
                                                ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                    ? 
                                                   (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)
                                                    : 0xffffffffffffffffULL) 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                                 | ((~ 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                                    & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                        : 0ULL)))
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                   : 0ULL)
                                                  : 0ULL))))
                                     : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                                  ? 0ULL
                                                  : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save));
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8
            : 0ULL);
    if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12 = 0ULL;
    }
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg) 
            & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xf0ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                              ? 0xb4ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                            ? 0x78ULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                ? 0xb4ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x78ULL
                                                    : 0ULL)))))) 
           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xffffffffffffff0fULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                            ? 0xffffffffffffff4bULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                ? 0xffffffffffffff87ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                    ? 0xffffffffffffff4bULL
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                     ? 0xffffffffffffff87ULL
                                                     : 0xffffffffffffffffULL))))) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg));
    if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
            = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12;
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 = 0ULL;
    }
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12 
        = ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
            : 0ULL);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
            & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21) 
              | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg) 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12))));
    __VdfgRegularize_hd87f99a1_0_14 = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15);
    __VdfgRegularize_hd87f99a1_0_21 = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_8 
           & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                                                      >> 0x29U))))))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg) 
                     & __VdfgRegularize_hd87f99a1_0_14) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg) 
                        & __VdfgRegularize_hd87f99a1_0_21) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_24 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
        = ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_16) 
              | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_25 
                 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_7 
                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_20 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
        = (((((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23) 
             | test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22) 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_3) 
                    | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_10 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14) 
                       | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg) 
                           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18) 
                          | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_21 
                              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12) 
                             | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg 
                                 & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_15)) 
                                | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg)))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
        = (__VdfgRegularize_hd87f99a1_0_14 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_23 
                                               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13) 
                                              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
                                                  & __VdfgRegularize_hd87f99a1_0_21) 
                                                 | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc 
                                                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_12) 
                                                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
                                                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_18) 
                                                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_22 
                                                          | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_19 
                                                             | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_11 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg) 
                                                                | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_17 
                                                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_13) 
                                                                   | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_9 
                                                                      & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT____VdfgRegularize_h66faf083_0_14))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
           ^ ((((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s)))) 
                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
                             >> 1U)) ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s)))) 
                                         << 0x3aU) 
                                        | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
                                           >> 6U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o) 
            & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xe1ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                              ? 0xa5ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                            ? 0x69ULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                ? 0xa5ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x69ULL
                                                    : 0ULL)))))) 
           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xffffffffffffff1eULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                            ? 0xffffffffffffff5aULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                ? 0xffffffffffffff96ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                    ? 0xffffffffffffff5aULL
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                     ? 0xffffffffffffff96ULL
                                                     : 0xffffffffffffffffULL))))) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc));
    __VdfgRegularize_hd87f99a1_0_15 = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15);
    __VdfgRegularize_hd87f99a1_0_20 = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8 
           & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
            & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_8) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21) 
              | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc) 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                                                      >> 0x29U))))))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc) 
                     & __VdfgRegularize_hd87f99a1_0_15) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc) 
                        & __VdfgRegularize_hd87f99a1_0_20) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_24 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
        = ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_16) 
              | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_25 
                 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_7 
                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_20 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
        = (((((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23) 
             | test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22) 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_3) 
                    | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_10 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14) 
                       | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc) 
                           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18) 
                          | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_21 
                              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12) 
                             | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc 
                                 & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_15)) 
                                | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc)))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
        = (__VdfgRegularize_hd87f99a1_0_15 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_23 
                                               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13) 
                                              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
                                                  & __VdfgRegularize_hd87f99a1_0_20) 
                                                 | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc 
                                                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_12) 
                                                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
                                                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_18) 
                                                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_22 
                                                          | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_19 
                                                             | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_11 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc) 
                                                                | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_17 
                                                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_13) 
                                                                   | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_9 
                                                                      & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT____VdfgRegularize_h66faf083_0_14))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
           ^ ((((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s)))) 
                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
                             >> 1U)) ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s)))) 
                                         << 0x3aU) 
                                        | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
                                           >> 6U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o) 
            & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xd2ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                              ? 0x96ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                            ? 0x5aULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                ? 0x96ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x5aULL
                                                    : 0ULL)))))) 
           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xffffffffffffff2dULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                            ? 0xffffffffffffff69ULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                ? 0xffffffffffffffa5ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                    ? 0xffffffffffffff69ULL
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                     ? 0xffffffffffffffa5ULL
                                                     : 0xffffffffffffffffULL))))) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc));
    __VdfgRegularize_hd87f99a1_0_16 = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15);
    __VdfgRegularize_hd87f99a1_0_19 = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8 
           & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
            & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_8) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21) 
              | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc) 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s)))) 
                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                                                      >> 0x29U))))))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc) 
                     & __VdfgRegularize_hd87f99a1_0_16) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc) 
                        & __VdfgRegularize_hd87f99a1_0_19) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_24 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
        = ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_16) 
              | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_25 
                 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_7 
                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_20 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
        = (((((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23) 
             | test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22) 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_3) 
                    | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_10 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14) 
                       | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc) 
                           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18) 
                          | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_21 
                              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12) 
                             | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc 
                                 & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_15)) 
                                | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc)))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
        = (__VdfgRegularize_hd87f99a1_0_16 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_23 
                                               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13) 
                                              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
                                                  & __VdfgRegularize_hd87f99a1_0_19) 
                                                 | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc 
                                                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_12) 
                                                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
                                                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_18) 
                                                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_22 
                                                          | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_19 
                                                             | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_11 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc) 
                                                                | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_17 
                                                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_13) 
                                                                   | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_9 
                                                                      & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT____VdfgRegularize_h66faf083_0_14))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
           ^ ((((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s)))) 
                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
                             >> 1U)) ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s)))) 
                                         << 0x3aU) 
                                        | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
                                           >> 6U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o) 
            & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xc3ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                              ? 0x87ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                            ? 0x4bULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                ? 0x87ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x4bULL
                                                    : 0ULL)))))) 
           | (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                ? 0xffffffffffffff3cULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                            ? 0xffffffffffffff78ULL
                                            : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                ? 0xffffffffffffffb4ULL
                                                : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                    ? 0xffffffffffffff78ULL
                                                    : 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                     ? 0xffffffffffffffb4ULL
                                                     : 0xffffffffffffffffULL))))) 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc;
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc) 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc));
    __VdfgRegularize_hd87f99a1_0_17 = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15);
    __VdfgRegularize_hd87f99a1_0_18 = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
                                       & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8 
           & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
              & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
        = (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
            & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_8) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21) 
              | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc) 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12))));
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21 
           & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25 
        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16);
    test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19 
        = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20);
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
        = ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_16) 
              | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25 
                 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7 
                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_20 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
        = (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_25) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_7 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc) 
                     & __VdfgRegularize_hd87f99a1_0_17) 
                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc) 
                        & __VdfgRegularize_hd87f99a1_0_18) 
                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_24 
                          & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
        = (__VdfgRegularize_hd87f99a1_0_17 | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23 
                                               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13) 
                                              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
                                                  & __VdfgRegularize_hd87f99a1_0_18) 
                                                 | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
                                                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12) 
                                                    | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
                                                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18) 
                                                       | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22 
                                                          | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19 
                                                             | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_11 
                                                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
                                                                | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17 
                                                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13) 
                                                                   | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9 
                                                                      & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14))))))))));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
        = (((((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc) 
              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_23) 
             | test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_22) 
            & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
           | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
               & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_19) 
              | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_9 
                  & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_13) 
                 | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
                     & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_3) 
                    | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_10 
                        & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_14) 
                       | (((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc) 
                           & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_18) 
                          | ((test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_21 
                              & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_12) 
                             | ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc 
                                 & (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc 
                                    & test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_15)) 
                                | (test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT____VdfgRegularize_h66faf083_0_17 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc)))))))));
}

void Vtest_ascon_core___024root___timing_resume(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___timing_resume\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7cd2085d__0.resume(
                                                   "@( test_ascon_core.done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_ascon_core___024root___timing_commit(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___timing_commit\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7cd2085d__0.commit(
                                                   "@( test_ascon_core.done)");
    }
}

void Vtest_ascon_core___024root___eval_triggers__act(Vtest_ascon_core___024root* vlSelf);

bool Vtest_ascon_core___024root___eval_phase__act(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_phase__act\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_ascon_core___024root___eval_triggers__act(vlSelf);
    Vtest_ascon_core___024root___timing_commit(vlSelf);
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_phase__nba\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
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
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_debug_assertions\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
