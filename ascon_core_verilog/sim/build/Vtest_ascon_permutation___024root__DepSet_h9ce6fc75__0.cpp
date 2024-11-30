// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_permutation.h for the primary calling header

#include "Vtest_ascon_permutation__pch.h"
#include "Vtest_ascon_permutation___024root.h"

VlCoroutine Vtest_ascon_permutation___024root___eval_initial__TOP__Vtiming__0(Vtest_ascon_permutation___024root* vlSelf);

void Vtest_ascon_permutation___024root___eval_initial(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_ascon_permutation___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtest_ascon_permutation___024root___act_sequent__TOP__0(Vtest_ascon_permutation___024root* vlSelf);

void Vtest_ascon_permutation___024root___eval_act(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_ascon_permutation___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtest_ascon_permutation___024root___act_sequent__TOP__0(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_permutation__DOT__x2_i 
                      ^ vlSelfRef.test_ascon_permutation__DOT__x1_i));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_permutation__DOT__x2_i 
                      ^ vlSelfRef.test_ascon_permutation__DOT__x1_i));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__x3_i 
           ^ vlSelfRef.test_ascon_permutation__DOT__x4_i);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__x0_i 
           ^ vlSelfRef.test_ascon_permutation__DOT__x4_i);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xf0ULL ^ (vlSelfRef.test_ascon_permutation__DOT__x2_i 
                      ^ vlSelfRef.test_ascon_permutation__DOT__x1_i));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__d 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__x3_i) 
           & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__i 
        = (vlSelfRef.test_ascon_permutation__DOT__x3_i 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__x1_i));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__d);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__d);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__d);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__x1_i 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__x3_i)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__x1_i 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__x3_i)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__x1_i 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__x3_i)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__i 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__i 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r0__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__i 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r0__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xe1ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r0__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[0U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r1__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r1__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xd2ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r1__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[1U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r2__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r2__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[2U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xc3ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r2__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r3__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r3__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[3U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r3__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r4__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r4__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[4U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r4__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
              ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                 & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r5__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r5__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[5U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r5__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r6__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r6__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[6U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r6__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
              ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                 & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r7__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[7U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[7U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r7__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[7U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[7U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[7U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r7__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r8__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[8U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[8U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r8__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[8U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[8U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[8U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r8__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r9__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[9U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[9U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r9__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[9U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[9U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[9U] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r9__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x4_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j)))) 
                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                             >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r10__x2_o 
        = ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__f);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[0xaU] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x4_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[0xaU] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r10__x2_o;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s)))) 
                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s)))) 
                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
           ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                                          >> 0x27U))))))));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[0xaU] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[0xaU] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_rc 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x4_rc);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[0xaU] 
        = vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc;
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r10__x2_o 
                      ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)) 
           ^ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
              ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                 & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__f 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 
           ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc) 
              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
        = (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__f 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j);
    vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
        = ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc 
            ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
           ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__f);
}

void Vtest_ascon_permutation___024root___eval_nba(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_permutation___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtest_ascon_permutation___024root___timing_resume(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_ascon_permutation___024root___eval_triggers__act(Vtest_ascon_permutation___024root* vlSelf);

bool Vtest_ascon_permutation___024root___eval_phase__act(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_ascon_permutation___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_ascon_permutation___024root___timing_resume(vlSelf);
        Vtest_ascon_permutation___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest_ascon_permutation___024root___eval_phase__nba(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_ascon_permutation___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_permutation___024root___dump_triggers__nba(Vtest_ascon_permutation___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_permutation___024root___dump_triggers__act(Vtest_ascon_permutation___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_ascon_permutation___024root___eval(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval\n"); );
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
            Vtest_ascon_permutation___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../tb/test_ascon_permutation.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtest_ascon_permutation___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../tb/test_ascon_permutation.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_ascon_permutation___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_ascon_permutation___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_ascon_permutation___024root___eval_debug_assertions(Vtest_ascon_permutation___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
