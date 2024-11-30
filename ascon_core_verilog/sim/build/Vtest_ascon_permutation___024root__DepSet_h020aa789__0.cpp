// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_permutation.h for the primary calling header

#include "Vtest_ascon_permutation__pch.h"
#include "Vtest_ascon_permutation__Syms.h"
#include "Vtest_ascon_permutation___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_ascon_permutation___024root___eval_initial__TOP__Vtiming__0(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x0_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x0_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x1_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x1_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x2_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x2_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x3_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x3_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x4_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x4_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x0_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x0_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x1_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x1_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x2_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x2_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x3_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x3_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x4_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x4_o = 0;
    IData/*31:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__rounds;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__rounds = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x0_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x0_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x1_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x1_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x2_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x2_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x3_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x3_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x4_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x4_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x0_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x0_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x1_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x1_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x2_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x2_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x3_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x3_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x4_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x4_o = 0;
    IData/*31:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__rounds;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__rounds = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x0_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x0_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x1_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x1_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x2_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x2_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x3_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x3_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x4_i;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x4_i = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x0_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x0_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x1_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x1_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x2_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x2_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x3_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x3_o = 0;
    QData/*63:0*/ __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x4_o;
    __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x4_o = 0;
    // Body
    VL_WRITEF_NX("TEST PERMUTATION P6\ninput\t\t|output\t\t|expect\t\t|\n",0);
    vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x32U, vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.test_ascon_permutation__DOT__x0_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x1_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x2_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x3_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x4_i 
            = VL_RANDOM_Q();
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x4_i 
            = vlSelfRef.test_ascon_permutation__DOT__x4_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x3_i 
            = vlSelfRef.test_ascon_permutation__DOT__x3_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x2_i 
            = vlSelfRef.test_ascon_permutation__DOT__x2_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x1_i 
            = vlSelfRef.test_ascon_permutation__DOT__x1_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x0_i 
            = vlSelfRef.test_ascon_permutation__DOT__x0_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x0_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x1_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x2_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x3_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x4_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r = 6U;
        while (VL_GTS_III(32, 0xcU, vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r)) {
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ ((0xf0ULL - VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r)), 4U)) 
                           + (QData)((IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [0U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[0U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[1U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [2U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[2U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [3U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[3U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[4U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 5U;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr19 
                = (((QData)((IData)((0x7ffffU & (IData)(
                                                        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                        [0U])))) 
                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [0U] >> 0x13U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr28 
                = (((QData)((IData)((0xfffffffU & (IData)(
                                                          vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                          [0U])))) 
                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [0U] >> 0x1cU));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr61 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] << 3U) | (QData)((IData)((7U 
                                                   & (IData)(
                                                             (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                              [1U] 
                                                              >> 0x3dU))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr39 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] << 0x19U) | (QData)((IData)(
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                                 [1U] 
                                                                 >> 0x27U))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr1 
                = (((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                  [2U])))) 
                    << 0x3fU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [2U] >> 1U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr6 
                = (((QData)((IData)((0x3fU & (IData)(
                                                     vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                     [2U])))) 
                    << 0x3aU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [2U] >> 6U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr10 
                = (((QData)((IData)((0x3ffU & (IData)(
                                                      vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                      [3U])))) 
                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [3U] >> 0xaU));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr17 
                = (((QData)((IData)((0x1ffffU & (IData)(
                                                        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                        [3U])))) 
                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [3U] >> 0x11U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr7 
                = (((QData)((IData)((0x7fU & (IData)(
                                                     vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                     [4U])))) 
                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [4U] >> 7U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr41 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U] << 0x17U) | (QData)((IData)(
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                                 [4U] 
                                                                 >> 0x29U))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr19) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr28);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr61) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr39);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr1) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr6);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr10) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr17);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr7) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr41);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r 
                = ((IData)(1U) + vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r);
        }
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x0_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [0U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x1_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [1U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x2_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [2U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x3_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [3U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x4_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [4U];
        vlSelfRef.test_ascon_permutation__DOT__x0_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x0_o;
        vlSelfRef.test_ascon_permutation__DOT__x1_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x1_o;
        vlSelfRef.test_ascon_permutation__DOT__x2_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x2_o;
        vlSelfRef.test_ascon_permutation__DOT__x3_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x3_o;
        vlSelfRef.test_ascon_permutation__DOT__x4_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__0__x4_o;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_permutation.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("============case %2d===============\n",0,
                     32,vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i);
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
              ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                >> 0x13U)) ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                                 >> 0x1cU)))) 
             == vlSelfRef.test_ascon_permutation__DOT__x0_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                             ^ ((((QData)((IData)((0x7ffffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                  << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                               >> 0x13U)) 
                                ^ (((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                                 >> 0x1cU)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                             ^ ((((QData)((IData)((0x7ffffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                  << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                               >> 0x13U)) 
                                ^ (((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                                 >> 0x1cU)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
              ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                   << 3U) | (QData)((IData)((7U & (IData)(
                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                           >> 0x3dU)))))) 
                 ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                     << 0x19U) | (QData)((IData)((0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                             >> 0x27U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x1_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                             ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                  << 3U) | (QData)((IData)(
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                                       >> 0x3dU)))))) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                                            >> 0x27U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                             ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                  << 3U) | (QData)((IData)(
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                                       >> 0x3dU)))))) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                                            >> 0x27U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_cmp);
        }
        if ((((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))) 
              ^ ((((QData)((IData)((1U & (~ ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                             ^ ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)) 
                                                & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                   << 0x3fU) | (0x7fffffffffffffffULL 
                                & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                       >> 1U) ^ ((~ 
                                                  (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                                   >> 1U)) 
                                                 & (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
                                                    >> 1U)))))) 
                 ^ (((QData)((IData)((0x3fU & (~ ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                                  ^ 
                                                  ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)) 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                         >> 6U) ^ (
                                                   (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                                     >> 6U)) 
                                                   & (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
                                                      >> 6U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x2_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_i,
                         64,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                    & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))) 
                             ^ ((((QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                                       ^ 
                                                       ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)) 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                  << 0x3fU) | (0x7fffffffffffffffULL 
                                               & (~ 
                                                  ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 1U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                                      >> 1U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 1U)))))) 
                                ^ (((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                                         ^ 
                                                         ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)) 
                                                          & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                                      >> 6U) 
                                                     ^ 
                                                     ((~ 
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                                        >> 6U)) 
                                                      & (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
                                                         >> 6U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_i,
                         64,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                    & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))) 
                             ^ ((((QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                                       ^ 
                                                       ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)) 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                  << 0x3fU) | (0x7fffffffffffffffULL 
                                               & (~ 
                                                  ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 1U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                                      >> 1U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 1U)))))) 
                                ^ (((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                                         ^ 
                                                         ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)) 
                                                          & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                                      >> 6U) 
                                                     ^ 
                                                     ((~ 
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                                        >> 6U)) 
                                                      & (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
                                                         >> 6U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
              ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                >> 0xaU)) ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                                >> 0x11U)))) 
             == vlSelfRef.test_ascon_permutation__DOT__x3_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                             ^ ((((QData)((IData)((0x3ffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                  << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                               >> 0xaU)) 
                                ^ (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                                 >> 0x11U)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                             ^ ((((QData)((IData)((0x3ffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                  << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                               >> 0xaU)) 
                                ^ (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                                 >> 0x11U)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
              ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j)))) 
                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                            << 0x17U) 
                                           | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                                                         >> 0x29U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x4_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                             ^ ((((QData)((IData)((0x7fU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j)))) 
                                  << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                               >> 7U)) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                                                            >> 0x29U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                             ^ ((((QData)((IData)((0x7fU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j)))) 
                                  << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                               >> 7U)) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                                                            >> 0x29U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_cmp);
        }
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_permutation.sv", 
                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("TEST PERMUTATION P8\ninput\t\t|output\t\t|expect\t\t|\n",0);
    vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x32U, vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.test_ascon_permutation__DOT__x0_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x1_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x2_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x3_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x4_i 
            = VL_RANDOM_Q();
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x4_i 
            = vlSelfRef.test_ascon_permutation__DOT__x4_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x3_i 
            = vlSelfRef.test_ascon_permutation__DOT__x3_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x2_i 
            = vlSelfRef.test_ascon_permutation__DOT__x2_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x1_i 
            = vlSelfRef.test_ascon_permutation__DOT__x1_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x0_i 
            = vlSelfRef.test_ascon_permutation__DOT__x0_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__rounds = 8U;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x0_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x1_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x2_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x3_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x4_i;
        if (VL_UNLIKELY((VL_LTS_III(32, 0xcU, __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__rounds) 
                         | VL_GTS_III(32, 0U, __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__rounds)))) {
            VL_WRITEF_NX("[%0t] %%Error: test_ascon_permutation.sv:179: Assertion failed in %Ntest_ascon_permutation.calculate_permutation: Invalid number of rounds: %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_test_ascon_permutation__DOT__calculate_permutation__1__rounds);
            VL_STOP_MT("../tb/test_ascon_permutation.sv", 179, "");
        }
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r 
            = ((IData)(0xcU) - __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__rounds);
        while (VL_GTS_III(32, 0xcU, vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r)) {
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ ((0xf0ULL - VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r)), 4U)) 
                           + (QData)((IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [0U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [0U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[0U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 1U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [1U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[1U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 2U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [2U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [2U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[2U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 3U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [3U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [3U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[3U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 4U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [4U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[4U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 5U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [0U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 1U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [1U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 2U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [2U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 3U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [3U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 4U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [4U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 5U;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr19 
                = (((QData)((IData)((0x7ffffU & (IData)(
                                                        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                        [0U])))) 
                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [0U] >> 0x13U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr28 
                = (((QData)((IData)((0xfffffffU & (IData)(
                                                          vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                          [0U])))) 
                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [0U] >> 0x1cU));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr61 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] << 3U) | (QData)((IData)((7U 
                                                   & (IData)(
                                                             (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                              [1U] 
                                                              >> 0x3dU))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr39 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] << 0x19U) | (QData)((IData)(
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                                 [1U] 
                                                                 >> 0x27U))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr1 
                = (((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                  [2U])))) 
                    << 0x3fU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [2U] >> 1U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr6 
                = (((QData)((IData)((0x3fU & (IData)(
                                                     vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                     [2U])))) 
                    << 0x3aU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [2U] >> 6U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr10 
                = (((QData)((IData)((0x3ffU & (IData)(
                                                      vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                      [3U])))) 
                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [3U] >> 0xaU));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr17 
                = (((QData)((IData)((0x1ffffU & (IData)(
                                                        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                        [3U])))) 
                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [3U] >> 0x11U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr7 
                = (((QData)((IData)((0x7fU & (IData)(
                                                     vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                     [4U])))) 
                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [4U] >> 7U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr41 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U] << 0x17U) | (QData)((IData)(
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                                 [4U] 
                                                                 >> 0x29U))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr19) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr28);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr61) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr39);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr1) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr6);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr10) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr17);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr7) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr41);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r 
                = ((IData)(1U) + vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r);
        }
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x0_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [0U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x1_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [1U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x2_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [2U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x3_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [3U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x4_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [4U];
        vlSelfRef.test_ascon_permutation__DOT__x0_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x0_o;
        vlSelfRef.test_ascon_permutation__DOT__x1_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x1_o;
        vlSelfRef.test_ascon_permutation__DOT__x2_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x2_o;
        vlSelfRef.test_ascon_permutation__DOT__x3_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x3_o;
        vlSelfRef.test_ascon_permutation__DOT__x4_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__1__x4_o;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_permutation.sv", 
                                             90);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("============case %2d===============\n",0,
                     32,vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i);
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
              ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                >> 0x13U)) ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                                 >> 0x1cU)))) 
             == vlSelfRef.test_ascon_permutation__DOT__x0_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                             ^ ((((QData)((IData)((0x7ffffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                  << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                               >> 0x13U)) 
                                ^ (((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                                 >> 0x1cU)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                             ^ ((((QData)((IData)((0x7ffffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                  << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                               >> 0x13U)) 
                                ^ (((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                                 >> 0x1cU)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
              ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                   << 3U) | (QData)((IData)((7U & (IData)(
                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                           >> 0x3dU)))))) 
                 ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                     << 0x19U) | (QData)((IData)((0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                             >> 0x27U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x1_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                             ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                  << 3U) | (QData)((IData)(
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                       >> 0x3dU)))))) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                            >> 0x27U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                             ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                  << 3U) | (QData)((IData)(
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                       >> 0x3dU)))))) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                            >> 0x27U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_cmp);
        }
        if ((((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))) 
              ^ ((((QData)((IData)((1U & (~ ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                             ^ ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)) 
                                                & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                   << 0x3fU) | (0x7fffffffffffffffULL 
                                & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                       >> 1U) ^ ((~ 
                                                  (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                                   >> 1U)) 
                                                 & (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
                                                    >> 1U)))))) 
                 ^ (((QData)((IData)((0x3fU & (~ ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                                  ^ 
                                                  ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)) 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                         >> 6U) ^ (
                                                   (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                                     >> 6U)) 
                                                   & (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
                                                      >> 6U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x2_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_i,
                         64,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                    & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))) 
                             ^ ((((QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                                       ^ 
                                                       ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)) 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                  << 0x3fU) | (0x7fffffffffffffffULL 
                                               & (~ 
                                                  ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 1U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                                      >> 1U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 1U)))))) 
                                ^ (((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                                         ^ 
                                                         ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)) 
                                                          & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                                      >> 6U) 
                                                     ^ 
                                                     ((~ 
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                                        >> 6U)) 
                                                      & (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
                                                         >> 6U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_i,
                         64,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                    & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))) 
                             ^ ((((QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                                       ^ 
                                                       ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)) 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                  << 0x3fU) | (0x7fffffffffffffffULL 
                                               & (~ 
                                                  ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 1U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                                      >> 1U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 1U)))))) 
                                ^ (((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                                         ^ 
                                                         ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)) 
                                                          & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                                      >> 6U) 
                                                     ^ 
                                                     ((~ 
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                                        >> 6U)) 
                                                      & (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
                                                         >> 6U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
              ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                >> 0xaU)) ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                                >> 0x11U)))) 
             == vlSelfRef.test_ascon_permutation__DOT__x3_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                             ^ ((((QData)((IData)((0x3ffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                  << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                               >> 0xaU)) 
                                ^ (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                                 >> 0x11U)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                             ^ ((((QData)((IData)((0x3ffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                  << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                               >> 0xaU)) 
                                ^ (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                                 >> 0x11U)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
              ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j)))) 
                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                            << 0x17U) 
                                           | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                                         >> 0x29U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x4_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                             ^ ((((QData)((IData)((0x7fU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j)))) 
                                  << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                               >> 7U)) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                                            >> 0x29U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                             ^ ((((QData)((IData)((0x7fU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j)))) 
                                  << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                               >> 7U)) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                                            >> 0x29U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_cmp);
        }
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_permutation.sv", 
                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("TEST PERMUTATION P12\ninput\t\t|output\t\t|expect\t\t|\n",0);
    vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x32U, vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.test_ascon_permutation__DOT__x0_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x1_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x2_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x3_i 
            = VL_RANDOM_Q();
        vlSelfRef.test_ascon_permutation__DOT__x4_i 
            = VL_RANDOM_Q();
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x4_i 
            = vlSelfRef.test_ascon_permutation__DOT__x4_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x3_i 
            = vlSelfRef.test_ascon_permutation__DOT__x3_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x2_i 
            = vlSelfRef.test_ascon_permutation__DOT__x2_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x1_i 
            = vlSelfRef.test_ascon_permutation__DOT__x1_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x0_i 
            = vlSelfRef.test_ascon_permutation__DOT__x0_i;
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__rounds = 0xcU;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x0_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x1_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x2_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x3_i;
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x4_i;
        if (VL_UNLIKELY((VL_LTS_III(32, 0xcU, __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__rounds) 
                         | VL_GTS_III(32, 0U, __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__rounds)))) {
            VL_WRITEF_NX("[%0t] %%Error: test_ascon_permutation.sv:179: Assertion failed in %Ntest_ascon_permutation.calculate_permutation: Invalid number of rounds: %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_test_ascon_permutation__DOT__calculate_permutation__2__rounds);
            VL_STOP_MT("../tb/test_ascon_permutation.sv", 179, "");
        }
        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r 
            = ((IData)(0xcU) - __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__rounds);
        while (VL_GTS_III(32, 0xcU, vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r)) {
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ ((0xf0ULL - VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r)), 4U)) 
                           + (QData)((IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [0U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [0U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[0U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 1U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [1U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[1U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 2U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [2U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [2U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[2U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 3U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [3U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [3U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[3U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 4U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                [4U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0 
                = ((~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U]) & vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[4U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_h3ff50269__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 5U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [0U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [1U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 1U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [1U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 2U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [2U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [3U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 3U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [3U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 4U;
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                [4U];
            vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = vlSelfRef.test_ascon_permutation__DOT____Vlvbound_had625518__0;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i = 5U;
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [4U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = (~ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                   [2U]);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr19 
                = (((QData)((IData)((0x7ffffU & (IData)(
                                                        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                        [0U])))) 
                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [0U] >> 0x13U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr28 
                = (((QData)((IData)((0xfffffffU & (IData)(
                                                          vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                          [0U])))) 
                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [0U] >> 0x1cU));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr61 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] << 3U) | (QData)((IData)((7U 
                                                   & (IData)(
                                                             (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                              [1U] 
                                                              >> 0x3dU))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr39 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] << 0x19U) | (QData)((IData)(
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                                 [1U] 
                                                                 >> 0x27U))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr1 
                = (((QData)((IData)((1U & (IData)(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                  [2U])))) 
                    << 0x3fU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [2U] >> 1U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr6 
                = (((QData)((IData)((0x3fU & (IData)(
                                                     vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                     [2U])))) 
                    << 0x3aU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [2U] >> 6U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr10 
                = (((QData)((IData)((0x3ffU & (IData)(
                                                      vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                      [3U])))) 
                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [3U] >> 0xaU));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr17 
                = (((QData)((IData)((0x1ffffU & (IData)(
                                                        vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                        [3U])))) 
                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [3U] >> 0x11U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr7 
                = (((QData)((IData)((0x7fU & (IData)(
                                                     vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                     [4U])))) 
                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                 [4U] >> 7U));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr41 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U] << 0x17U) | (QData)((IData)(
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                                                                 [4U] 
                                                                 >> 0x29U))))));
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [0U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr19) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr28);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [1U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr61) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr39);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [2U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr1) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr6);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [3U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr10) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr17);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4U] 
                = ((vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
                    [4U] ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr7) 
                   ^ vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr41);
            vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r 
                = ((IData)(1U) + vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r);
        }
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x0_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [0U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x1_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [1U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x2_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [2U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x3_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [3U];
        __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x4_o 
            = vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x
            [4U];
        vlSelfRef.test_ascon_permutation__DOT__x0_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x0_o;
        vlSelfRef.test_ascon_permutation__DOT__x1_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x1_o;
        vlSelfRef.test_ascon_permutation__DOT__x2_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x2_o;
        vlSelfRef.test_ascon_permutation__DOT__x3_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x3_o;
        vlSelfRef.test_ascon_permutation__DOT__x4_cmp 
            = __Vtask_test_ascon_permutation__DOT__calculate_permutation__2__x4_o;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_permutation.sv", 
                                             115);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("============case %2d===============\n",0,
                     32,vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i);
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
              ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                >> 0x13U)) ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                                 >> 0x1cU)))) 
             == vlSelfRef.test_ascon_permutation__DOT__x0_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                             ^ ((((QData)((IData)((0x7ffffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                  << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                               >> 0x13U)) 
                                ^ (((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                                 >> 0x1cU)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                             ^ ((((QData)((IData)((0x7ffffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                  << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                               >> 0x13U)) 
                                ^ (((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                                 >> 0x1cU)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x0_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
              ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                   << 3U) | (QData)((IData)((7U & (IData)(
                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                           >> 0x3dU)))))) 
                 ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                     << 0x19U) | (QData)((IData)((0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                             >> 0x27U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x1_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                             ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                  << 3U) | (QData)((IData)(
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                       >> 0x3dU)))))) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                            >> 0x27U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                             ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                  << 3U) | (QData)((IData)(
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                       >> 0x3dU)))))) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                            >> 0x27U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x1_cmp);
        }
        if ((((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))) 
              ^ ((((QData)((IData)((1U & (~ ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                             ^ ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                   << 0x3fU) | (0x7fffffffffffffffULL 
                                & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                       >> 1U) ^ ((~ 
                                                  (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                   >> 1U)) 
                                                 & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                    >> 1U)))))) 
                 ^ (((QData)((IData)((0x3fU & (~ ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                  ^ 
                                                  ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                         >> 6U) ^ (
                                                   (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                     >> 6U)) 
                                                   & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                      >> 6U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x2_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_i,
                         64,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                    & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))) 
                             ^ ((((QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                       ^ 
                                                       ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                  << 0x3fU) | (0x7fffffffffffffffULL 
                                               & (~ 
                                                  ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 1U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                      >> 1U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 1U)))))) 
                                ^ (((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                         ^ 
                                                         ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                          & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                      >> 6U) 
                                                     ^ 
                                                     ((~ 
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                        >> 6U)) 
                                                      & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                         >> 6U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_i,
                         64,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                    & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))) 
                             ^ ((((QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                       ^ 
                                                       ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                  << 0x3fU) | (0x7fffffffffffffffULL 
                                               & (~ 
                                                  ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 1U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                      >> 1U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 1U)))))) 
                                ^ (((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                         ^ 
                                                         ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                          & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                      >> 6U) 
                                                     ^ 
                                                     ((~ 
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                        >> 6U)) 
                                                      & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                         >> 6U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x2_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
              ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                >> 0xaU)) ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                                >> 0x11U)))) 
             == vlSelfRef.test_ascon_permutation__DOT__x3_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                             ^ ((((QData)((IData)((0x3ffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                  << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                               >> 0xaU)) 
                                ^ (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                                 >> 0x11U)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                             ^ ((((QData)((IData)((0x3ffU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                  << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                               >> 0xaU)) 
                                ^ (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                                 >> 0x11U)))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x3_cmp);
        }
        if (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
              ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j)))) 
                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                            << 0x17U) 
                                           | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                                         >> 0x29U)))))))) 
             == vlSelfRef.test_ascon_permutation__DOT__x4_cmp)) {
            VL_WRITEF_NX("%16x|%16x|%16x|PASS\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                             ^ ((((QData)((IData)((0x7fU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j)))) 
                                  << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                               >> 7U)) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                                            >> 0x29U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_cmp);
        } else {
            VL_WRITEF_NX("%16x|%16x|%16x|FAILED\n",0,
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_i,
                         64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                             ^ ((((QData)((IData)((0x7fU 
                                                   & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j)))) 
                                  << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                               >> 7U)) 
                                ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                                            >> 0x29U)))))))),
                         64,vlSelfRef.test_ascon_permutation__DOT__x4_cmp);
        }
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "../tb/test_ascon_permutation.sv", 
                                             127);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i);
    }
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tb/test_ascon_permutation.sv", 
                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("../tb/test_ascon_permutation.sv", 155, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_permutation___024root___dump_triggers__act(Vtest_ascon_permutation___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_ascon_permutation___024root___eval_triggers__act(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_permutation___024root___dump_triggers__act(vlSelf);
    }
#endif
}
