// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_encrypt_decrypt.h for the primary calling header

#include "Vtest_ascon_encrypt_decrypt__pch.h"
#include "Vtest_ascon_encrypt_decrypt__Syms.h"
#include "Vtest_ascon_encrypt_decrypt_ascon_permutation_p12.h"

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__IV 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x4_i);
    vlSelfRef.__PVT__r0__DOT__x3_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__h);
    vlSelfRef.__PVT__r0__DOT__j = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i));
    vlSelfRef.__PVT__r0__DOT__f = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r1__DOT__x3_rc = (vlSelfRef.__PVT__r0__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r1__DOT__x4_rc = (vlSelfRef.__PVT__r0__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r0__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__PVT__r0__DOT__x0_s = (vlSelfRef.__PVT__r0__DOT__f 
                                      ^ vlSelfRef.__PVT__r0__DOT__j);
    vlSelfRef.__PVT__r0__DOT__x1_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__f);
    vlSelfRef.__PVT__x3_round[0U] = vlSelfRef.__PVT__r1__DOT__x3_rc;
    vlSelfRef.__PVT__x4_round[0U] = vlSelfRef.__PVT__r1__DOT__x4_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r1__DOT__x3_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__r1__DOT__x0_rc = (vlSelfRef.__PVT__r0__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r1__DOT__x1_rc = (vlSelfRef.__PVT__r0__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r0__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x0_round[0U] = vlSelfRef.__PVT__r1__DOT__x0_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r1__DOT__x0_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[0U] = vlSelfRef.__PVT__r1__DOT__x1_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xe1ULL ^ (vlSelfRef.__Vcellout__r0__x2_o 
                      ^ vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__r1__DOT__j = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__r1__DOT__h = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x3_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r1__DOT__f = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x1_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r2__DOT__x4_rc = (vlSelfRef.__PVT__r1__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r1__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r1__x2_o = ((~ vlSelfRef.__PVT__r1__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r1__DOT__x3_s = ((vlSelfRef.__PVT__r1__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__h);
    vlSelfRef.__PVT__r1__DOT__x0_s = (vlSelfRef.__PVT__r1__DOT__f 
                                      ^ vlSelfRef.__PVT__r1__DOT__j);
    vlSelfRef.__PVT__r1__DOT__x1_s = ((vlSelfRef.__PVT__r1__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r1__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__f);
    vlSelfRef.__PVT__x4_round[1U] = vlSelfRef.__PVT__r2__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[1U] = vlSelfRef.__Vcellout__r1__x2_o;
    vlSelfRef.__PVT__r2__DOT__x3_rc = (vlSelfRef.__PVT__r1__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r2__DOT__x0_rc = (vlSelfRef.__PVT__r1__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r2__DOT__x1_rc = (vlSelfRef.__PVT__r1__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r1__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[1U] = vlSelfRef.__PVT__r2__DOT__x3_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r2__DOT__x3_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[1U] = vlSelfRef.__PVT__r2__DOT__x0_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r2__DOT__x0_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[1U] = vlSelfRef.__PVT__r2__DOT__x1_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xd2ULL ^ (vlSelfRef.__Vcellout__r1__x2_o 
                      ^ vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__j = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__h = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x3_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r2__DOT__f = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x1_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r3__DOT__x4_rc = (vlSelfRef.__PVT__r2__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r2__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r2__x2_o = ((~ vlSelfRef.__PVT__r2__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r2__DOT__x3_s = ((vlSelfRef.__PVT__r2__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__h);
    vlSelfRef.__PVT__r2__DOT__x0_s = (vlSelfRef.__PVT__r2__DOT__f 
                                      ^ vlSelfRef.__PVT__r2__DOT__j);
    vlSelfRef.__PVT__r2__DOT__x1_s = ((vlSelfRef.__PVT__r2__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r2__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__f);
    vlSelfRef.__PVT__x4_round[2U] = vlSelfRef.__PVT__r3__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[2U] = vlSelfRef.__Vcellout__r2__x2_o;
    vlSelfRef.__PVT__r3__DOT__x3_rc = (vlSelfRef.__PVT__r2__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r3__DOT__x0_rc = (vlSelfRef.__PVT__r2__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r3__DOT__x1_rc = (vlSelfRef.__PVT__r2__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r2__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[2U] = vlSelfRef.__PVT__r3__DOT__x3_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r3__DOT__x3_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[2U] = vlSelfRef.__PVT__r3__DOT__x0_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r3__DOT__x0_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[2U] = vlSelfRef.__PVT__r3__DOT__x1_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xc3ULL ^ (vlSelfRef.__Vcellout__r2__x2_o 
                      ^ vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__j = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__h = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x3_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r3__DOT__f = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x1_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r4__DOT__x4_rc = (vlSelfRef.__PVT__r3__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r3__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r3__x2_o = ((~ vlSelfRef.__PVT__r3__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r3__DOT__x3_s = ((vlSelfRef.__PVT__r3__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__h);
    vlSelfRef.__PVT__r3__DOT__x0_s = (vlSelfRef.__PVT__r3__DOT__f 
                                      ^ vlSelfRef.__PVT__r3__DOT__j);
    vlSelfRef.__PVT__r3__DOT__x1_s = ((vlSelfRef.__PVT__r3__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r3__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__f);
    vlSelfRef.__PVT__x4_round[3U] = vlSelfRef.__PVT__r4__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[3U] = vlSelfRef.__Vcellout__r3__x2_o;
    vlSelfRef.__PVT__r4__DOT__x3_rc = (vlSelfRef.__PVT__r3__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r4__DOT__x0_rc = (vlSelfRef.__PVT__r3__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r4__DOT__x1_rc = (vlSelfRef.__PVT__r3__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r3__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[3U] = vlSelfRef.__PVT__r4__DOT__x3_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r4__DOT__x3_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[3U] = vlSelfRef.__PVT__r4__DOT__x0_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r4__DOT__x0_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[3U] = vlSelfRef.__PVT__r4__DOT__x1_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.__Vcellout__r3__x2_o 
                      ^ vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__j = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__h = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x3_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r4__DOT__f = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x1_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r5__DOT__x4_rc = (vlSelfRef.__PVT__r4__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r4__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r4__x2_o = ((~ vlSelfRef.__PVT__r4__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r4__DOT__x3_s = ((vlSelfRef.__PVT__r4__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__h);
    vlSelfRef.__PVT__r4__DOT__x0_s = (vlSelfRef.__PVT__r4__DOT__f 
                                      ^ vlSelfRef.__PVT__r4__DOT__j);
    vlSelfRef.__PVT__r4__DOT__x1_s = ((vlSelfRef.__PVT__r4__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r4__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__f);
    vlSelfRef.__PVT__x4_round[4U] = vlSelfRef.__PVT__r5__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[4U] = vlSelfRef.__Vcellout__r4__x2_o;
    vlSelfRef.__PVT__r5__DOT__x3_rc = (vlSelfRef.__PVT__r4__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r5__DOT__x0_rc = (vlSelfRef.__PVT__r4__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r5__DOT__x1_rc = (vlSelfRef.__PVT__r4__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r4__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[4U] = vlSelfRef.__PVT__r5__DOT__x3_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r5__DOT__x3_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[4U] = vlSelfRef.__PVT__r5__DOT__x0_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r5__DOT__x0_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[4U] = vlSelfRef.__PVT__r5__DOT__x1_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.__Vcellout__r4__x2_o 
                      ^ vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__j = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__h = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x3_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r5__DOT__f = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x1_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r6__DOT__x4_rc = (vlSelfRef.__PVT__r5__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r5__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r5__x2_o = ((~ vlSelfRef.__PVT__r5__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r5__DOT__x3_s = ((vlSelfRef.__PVT__r5__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__h);
    vlSelfRef.__PVT__r5__DOT__x0_s = (vlSelfRef.__PVT__r5__DOT__f 
                                      ^ vlSelfRef.__PVT__r5__DOT__j);
    vlSelfRef.__PVT__r5__DOT__x1_s = ((vlSelfRef.__PVT__r5__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r5__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__f);
    vlSelfRef.__PVT__x4_round[5U] = vlSelfRef.__PVT__r6__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[5U] = vlSelfRef.__Vcellout__r5__x2_o;
    vlSelfRef.__PVT__r6__DOT__x3_rc = (vlSelfRef.__PVT__r5__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r6__DOT__x0_rc = (vlSelfRef.__PVT__r5__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r6__DOT__x1_rc = (vlSelfRef.__PVT__r5__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r5__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[5U] = vlSelfRef.__PVT__r6__DOT__x3_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r6__DOT__x3_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[5U] = vlSelfRef.__PVT__r6__DOT__x0_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r6__DOT__x0_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[5U] = vlSelfRef.__PVT__r6__DOT__x1_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.__Vcellout__r5__x2_o 
                      ^ vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__j = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__h = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x3_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r6__DOT__f = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x1_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r7__DOT__x4_rc = (vlSelfRef.__PVT__r6__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r6__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r6__x2_o = ((~ vlSelfRef.__PVT__r6__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r6__DOT__x3_s = ((vlSelfRef.__PVT__r6__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__h);
    vlSelfRef.__PVT__r6__DOT__x0_s = (vlSelfRef.__PVT__r6__DOT__f 
                                      ^ vlSelfRef.__PVT__r6__DOT__j);
    vlSelfRef.__PVT__r6__DOT__x1_s = ((vlSelfRef.__PVT__r6__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r6__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__f);
    vlSelfRef.__PVT__x4_round[6U] = vlSelfRef.__PVT__r7__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[6U] = vlSelfRef.__Vcellout__r6__x2_o;
    vlSelfRef.__PVT__r7__DOT__x3_rc = (vlSelfRef.__PVT__r6__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r7__DOT__x0_rc = (vlSelfRef.__PVT__r6__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r7__DOT__x1_rc = (vlSelfRef.__PVT__r6__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r6__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[6U] = vlSelfRef.__PVT__r7__DOT__x3_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r7__DOT__x3_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[6U] = vlSelfRef.__PVT__r7__DOT__x0_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r7__DOT__x0_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[6U] = vlSelfRef.__PVT__r7__DOT__x1_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.__Vcellout__r6__x2_o 
                      ^ vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__j = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__h = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x3_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r7__DOT__f = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x1_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r8__DOT__x4_rc = (vlSelfRef.__PVT__r7__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r7__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r7__x2_o = ((~ vlSelfRef.__PVT__r7__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r7__DOT__x3_s = ((vlSelfRef.__PVT__r7__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__h);
    vlSelfRef.__PVT__r7__DOT__x0_s = (vlSelfRef.__PVT__r7__DOT__f 
                                      ^ vlSelfRef.__PVT__r7__DOT__j);
    vlSelfRef.__PVT__r7__DOT__x1_s = ((vlSelfRef.__PVT__r7__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r7__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__f);
    vlSelfRef.__PVT__x4_round[7U] = vlSelfRef.__PVT__r8__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[7U] = vlSelfRef.__Vcellout__r7__x2_o;
    vlSelfRef.__PVT__r8__DOT__x3_rc = (vlSelfRef.__PVT__r7__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r8__DOT__x0_rc = (vlSelfRef.__PVT__r7__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r8__DOT__x1_rc = (vlSelfRef.__PVT__r7__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r7__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[7U] = vlSelfRef.__PVT__r8__DOT__x3_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r8__DOT__x3_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[7U] = vlSelfRef.__PVT__r8__DOT__x0_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r8__DOT__x0_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[7U] = vlSelfRef.__PVT__r8__DOT__x1_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.__Vcellout__r7__x2_o 
                      ^ vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__j = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__h = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x3_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r8__DOT__f = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x1_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r9__DOT__x4_rc = (vlSelfRef.__PVT__r8__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r8__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r8__x2_o = ((~ vlSelfRef.__PVT__r8__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r8__DOT__x3_s = ((vlSelfRef.__PVT__r8__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__h);
    vlSelfRef.__PVT__r8__DOT__x0_s = (vlSelfRef.__PVT__r8__DOT__f 
                                      ^ vlSelfRef.__PVT__r8__DOT__j);
    vlSelfRef.__PVT__r8__DOT__x1_s = ((vlSelfRef.__PVT__r8__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r8__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__f);
    vlSelfRef.__PVT__x4_round[8U] = vlSelfRef.__PVT__r9__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[8U] = vlSelfRef.__Vcellout__r8__x2_o;
    vlSelfRef.__PVT__r9__DOT__x3_rc = (vlSelfRef.__PVT__r8__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r9__DOT__x0_rc = (vlSelfRef.__PVT__r8__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r9__DOT__x1_rc = (vlSelfRef.__PVT__r8__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r8__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[8U] = vlSelfRef.__PVT__r9__DOT__x3_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r9__DOT__x3_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[8U] = vlSelfRef.__PVT__r9__DOT__x0_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r9__DOT__x0_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[8U] = vlSelfRef.__PVT__r9__DOT__x1_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.__Vcellout__r8__x2_o 
                      ^ vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__j = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__h = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x3_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r9__DOT__f = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x1_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r10__DOT__x4_rc = (vlSelfRef.__PVT__r9__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r9__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r9__x2_o = ((~ vlSelfRef.__PVT__r9__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r9__DOT__x3_s = ((vlSelfRef.__PVT__r9__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__h);
    vlSelfRef.__PVT__r9__DOT__x0_s = (vlSelfRef.__PVT__r9__DOT__f 
                                      ^ vlSelfRef.__PVT__r9__DOT__j);
    vlSelfRef.__PVT__r9__DOT__x1_s = ((vlSelfRef.__PVT__r9__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r9__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__f);
    vlSelfRef.__PVT__x4_round[9U] = vlSelfRef.__PVT__r10__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[9U] = vlSelfRef.__Vcellout__r9__x2_o;
    vlSelfRef.__PVT__r10__DOT__x3_rc = (vlSelfRef.__PVT__r9__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r10__DOT__x0_rc = (vlSelfRef.__PVT__r9__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r10__DOT__x1_rc = (vlSelfRef.__PVT__r9__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r9__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[9U] = vlSelfRef.__PVT__r10__DOT__x3_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r10__DOT__x3_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[9U] = vlSelfRef.__PVT__r10__DOT__x0_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r10__DOT__x0_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[9U] = vlSelfRef.__PVT__r10__DOT__x1_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.__Vcellout__r9__x2_o 
                      ^ vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__j = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__h = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x3_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r10__DOT__f = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x1_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x4_rc = (vlSelfRef.__PVT__r10__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r10__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r10__x2_o = ((~ vlSelfRef.__PVT__r10__DOT__h) 
                                       ^ ((((QData)((IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                            << 0x3fU) 
                                           | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.__PVT__r10__DOT__h 
                                                  >> 1U)))) 
                                          ^ (((QData)((IData)(
                                                              (0x3fU 
                                                               & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                              << 0x3aU) 
                                             | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.__PVT__r10__DOT__h 
                                                    >> 6U))))));
    vlSelfRef.__PVT__r10__DOT__x3_s = ((vlSelfRef.__PVT__r10__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__h);
    vlSelfRef.__PVT__r10__DOT__x0_s = (vlSelfRef.__PVT__r10__DOT__f 
                                       ^ vlSelfRef.__PVT__r10__DOT__j);
    vlSelfRef.__PVT__r10__DOT__x1_s = ((vlSelfRef.__PVT__r10__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r10__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__f);
    vlSelfRef.__PVT__x4_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[0xaU] = vlSelfRef.__Vcellout__r10__x2_o;
    vlSelfRef.__PVT__r11__DOT__x3_rc = (vlSelfRef.__PVT__r10__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r11__DOT__x0_rc = (vlSelfRef.__PVT__r10__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r11__DOT__x1_rc = (vlSelfRef.__PVT__r10__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r10__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x3_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r11__DOT__x3_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x0_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r11__DOT__x0_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x1_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.__Vcellout__r10__x2_o 
                      ^ vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__j = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__h = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x3_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r11__DOT__f = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x1_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x3_s = ((vlSelfRef.__PVT__r11__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__h);
    vlSelfRef.__PVT__r11__DOT__x0_s = (vlSelfRef.__PVT__r11__DOT__f 
                                       ^ vlSelfRef.__PVT__r11__DOT__j);
    vlSelfRef.__PVT__r11__DOT__x1_s = ((vlSelfRef.__PVT__r11__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r11__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__f);
}

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM);
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s0 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM);
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xf0ULL ^ (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM 
                      ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1));
    vlSelfRef.__PVT__r0__DOT__j = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1));
    vlSelfRef.__PVT__r0__DOT__h = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r0__DOT__f = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r1__DOT__x4_rc = (vlSelfRef.__PVT__r0__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r0__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r0__x2_o = ((~ vlSelfRef.__PVT__r0__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r0__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r0__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r0__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r0__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r0__DOT__x3_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__h);
    vlSelfRef.__PVT__r0__DOT__x0_s = (vlSelfRef.__PVT__r0__DOT__f 
                                      ^ vlSelfRef.__PVT__r0__DOT__j);
    vlSelfRef.__PVT__r0__DOT__x1_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__f);
    vlSelfRef.__PVT__x4_round[0U] = vlSelfRef.__PVT__r1__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[0U] = vlSelfRef.__Vcellout__r0__x2_o;
    vlSelfRef.__PVT__r1__DOT__x3_rc = (vlSelfRef.__PVT__r0__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r1__DOT__x0_rc = (vlSelfRef.__PVT__r0__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r1__DOT__x1_rc = (vlSelfRef.__PVT__r0__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r0__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[0U] = vlSelfRef.__PVT__r1__DOT__x3_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r1__DOT__x3_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0U] = vlSelfRef.__PVT__r1__DOT__x0_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r1__DOT__x0_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[0U] = vlSelfRef.__PVT__r1__DOT__x1_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xe1ULL ^ (vlSelfRef.__Vcellout__r0__x2_o 
                      ^ vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__r1__DOT__j = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__r1__DOT__h = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x3_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r1__DOT__f = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x1_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r2__DOT__x4_rc = (vlSelfRef.__PVT__r1__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r1__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r1__x2_o = ((~ vlSelfRef.__PVT__r1__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r1__DOT__x3_s = ((vlSelfRef.__PVT__r1__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__h);
    vlSelfRef.__PVT__r1__DOT__x0_s = (vlSelfRef.__PVT__r1__DOT__f 
                                      ^ vlSelfRef.__PVT__r1__DOT__j);
    vlSelfRef.__PVT__r1__DOT__x1_s = ((vlSelfRef.__PVT__r1__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r1__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__f);
    vlSelfRef.__PVT__x4_round[1U] = vlSelfRef.__PVT__r2__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[1U] = vlSelfRef.__Vcellout__r1__x2_o;
    vlSelfRef.__PVT__r2__DOT__x3_rc = (vlSelfRef.__PVT__r1__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r2__DOT__x0_rc = (vlSelfRef.__PVT__r1__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r2__DOT__x1_rc = (vlSelfRef.__PVT__r1__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r1__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[1U] = vlSelfRef.__PVT__r2__DOT__x3_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r2__DOT__x3_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[1U] = vlSelfRef.__PVT__r2__DOT__x0_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r2__DOT__x0_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[1U] = vlSelfRef.__PVT__r2__DOT__x1_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xd2ULL ^ (vlSelfRef.__Vcellout__r1__x2_o 
                      ^ vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__j = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__h = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x3_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r2__DOT__f = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x1_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r3__DOT__x4_rc = (vlSelfRef.__PVT__r2__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r2__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r2__x2_o = ((~ vlSelfRef.__PVT__r2__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r2__DOT__x3_s = ((vlSelfRef.__PVT__r2__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__h);
    vlSelfRef.__PVT__r2__DOT__x0_s = (vlSelfRef.__PVT__r2__DOT__f 
                                      ^ vlSelfRef.__PVT__r2__DOT__j);
    vlSelfRef.__PVT__r2__DOT__x1_s = ((vlSelfRef.__PVT__r2__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r2__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__f);
    vlSelfRef.__PVT__x4_round[2U] = vlSelfRef.__PVT__r3__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[2U] = vlSelfRef.__Vcellout__r2__x2_o;
    vlSelfRef.__PVT__r3__DOT__x3_rc = (vlSelfRef.__PVT__r2__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r3__DOT__x0_rc = (vlSelfRef.__PVT__r2__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r3__DOT__x1_rc = (vlSelfRef.__PVT__r2__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r2__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[2U] = vlSelfRef.__PVT__r3__DOT__x3_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r3__DOT__x3_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[2U] = vlSelfRef.__PVT__r3__DOT__x0_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r3__DOT__x0_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[2U] = vlSelfRef.__PVT__r3__DOT__x1_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xc3ULL ^ (vlSelfRef.__Vcellout__r2__x2_o 
                      ^ vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__j = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__h = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x3_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r3__DOT__f = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x1_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r4__DOT__x4_rc = (vlSelfRef.__PVT__r3__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r3__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r3__x2_o = ((~ vlSelfRef.__PVT__r3__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r3__DOT__x3_s = ((vlSelfRef.__PVT__r3__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__h);
    vlSelfRef.__PVT__r3__DOT__x0_s = (vlSelfRef.__PVT__r3__DOT__f 
                                      ^ vlSelfRef.__PVT__r3__DOT__j);
    vlSelfRef.__PVT__r3__DOT__x1_s = ((vlSelfRef.__PVT__r3__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r3__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__f);
    vlSelfRef.__PVT__x4_round[3U] = vlSelfRef.__PVT__r4__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[3U] = vlSelfRef.__Vcellout__r3__x2_o;
    vlSelfRef.__PVT__r4__DOT__x3_rc = (vlSelfRef.__PVT__r3__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r4__DOT__x0_rc = (vlSelfRef.__PVT__r3__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r4__DOT__x1_rc = (vlSelfRef.__PVT__r3__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r3__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[3U] = vlSelfRef.__PVT__r4__DOT__x3_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r4__DOT__x3_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[3U] = vlSelfRef.__PVT__r4__DOT__x0_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r4__DOT__x0_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[3U] = vlSelfRef.__PVT__r4__DOT__x1_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.__Vcellout__r3__x2_o 
                      ^ vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__j = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__h = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x3_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r4__DOT__f = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x1_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r5__DOT__x4_rc = (vlSelfRef.__PVT__r4__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r4__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r4__x2_o = ((~ vlSelfRef.__PVT__r4__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r4__DOT__x3_s = ((vlSelfRef.__PVT__r4__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__h);
    vlSelfRef.__PVT__r4__DOT__x0_s = (vlSelfRef.__PVT__r4__DOT__f 
                                      ^ vlSelfRef.__PVT__r4__DOT__j);
    vlSelfRef.__PVT__r4__DOT__x1_s = ((vlSelfRef.__PVT__r4__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r4__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__f);
    vlSelfRef.__PVT__x4_round[4U] = vlSelfRef.__PVT__r5__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[4U] = vlSelfRef.__Vcellout__r4__x2_o;
    vlSelfRef.__PVT__r5__DOT__x3_rc = (vlSelfRef.__PVT__r4__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r5__DOT__x0_rc = (vlSelfRef.__PVT__r4__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r5__DOT__x1_rc = (vlSelfRef.__PVT__r4__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r4__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[4U] = vlSelfRef.__PVT__r5__DOT__x3_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r5__DOT__x3_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[4U] = vlSelfRef.__PVT__r5__DOT__x0_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r5__DOT__x0_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[4U] = vlSelfRef.__PVT__r5__DOT__x1_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.__Vcellout__r4__x2_o 
                      ^ vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__j = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__h = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x3_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r5__DOT__f = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x1_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r6__DOT__x4_rc = (vlSelfRef.__PVT__r5__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r5__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r5__x2_o = ((~ vlSelfRef.__PVT__r5__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r5__DOT__x3_s = ((vlSelfRef.__PVT__r5__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__h);
    vlSelfRef.__PVT__r5__DOT__x0_s = (vlSelfRef.__PVT__r5__DOT__f 
                                      ^ vlSelfRef.__PVT__r5__DOT__j);
    vlSelfRef.__PVT__r5__DOT__x1_s = ((vlSelfRef.__PVT__r5__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r5__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__f);
    vlSelfRef.__PVT__x4_round[5U] = vlSelfRef.__PVT__r6__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[5U] = vlSelfRef.__Vcellout__r5__x2_o;
    vlSelfRef.__PVT__r6__DOT__x3_rc = (vlSelfRef.__PVT__r5__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r6__DOT__x0_rc = (vlSelfRef.__PVT__r5__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r6__DOT__x1_rc = (vlSelfRef.__PVT__r5__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r5__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[5U] = vlSelfRef.__PVT__r6__DOT__x3_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r6__DOT__x3_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[5U] = vlSelfRef.__PVT__r6__DOT__x0_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r6__DOT__x0_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[5U] = vlSelfRef.__PVT__r6__DOT__x1_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.__Vcellout__r5__x2_o 
                      ^ vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__j = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__h = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x3_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r6__DOT__f = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x1_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r7__DOT__x4_rc = (vlSelfRef.__PVT__r6__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r6__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r6__x2_o = ((~ vlSelfRef.__PVT__r6__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r6__DOT__x3_s = ((vlSelfRef.__PVT__r6__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__h);
    vlSelfRef.__PVT__r6__DOT__x0_s = (vlSelfRef.__PVT__r6__DOT__f 
                                      ^ vlSelfRef.__PVT__r6__DOT__j);
    vlSelfRef.__PVT__r6__DOT__x1_s = ((vlSelfRef.__PVT__r6__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r6__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__f);
    vlSelfRef.__PVT__x4_round[6U] = vlSelfRef.__PVT__r7__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[6U] = vlSelfRef.__Vcellout__r6__x2_o;
    vlSelfRef.__PVT__r7__DOT__x3_rc = (vlSelfRef.__PVT__r6__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r7__DOT__x0_rc = (vlSelfRef.__PVT__r6__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r7__DOT__x1_rc = (vlSelfRef.__PVT__r6__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r6__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[6U] = vlSelfRef.__PVT__r7__DOT__x3_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r7__DOT__x3_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[6U] = vlSelfRef.__PVT__r7__DOT__x0_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r7__DOT__x0_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[6U] = vlSelfRef.__PVT__r7__DOT__x1_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.__Vcellout__r6__x2_o 
                      ^ vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__j = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__h = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x3_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r7__DOT__f = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x1_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r8__DOT__x4_rc = (vlSelfRef.__PVT__r7__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r7__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r7__x2_o = ((~ vlSelfRef.__PVT__r7__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r7__DOT__x3_s = ((vlSelfRef.__PVT__r7__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__h);
    vlSelfRef.__PVT__r7__DOT__x0_s = (vlSelfRef.__PVT__r7__DOT__f 
                                      ^ vlSelfRef.__PVT__r7__DOT__j);
    vlSelfRef.__PVT__r7__DOT__x1_s = ((vlSelfRef.__PVT__r7__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r7__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__f);
    vlSelfRef.__PVT__x4_round[7U] = vlSelfRef.__PVT__r8__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[7U] = vlSelfRef.__Vcellout__r7__x2_o;
    vlSelfRef.__PVT__r8__DOT__x3_rc = (vlSelfRef.__PVT__r7__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r8__DOT__x0_rc = (vlSelfRef.__PVT__r7__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r8__DOT__x1_rc = (vlSelfRef.__PVT__r7__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r7__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[7U] = vlSelfRef.__PVT__r8__DOT__x3_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r8__DOT__x3_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[7U] = vlSelfRef.__PVT__r8__DOT__x0_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r8__DOT__x0_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[7U] = vlSelfRef.__PVT__r8__DOT__x1_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.__Vcellout__r7__x2_o 
                      ^ vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__j = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__h = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x3_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r8__DOT__f = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x1_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r9__DOT__x4_rc = (vlSelfRef.__PVT__r8__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r8__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r8__x2_o = ((~ vlSelfRef.__PVT__r8__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r8__DOT__x3_s = ((vlSelfRef.__PVT__r8__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__h);
    vlSelfRef.__PVT__r8__DOT__x0_s = (vlSelfRef.__PVT__r8__DOT__f 
                                      ^ vlSelfRef.__PVT__r8__DOT__j);
    vlSelfRef.__PVT__r8__DOT__x1_s = ((vlSelfRef.__PVT__r8__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r8__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__f);
    vlSelfRef.__PVT__x4_round[8U] = vlSelfRef.__PVT__r9__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[8U] = vlSelfRef.__Vcellout__r8__x2_o;
    vlSelfRef.__PVT__r9__DOT__x3_rc = (vlSelfRef.__PVT__r8__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r9__DOT__x0_rc = (vlSelfRef.__PVT__r8__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r9__DOT__x1_rc = (vlSelfRef.__PVT__r8__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r8__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[8U] = vlSelfRef.__PVT__r9__DOT__x3_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r9__DOT__x3_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[8U] = vlSelfRef.__PVT__r9__DOT__x0_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r9__DOT__x0_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[8U] = vlSelfRef.__PVT__r9__DOT__x1_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.__Vcellout__r8__x2_o 
                      ^ vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__j = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__h = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x3_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r9__DOT__f = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x1_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r10__DOT__x4_rc = (vlSelfRef.__PVT__r9__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r9__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r9__x2_o = ((~ vlSelfRef.__PVT__r9__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r9__DOT__x3_s = ((vlSelfRef.__PVT__r9__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__h);
    vlSelfRef.__PVT__r9__DOT__x0_s = (vlSelfRef.__PVT__r9__DOT__f 
                                      ^ vlSelfRef.__PVT__r9__DOT__j);
    vlSelfRef.__PVT__r9__DOT__x1_s = ((vlSelfRef.__PVT__r9__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r9__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__f);
    vlSelfRef.__PVT__x4_round[9U] = vlSelfRef.__PVT__r10__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[9U] = vlSelfRef.__Vcellout__r9__x2_o;
    vlSelfRef.__PVT__r10__DOT__x3_rc = (vlSelfRef.__PVT__r9__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r10__DOT__x0_rc = (vlSelfRef.__PVT__r9__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r10__DOT__x1_rc = (vlSelfRef.__PVT__r9__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r9__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[9U] = vlSelfRef.__PVT__r10__DOT__x3_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r10__DOT__x3_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[9U] = vlSelfRef.__PVT__r10__DOT__x0_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r10__DOT__x0_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[9U] = vlSelfRef.__PVT__r10__DOT__x1_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.__Vcellout__r9__x2_o 
                      ^ vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__j = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__h = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x3_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r10__DOT__f = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x1_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x4_rc = (vlSelfRef.__PVT__r10__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r10__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r10__x2_o = ((~ vlSelfRef.__PVT__r10__DOT__h) 
                                       ^ ((((QData)((IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                            << 0x3fU) 
                                           | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.__PVT__r10__DOT__h 
                                                  >> 1U)))) 
                                          ^ (((QData)((IData)(
                                                              (0x3fU 
                                                               & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                              << 0x3aU) 
                                             | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.__PVT__r10__DOT__h 
                                                    >> 6U))))));
    vlSelfRef.__PVT__r10__DOT__x3_s = ((vlSelfRef.__PVT__r10__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__h);
    vlSelfRef.__PVT__r10__DOT__x0_s = (vlSelfRef.__PVT__r10__DOT__f 
                                       ^ vlSelfRef.__PVT__r10__DOT__j);
    vlSelfRef.__PVT__r10__DOT__x1_s = ((vlSelfRef.__PVT__r10__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r10__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__f);
    vlSelfRef.__PVT__x4_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[0xaU] = vlSelfRef.__Vcellout__r10__x2_o;
    vlSelfRef.__PVT__r11__DOT__x3_rc = (vlSelfRef.__PVT__r10__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r11__DOT__x0_rc = (vlSelfRef.__PVT__r10__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r11__DOT__x1_rc = (vlSelfRef.__PVT__r10__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r10__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x3_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r11__DOT__x3_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x0_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r11__DOT__x0_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x1_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.__Vcellout__r10__x2_o 
                      ^ vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__j = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__h = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x3_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r11__DOT__f = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x1_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x3_s = ((vlSelfRef.__PVT__r11__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__h);
    vlSelfRef.__PVT__r11__DOT__x0_s = (vlSelfRef.__PVT__r11__DOT__f 
                                       ^ vlSelfRef.__PVT__r11__DOT__j);
    vlSelfRef.__PVT__r11__DOT__x1_s = ((vlSelfRef.__PVT__r11__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r11__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__f);
}

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM);
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s0 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM);
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xf0ULL ^ (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM 
                      ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1));
    vlSelfRef.__PVT__r0__DOT__j = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1));
    vlSelfRef.__PVT__r0__DOT__h = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r0__DOT__f = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r1__DOT__x4_rc = (vlSelfRef.__PVT__r0__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r0__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r0__x2_o = ((~ vlSelfRef.__PVT__r0__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r0__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r0__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r0__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r0__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r0__DOT__x3_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__h);
    vlSelfRef.__PVT__r0__DOT__x0_s = (vlSelfRef.__PVT__r0__DOT__f 
                                      ^ vlSelfRef.__PVT__r0__DOT__j);
    vlSelfRef.__PVT__r0__DOT__x1_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__f);
    vlSelfRef.__PVT__x4_round[0U] = vlSelfRef.__PVT__r1__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[0U] = vlSelfRef.__Vcellout__r0__x2_o;
    vlSelfRef.__PVT__r1__DOT__x3_rc = (vlSelfRef.__PVT__r0__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r1__DOT__x0_rc = (vlSelfRef.__PVT__r0__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r1__DOT__x1_rc = (vlSelfRef.__PVT__r0__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r0__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[0U] = vlSelfRef.__PVT__r1__DOT__x3_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r1__DOT__x3_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0U] = vlSelfRef.__PVT__r1__DOT__x0_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r1__DOT__x0_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[0U] = vlSelfRef.__PVT__r1__DOT__x1_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xe1ULL ^ (vlSelfRef.__Vcellout__r0__x2_o 
                      ^ vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__r1__DOT__j = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__r1__DOT__h = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x3_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r1__DOT__f = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x1_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r2__DOT__x4_rc = (vlSelfRef.__PVT__r1__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r1__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r1__x2_o = ((~ vlSelfRef.__PVT__r1__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r1__DOT__x3_s = ((vlSelfRef.__PVT__r1__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__h);
    vlSelfRef.__PVT__r1__DOT__x0_s = (vlSelfRef.__PVT__r1__DOT__f 
                                      ^ vlSelfRef.__PVT__r1__DOT__j);
    vlSelfRef.__PVT__r1__DOT__x1_s = ((vlSelfRef.__PVT__r1__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r1__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__f);
    vlSelfRef.__PVT__x4_round[1U] = vlSelfRef.__PVT__r2__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[1U] = vlSelfRef.__Vcellout__r1__x2_o;
    vlSelfRef.__PVT__r2__DOT__x3_rc = (vlSelfRef.__PVT__r1__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r2__DOT__x0_rc = (vlSelfRef.__PVT__r1__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r2__DOT__x1_rc = (vlSelfRef.__PVT__r1__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r1__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[1U] = vlSelfRef.__PVT__r2__DOT__x3_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r2__DOT__x3_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[1U] = vlSelfRef.__PVT__r2__DOT__x0_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r2__DOT__x0_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[1U] = vlSelfRef.__PVT__r2__DOT__x1_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xd2ULL ^ (vlSelfRef.__Vcellout__r1__x2_o 
                      ^ vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__j = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__h = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x3_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r2__DOT__f = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x1_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r3__DOT__x4_rc = (vlSelfRef.__PVT__r2__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r2__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r2__x2_o = ((~ vlSelfRef.__PVT__r2__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r2__DOT__x3_s = ((vlSelfRef.__PVT__r2__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__h);
    vlSelfRef.__PVT__r2__DOT__x0_s = (vlSelfRef.__PVT__r2__DOT__f 
                                      ^ vlSelfRef.__PVT__r2__DOT__j);
    vlSelfRef.__PVT__r2__DOT__x1_s = ((vlSelfRef.__PVT__r2__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r2__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__f);
    vlSelfRef.__PVT__x4_round[2U] = vlSelfRef.__PVT__r3__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[2U] = vlSelfRef.__Vcellout__r2__x2_o;
    vlSelfRef.__PVT__r3__DOT__x3_rc = (vlSelfRef.__PVT__r2__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r3__DOT__x0_rc = (vlSelfRef.__PVT__r2__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r3__DOT__x1_rc = (vlSelfRef.__PVT__r2__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r2__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[2U] = vlSelfRef.__PVT__r3__DOT__x3_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r3__DOT__x3_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[2U] = vlSelfRef.__PVT__r3__DOT__x0_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r3__DOT__x0_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[2U] = vlSelfRef.__PVT__r3__DOT__x1_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xc3ULL ^ (vlSelfRef.__Vcellout__r2__x2_o 
                      ^ vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__j = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__h = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x3_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r3__DOT__f = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x1_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r4__DOT__x4_rc = (vlSelfRef.__PVT__r3__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r3__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r3__x2_o = ((~ vlSelfRef.__PVT__r3__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r3__DOT__x3_s = ((vlSelfRef.__PVT__r3__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__h);
    vlSelfRef.__PVT__r3__DOT__x0_s = (vlSelfRef.__PVT__r3__DOT__f 
                                      ^ vlSelfRef.__PVT__r3__DOT__j);
    vlSelfRef.__PVT__r3__DOT__x1_s = ((vlSelfRef.__PVT__r3__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r3__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__f);
    vlSelfRef.__PVT__x4_round[3U] = vlSelfRef.__PVT__r4__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[3U] = vlSelfRef.__Vcellout__r3__x2_o;
    vlSelfRef.__PVT__r4__DOT__x3_rc = (vlSelfRef.__PVT__r3__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r4__DOT__x0_rc = (vlSelfRef.__PVT__r3__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r4__DOT__x1_rc = (vlSelfRef.__PVT__r3__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r3__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[3U] = vlSelfRef.__PVT__r4__DOT__x3_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r4__DOT__x3_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[3U] = vlSelfRef.__PVT__r4__DOT__x0_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r4__DOT__x0_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[3U] = vlSelfRef.__PVT__r4__DOT__x1_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.__Vcellout__r3__x2_o 
                      ^ vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__j = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__h = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x3_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r4__DOT__f = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x1_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r5__DOT__x4_rc = (vlSelfRef.__PVT__r4__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r4__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r4__x2_o = ((~ vlSelfRef.__PVT__r4__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r4__DOT__x3_s = ((vlSelfRef.__PVT__r4__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__h);
    vlSelfRef.__PVT__r4__DOT__x0_s = (vlSelfRef.__PVT__r4__DOT__f 
                                      ^ vlSelfRef.__PVT__r4__DOT__j);
    vlSelfRef.__PVT__r4__DOT__x1_s = ((vlSelfRef.__PVT__r4__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r4__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__f);
    vlSelfRef.__PVT__x4_round[4U] = vlSelfRef.__PVT__r5__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[4U] = vlSelfRef.__Vcellout__r4__x2_o;
    vlSelfRef.__PVT__r5__DOT__x3_rc = (vlSelfRef.__PVT__r4__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r5__DOT__x0_rc = (vlSelfRef.__PVT__r4__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r5__DOT__x1_rc = (vlSelfRef.__PVT__r4__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r4__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[4U] = vlSelfRef.__PVT__r5__DOT__x3_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r5__DOT__x3_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[4U] = vlSelfRef.__PVT__r5__DOT__x0_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r5__DOT__x0_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[4U] = vlSelfRef.__PVT__r5__DOT__x1_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.__Vcellout__r4__x2_o 
                      ^ vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__j = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__h = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x3_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r5__DOT__f = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x1_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r6__DOT__x4_rc = (vlSelfRef.__PVT__r5__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r5__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r5__x2_o = ((~ vlSelfRef.__PVT__r5__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r5__DOT__x3_s = ((vlSelfRef.__PVT__r5__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__h);
    vlSelfRef.__PVT__r5__DOT__x0_s = (vlSelfRef.__PVT__r5__DOT__f 
                                      ^ vlSelfRef.__PVT__r5__DOT__j);
    vlSelfRef.__PVT__r5__DOT__x1_s = ((vlSelfRef.__PVT__r5__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r5__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__f);
    vlSelfRef.__PVT__x4_round[5U] = vlSelfRef.__PVT__r6__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[5U] = vlSelfRef.__Vcellout__r5__x2_o;
    vlSelfRef.__PVT__r6__DOT__x3_rc = (vlSelfRef.__PVT__r5__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r6__DOT__x0_rc = (vlSelfRef.__PVT__r5__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r6__DOT__x1_rc = (vlSelfRef.__PVT__r5__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r5__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[5U] = vlSelfRef.__PVT__r6__DOT__x3_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r6__DOT__x3_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[5U] = vlSelfRef.__PVT__r6__DOT__x0_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r6__DOT__x0_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[5U] = vlSelfRef.__PVT__r6__DOT__x1_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.__Vcellout__r5__x2_o 
                      ^ vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__j = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__h = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x3_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r6__DOT__f = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x1_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r7__DOT__x4_rc = (vlSelfRef.__PVT__r6__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r6__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r6__x2_o = ((~ vlSelfRef.__PVT__r6__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r6__DOT__x3_s = ((vlSelfRef.__PVT__r6__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__h);
    vlSelfRef.__PVT__r6__DOT__x0_s = (vlSelfRef.__PVT__r6__DOT__f 
                                      ^ vlSelfRef.__PVT__r6__DOT__j);
    vlSelfRef.__PVT__r6__DOT__x1_s = ((vlSelfRef.__PVT__r6__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r6__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__f);
    vlSelfRef.__PVT__x4_round[6U] = vlSelfRef.__PVT__r7__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[6U] = vlSelfRef.__Vcellout__r6__x2_o;
    vlSelfRef.__PVT__r7__DOT__x3_rc = (vlSelfRef.__PVT__r6__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r7__DOT__x0_rc = (vlSelfRef.__PVT__r6__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r7__DOT__x1_rc = (vlSelfRef.__PVT__r6__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r6__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[6U] = vlSelfRef.__PVT__r7__DOT__x3_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r7__DOT__x3_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[6U] = vlSelfRef.__PVT__r7__DOT__x0_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r7__DOT__x0_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[6U] = vlSelfRef.__PVT__r7__DOT__x1_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.__Vcellout__r6__x2_o 
                      ^ vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__j = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__h = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x3_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r7__DOT__f = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x1_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r8__DOT__x4_rc = (vlSelfRef.__PVT__r7__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r7__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r7__x2_o = ((~ vlSelfRef.__PVT__r7__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r7__DOT__x3_s = ((vlSelfRef.__PVT__r7__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__h);
    vlSelfRef.__PVT__r7__DOT__x0_s = (vlSelfRef.__PVT__r7__DOT__f 
                                      ^ vlSelfRef.__PVT__r7__DOT__j);
    vlSelfRef.__PVT__r7__DOT__x1_s = ((vlSelfRef.__PVT__r7__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r7__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__f);
    vlSelfRef.__PVT__x4_round[7U] = vlSelfRef.__PVT__r8__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[7U] = vlSelfRef.__Vcellout__r7__x2_o;
    vlSelfRef.__PVT__r8__DOT__x3_rc = (vlSelfRef.__PVT__r7__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r8__DOT__x0_rc = (vlSelfRef.__PVT__r7__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r8__DOT__x1_rc = (vlSelfRef.__PVT__r7__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r7__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[7U] = vlSelfRef.__PVT__r8__DOT__x3_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r8__DOT__x3_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[7U] = vlSelfRef.__PVT__r8__DOT__x0_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r8__DOT__x0_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[7U] = vlSelfRef.__PVT__r8__DOT__x1_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.__Vcellout__r7__x2_o 
                      ^ vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__j = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__h = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x3_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r8__DOT__f = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x1_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r9__DOT__x4_rc = (vlSelfRef.__PVT__r8__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r8__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r8__x2_o = ((~ vlSelfRef.__PVT__r8__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r8__DOT__x3_s = ((vlSelfRef.__PVT__r8__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__h);
    vlSelfRef.__PVT__r8__DOT__x0_s = (vlSelfRef.__PVT__r8__DOT__f 
                                      ^ vlSelfRef.__PVT__r8__DOT__j);
    vlSelfRef.__PVT__r8__DOT__x1_s = ((vlSelfRef.__PVT__r8__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r8__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__f);
    vlSelfRef.__PVT__x4_round[8U] = vlSelfRef.__PVT__r9__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[8U] = vlSelfRef.__Vcellout__r8__x2_o;
    vlSelfRef.__PVT__r9__DOT__x3_rc = (vlSelfRef.__PVT__r8__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r9__DOT__x0_rc = (vlSelfRef.__PVT__r8__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r9__DOT__x1_rc = (vlSelfRef.__PVT__r8__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r8__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[8U] = vlSelfRef.__PVT__r9__DOT__x3_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r9__DOT__x3_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[8U] = vlSelfRef.__PVT__r9__DOT__x0_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r9__DOT__x0_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[8U] = vlSelfRef.__PVT__r9__DOT__x1_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.__Vcellout__r8__x2_o 
                      ^ vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__j = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__h = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x3_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r9__DOT__f = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x1_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r10__DOT__x4_rc = (vlSelfRef.__PVT__r9__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r9__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r9__x2_o = ((~ vlSelfRef.__PVT__r9__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r9__DOT__x3_s = ((vlSelfRef.__PVT__r9__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__h);
    vlSelfRef.__PVT__r9__DOT__x0_s = (vlSelfRef.__PVT__r9__DOT__f 
                                      ^ vlSelfRef.__PVT__r9__DOT__j);
    vlSelfRef.__PVT__r9__DOT__x1_s = ((vlSelfRef.__PVT__r9__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r9__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__f);
    vlSelfRef.__PVT__x4_round[9U] = vlSelfRef.__PVT__r10__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[9U] = vlSelfRef.__Vcellout__r9__x2_o;
    vlSelfRef.__PVT__r10__DOT__x3_rc = (vlSelfRef.__PVT__r9__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r10__DOT__x0_rc = (vlSelfRef.__PVT__r9__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r10__DOT__x1_rc = (vlSelfRef.__PVT__r9__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r9__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[9U] = vlSelfRef.__PVT__r10__DOT__x3_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r10__DOT__x3_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[9U] = vlSelfRef.__PVT__r10__DOT__x0_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r10__DOT__x0_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[9U] = vlSelfRef.__PVT__r10__DOT__x1_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.__Vcellout__r9__x2_o 
                      ^ vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__j = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__h = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x3_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r10__DOT__f = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x1_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x4_rc = (vlSelfRef.__PVT__r10__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r10__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r10__x2_o = ((~ vlSelfRef.__PVT__r10__DOT__h) 
                                       ^ ((((QData)((IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                            << 0x3fU) 
                                           | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.__PVT__r10__DOT__h 
                                                  >> 1U)))) 
                                          ^ (((QData)((IData)(
                                                              (0x3fU 
                                                               & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                              << 0x3aU) 
                                             | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.__PVT__r10__DOT__h 
                                                    >> 6U))))));
    vlSelfRef.__PVT__r10__DOT__x3_s = ((vlSelfRef.__PVT__r10__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__h);
    vlSelfRef.__PVT__r10__DOT__x0_s = (vlSelfRef.__PVT__r10__DOT__f 
                                       ^ vlSelfRef.__PVT__r10__DOT__j);
    vlSelfRef.__PVT__r10__DOT__x1_s = ((vlSelfRef.__PVT__r10__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r10__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__f);
    vlSelfRef.__PVT__x4_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[0xaU] = vlSelfRef.__Vcellout__r10__x2_o;
    vlSelfRef.__PVT__r11__DOT__x3_rc = (vlSelfRef.__PVT__r10__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r11__DOT__x0_rc = (vlSelfRef.__PVT__r10__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r11__DOT__x1_rc = (vlSelfRef.__PVT__r10__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r10__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x3_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r11__DOT__x3_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x0_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r11__DOT__x0_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x1_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.__Vcellout__r10__x2_o 
                      ^ vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__f = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x1_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1));
}

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x0_i_final 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x4_i_final);
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xf0ULL ^ ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x2_i_final 
                       ^ (((QData)((IData)(vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__key[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__key[2U])))) 
                      ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x1_i_final));
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x4_i_final);
    vlSelfRef.__PVT__r0__DOT__f = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x1_i_final) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r0__DOT__h = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r0__DOT__j = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x1_i_final));
    vlSelfRef.__PVT__r0__DOT__x1_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x1_i_final 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__f);
    vlSelfRef.__Vcellout__r0__x2_o = ((~ vlSelfRef.__PVT__r0__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r0__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r0__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r0__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r0__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r0__DOT__x3_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__h);
    vlSelfRef.__PVT__r0__DOT__x0_s = (vlSelfRef.__PVT__r0__DOT__f 
                                      ^ vlSelfRef.__PVT__r0__DOT__j);
    vlSelfRef.__PVT__r1__DOT__x4_rc = (vlSelfRef.__PVT__r0__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r0__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__PVT__r1__DOT__x1_rc = (vlSelfRef.__PVT__r0__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r0__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x2_round[0U] = vlSelfRef.__Vcellout__r0__x2_o;
    vlSelfRef.__PVT__r1__DOT__x3_rc = (vlSelfRef.__PVT__r0__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r1__DOT__x0_rc = (vlSelfRef.__PVT__r0__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__x4_round[0U] = vlSelfRef.__PVT__r1__DOT__x4_rc;
    vlSelfRef.__PVT__x1_round[0U] = vlSelfRef.__PVT__r1__DOT__x1_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xe1ULL ^ (vlSelfRef.__Vcellout__r0__x2_o 
                      ^ vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__x3_round[0U] = vlSelfRef.__PVT__r1__DOT__x3_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r1__DOT__x3_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0U] = vlSelfRef.__PVT__r1__DOT__x0_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r1__DOT__x0_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__r1__DOT__h = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x3_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r1__DOT__j = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__r1__DOT__f = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x1_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__Vcellout__r1__x2_o = ((~ vlSelfRef.__PVT__r1__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r1__DOT__x3_s = ((vlSelfRef.__PVT__r1__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__h);
    vlSelfRef.__PVT__r2__DOT__x4_rc = (vlSelfRef.__PVT__r1__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r1__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__PVT__r1__DOT__x0_s = (vlSelfRef.__PVT__r1__DOT__f 
                                      ^ vlSelfRef.__PVT__r1__DOT__j);
    vlSelfRef.__PVT__r1__DOT__x1_s = ((vlSelfRef.__PVT__r1__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r1__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__f);
    vlSelfRef.__PVT__x2_round[1U] = vlSelfRef.__Vcellout__r1__x2_o;
    vlSelfRef.__PVT__r2__DOT__x3_rc = (vlSelfRef.__PVT__r1__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__x4_round[1U] = vlSelfRef.__PVT__r2__DOT__x4_rc;
    vlSelfRef.__PVT__r2__DOT__x0_rc = (vlSelfRef.__PVT__r1__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r2__DOT__x1_rc = (vlSelfRef.__PVT__r1__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r1__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[1U] = vlSelfRef.__PVT__r2__DOT__x3_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r2__DOT__x3_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[1U] = vlSelfRef.__PVT__r2__DOT__x0_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r2__DOT__x0_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[1U] = vlSelfRef.__PVT__r2__DOT__x1_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xd2ULL ^ (vlSelfRef.__Vcellout__r1__x2_o 
                      ^ vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__j = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__h = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x3_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r2__DOT__f = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x1_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r3__DOT__x4_rc = (vlSelfRef.__PVT__r2__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r2__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r2__x2_o = ((~ vlSelfRef.__PVT__r2__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r2__DOT__x3_s = ((vlSelfRef.__PVT__r2__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__h);
    vlSelfRef.__PVT__r2__DOT__x0_s = (vlSelfRef.__PVT__r2__DOT__f 
                                      ^ vlSelfRef.__PVT__r2__DOT__j);
    vlSelfRef.__PVT__r2__DOT__x1_s = ((vlSelfRef.__PVT__r2__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r2__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__f);
    vlSelfRef.__PVT__x4_round[2U] = vlSelfRef.__PVT__r3__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[2U] = vlSelfRef.__Vcellout__r2__x2_o;
    vlSelfRef.__PVT__r3__DOT__x3_rc = (vlSelfRef.__PVT__r2__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r3__DOT__x0_rc = (vlSelfRef.__PVT__r2__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r3__DOT__x1_rc = (vlSelfRef.__PVT__r2__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r2__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[2U] = vlSelfRef.__PVT__r3__DOT__x3_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r3__DOT__x3_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[2U] = vlSelfRef.__PVT__r3__DOT__x0_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r3__DOT__x0_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[2U] = vlSelfRef.__PVT__r3__DOT__x1_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xc3ULL ^ (vlSelfRef.__Vcellout__r2__x2_o 
                      ^ vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__j = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__h = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x3_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r3__DOT__f = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x1_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r4__DOT__x4_rc = (vlSelfRef.__PVT__r3__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r3__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r3__x2_o = ((~ vlSelfRef.__PVT__r3__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r3__DOT__x3_s = ((vlSelfRef.__PVT__r3__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__h);
    vlSelfRef.__PVT__r3__DOT__x0_s = (vlSelfRef.__PVT__r3__DOT__f 
                                      ^ vlSelfRef.__PVT__r3__DOT__j);
    vlSelfRef.__PVT__r3__DOT__x1_s = ((vlSelfRef.__PVT__r3__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r3__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__f);
    vlSelfRef.__PVT__x4_round[3U] = vlSelfRef.__PVT__r4__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[3U] = vlSelfRef.__Vcellout__r3__x2_o;
    vlSelfRef.__PVT__r4__DOT__x3_rc = (vlSelfRef.__PVT__r3__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r4__DOT__x0_rc = (vlSelfRef.__PVT__r3__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r4__DOT__x1_rc = (vlSelfRef.__PVT__r3__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r3__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[3U] = vlSelfRef.__PVT__r4__DOT__x3_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r4__DOT__x3_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[3U] = vlSelfRef.__PVT__r4__DOT__x0_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r4__DOT__x0_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[3U] = vlSelfRef.__PVT__r4__DOT__x1_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.__Vcellout__r3__x2_o 
                      ^ vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__j = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__h = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x3_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r4__DOT__f = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x1_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r5__DOT__x4_rc = (vlSelfRef.__PVT__r4__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r4__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r4__x2_o = ((~ vlSelfRef.__PVT__r4__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r4__DOT__x3_s = ((vlSelfRef.__PVT__r4__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__h);
    vlSelfRef.__PVT__r4__DOT__x0_s = (vlSelfRef.__PVT__r4__DOT__f 
                                      ^ vlSelfRef.__PVT__r4__DOT__j);
    vlSelfRef.__PVT__r4__DOT__x1_s = ((vlSelfRef.__PVT__r4__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r4__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__f);
    vlSelfRef.__PVT__x4_round[4U] = vlSelfRef.__PVT__r5__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[4U] = vlSelfRef.__Vcellout__r4__x2_o;
    vlSelfRef.__PVT__r5__DOT__x3_rc = (vlSelfRef.__PVT__r4__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r5__DOT__x0_rc = (vlSelfRef.__PVT__r4__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r5__DOT__x1_rc = (vlSelfRef.__PVT__r4__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r4__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[4U] = vlSelfRef.__PVT__r5__DOT__x3_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r5__DOT__x3_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[4U] = vlSelfRef.__PVT__r5__DOT__x0_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r5__DOT__x0_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[4U] = vlSelfRef.__PVT__r5__DOT__x1_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.__Vcellout__r4__x2_o 
                      ^ vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__j = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__h = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x3_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r5__DOT__f = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x1_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r6__DOT__x4_rc = (vlSelfRef.__PVT__r5__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r5__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r5__x2_o = ((~ vlSelfRef.__PVT__r5__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r5__DOT__x3_s = ((vlSelfRef.__PVT__r5__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__h);
    vlSelfRef.__PVT__r5__DOT__x0_s = (vlSelfRef.__PVT__r5__DOT__f 
                                      ^ vlSelfRef.__PVT__r5__DOT__j);
    vlSelfRef.__PVT__r5__DOT__x1_s = ((vlSelfRef.__PVT__r5__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r5__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__f);
    vlSelfRef.__PVT__x4_round[5U] = vlSelfRef.__PVT__r6__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[5U] = vlSelfRef.__Vcellout__r5__x2_o;
    vlSelfRef.__PVT__r6__DOT__x3_rc = (vlSelfRef.__PVT__r5__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r6__DOT__x0_rc = (vlSelfRef.__PVT__r5__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r6__DOT__x1_rc = (vlSelfRef.__PVT__r5__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r5__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[5U] = vlSelfRef.__PVT__r6__DOT__x3_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r6__DOT__x3_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[5U] = vlSelfRef.__PVT__r6__DOT__x0_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r6__DOT__x0_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[5U] = vlSelfRef.__PVT__r6__DOT__x1_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.__Vcellout__r5__x2_o 
                      ^ vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__j = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__h = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x3_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r6__DOT__f = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x1_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r7__DOT__x4_rc = (vlSelfRef.__PVT__r6__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r6__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r6__x2_o = ((~ vlSelfRef.__PVT__r6__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r6__DOT__x3_s = ((vlSelfRef.__PVT__r6__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__h);
    vlSelfRef.__PVT__r6__DOT__x0_s = (vlSelfRef.__PVT__r6__DOT__f 
                                      ^ vlSelfRef.__PVT__r6__DOT__j);
    vlSelfRef.__PVT__r6__DOT__x1_s = ((vlSelfRef.__PVT__r6__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r6__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__f);
    vlSelfRef.__PVT__x4_round[6U] = vlSelfRef.__PVT__r7__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[6U] = vlSelfRef.__Vcellout__r6__x2_o;
    vlSelfRef.__PVT__r7__DOT__x3_rc = (vlSelfRef.__PVT__r6__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r7__DOT__x0_rc = (vlSelfRef.__PVT__r6__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r7__DOT__x1_rc = (vlSelfRef.__PVT__r6__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r6__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[6U] = vlSelfRef.__PVT__r7__DOT__x3_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r7__DOT__x3_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[6U] = vlSelfRef.__PVT__r7__DOT__x0_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r7__DOT__x0_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[6U] = vlSelfRef.__PVT__r7__DOT__x1_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.__Vcellout__r6__x2_o 
                      ^ vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__j = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__h = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x3_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r7__DOT__f = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x1_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r8__DOT__x4_rc = (vlSelfRef.__PVT__r7__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r7__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r7__x2_o = ((~ vlSelfRef.__PVT__r7__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r7__DOT__x3_s = ((vlSelfRef.__PVT__r7__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__h);
    vlSelfRef.__PVT__r7__DOT__x0_s = (vlSelfRef.__PVT__r7__DOT__f 
                                      ^ vlSelfRef.__PVT__r7__DOT__j);
    vlSelfRef.__PVT__r7__DOT__x1_s = ((vlSelfRef.__PVT__r7__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r7__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__f);
    vlSelfRef.__PVT__x4_round[7U] = vlSelfRef.__PVT__r8__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[7U] = vlSelfRef.__Vcellout__r7__x2_o;
    vlSelfRef.__PVT__r8__DOT__x3_rc = (vlSelfRef.__PVT__r7__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r8__DOT__x0_rc = (vlSelfRef.__PVT__r7__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r8__DOT__x1_rc = (vlSelfRef.__PVT__r7__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r7__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[7U] = vlSelfRef.__PVT__r8__DOT__x3_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r8__DOT__x3_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[7U] = vlSelfRef.__PVT__r8__DOT__x0_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r8__DOT__x0_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[7U] = vlSelfRef.__PVT__r8__DOT__x1_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.__Vcellout__r7__x2_o 
                      ^ vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__j = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__h = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x3_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r8__DOT__f = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x1_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r9__DOT__x4_rc = (vlSelfRef.__PVT__r8__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r8__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r8__x2_o = ((~ vlSelfRef.__PVT__r8__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r8__DOT__x3_s = ((vlSelfRef.__PVT__r8__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__h);
    vlSelfRef.__PVT__r8__DOT__x0_s = (vlSelfRef.__PVT__r8__DOT__f 
                                      ^ vlSelfRef.__PVT__r8__DOT__j);
    vlSelfRef.__PVT__r8__DOT__x1_s = ((vlSelfRef.__PVT__r8__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r8__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__f);
    vlSelfRef.__PVT__x4_round[8U] = vlSelfRef.__PVT__r9__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[8U] = vlSelfRef.__Vcellout__r8__x2_o;
    vlSelfRef.__PVT__r9__DOT__x3_rc = (vlSelfRef.__PVT__r8__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r9__DOT__x0_rc = (vlSelfRef.__PVT__r8__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r9__DOT__x1_rc = (vlSelfRef.__PVT__r8__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r8__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[8U] = vlSelfRef.__PVT__r9__DOT__x3_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r9__DOT__x3_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[8U] = vlSelfRef.__PVT__r9__DOT__x0_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r9__DOT__x0_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[8U] = vlSelfRef.__PVT__r9__DOT__x1_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.__Vcellout__r8__x2_o 
                      ^ vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__j = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__h = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x3_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r9__DOT__f = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x1_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r10__DOT__x4_rc = (vlSelfRef.__PVT__r9__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r9__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r9__x2_o = ((~ vlSelfRef.__PVT__r9__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r9__DOT__x3_s = ((vlSelfRef.__PVT__r9__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__h);
    vlSelfRef.__PVT__r9__DOT__x0_s = (vlSelfRef.__PVT__r9__DOT__f 
                                      ^ vlSelfRef.__PVT__r9__DOT__j);
    vlSelfRef.__PVT__r9__DOT__x1_s = ((vlSelfRef.__PVT__r9__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r9__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__f);
    vlSelfRef.__PVT__x4_round[9U] = vlSelfRef.__PVT__r10__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[9U] = vlSelfRef.__Vcellout__r9__x2_o;
    vlSelfRef.__PVT__r10__DOT__x3_rc = (vlSelfRef.__PVT__r9__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r10__DOT__x0_rc = (vlSelfRef.__PVT__r9__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r10__DOT__x1_rc = (vlSelfRef.__PVT__r9__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r9__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[9U] = vlSelfRef.__PVT__r10__DOT__x3_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r10__DOT__x3_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[9U] = vlSelfRef.__PVT__r10__DOT__x0_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r10__DOT__x0_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[9U] = vlSelfRef.__PVT__r10__DOT__x1_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.__Vcellout__r9__x2_o 
                      ^ vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__j = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__h = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x3_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r10__DOT__f = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x1_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x4_rc = (vlSelfRef.__PVT__r10__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r10__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r10__x2_o = ((~ vlSelfRef.__PVT__r10__DOT__h) 
                                       ^ ((((QData)((IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                            << 0x3fU) 
                                           | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.__PVT__r10__DOT__h 
                                                  >> 1U)))) 
                                          ^ (((QData)((IData)(
                                                              (0x3fU 
                                                               & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                              << 0x3aU) 
                                             | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.__PVT__r10__DOT__h 
                                                    >> 6U))))));
    vlSelfRef.__PVT__r10__DOT__x3_s = ((vlSelfRef.__PVT__r10__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__h);
    vlSelfRef.__PVT__r10__DOT__x0_s = (vlSelfRef.__PVT__r10__DOT__f 
                                       ^ vlSelfRef.__PVT__r10__DOT__j);
    vlSelfRef.__PVT__r10__DOT__x1_s = ((vlSelfRef.__PVT__r10__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r10__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__f);
    vlSelfRef.__PVT__x4_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[0xaU] = vlSelfRef.__Vcellout__r10__x2_o;
    vlSelfRef.__PVT__r11__DOT__x3_rc = (vlSelfRef.__PVT__r10__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r11__DOT__x0_rc = (vlSelfRef.__PVT__r10__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r11__DOT__x1_rc = (vlSelfRef.__PVT__r10__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r10__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x3_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r11__DOT__x3_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x0_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r11__DOT__x0_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x1_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.__Vcellout__r10__x2_o 
                      ^ vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__j = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__h = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x3_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r11__DOT__f = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x1_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x3_s = ((vlSelfRef.__PVT__r11__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__h);
    vlSelfRef.__PVT__r11__DOT__x0_s = (vlSelfRef.__PVT__r11__DOT__f 
                                       ^ vlSelfRef.__PVT__r11__DOT__j);
    vlSelfRef.__PVT__r11__DOT__x1_s = ((vlSelfRef.__PVT__r11__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r11__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__f);
}

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x0_i_final 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x4_i_final);
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xf0ULL ^ ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x2_i_final 
                       ^ (((QData)((IData)(vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__key[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__key[2U])))) 
                      ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x1_i_final));
    vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3 
           ^ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x4_i_final);
    vlSelfRef.__PVT__r0__DOT__f = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x1_i_final) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r0__DOT__h = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3) 
                                      & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r0__DOT__j = (vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x1_i_final));
    vlSelfRef.__PVT__r0__DOT__x1_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__x1_i_final 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__f);
    vlSelfRef.__Vcellout__r0__x2_o = ((~ vlSelfRef.__PVT__r0__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r0__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r0__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r0__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r0__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r0__DOT__x3_s = ((vlSymsp->TOP.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3 
                                       ^ ((~ vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r0__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r0__DOT__h);
    vlSelfRef.__PVT__r0__DOT__x0_s = (vlSelfRef.__PVT__r0__DOT__f 
                                      ^ vlSelfRef.__PVT__r0__DOT__j);
    vlSelfRef.__PVT__r1__DOT__x4_rc = (vlSelfRef.__PVT__r0__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r0__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__PVT__r1__DOT__x1_rc = (vlSelfRef.__PVT__r0__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r0__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r0__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x2_round[0U] = vlSelfRef.__Vcellout__r0__x2_o;
    vlSelfRef.__PVT__r1__DOT__x3_rc = (vlSelfRef.__PVT__r0__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r0__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r1__DOT__x0_rc = (vlSelfRef.__PVT__r0__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r0__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r0__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__x4_round[0U] = vlSelfRef.__PVT__r1__DOT__x4_rc;
    vlSelfRef.__PVT__x1_round[0U] = vlSelfRef.__PVT__r1__DOT__x1_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xe1ULL ^ (vlSelfRef.__Vcellout__r0__x2_o 
                      ^ vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__x3_round[0U] = vlSelfRef.__PVT__r1__DOT__x3_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r1__DOT__x3_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0U] = vlSelfRef.__PVT__r1__DOT__x0_rc;
    vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r1__DOT__x0_rc ^ vlSelfRef.__PVT__r1__DOT__x4_rc);
    vlSelfRef.__PVT__r1__DOT__h = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x3_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r1__DOT__j = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r1__DOT__x1_rc));
    vlSelfRef.__PVT__r1__DOT__f = (vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r1__DOT__x1_rc) 
                                      & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__Vcellout__r1__x2_o = ((~ vlSelfRef.__PVT__r1__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r1__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r1__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r1__DOT__x3_s = ((vlSelfRef.__PVT__r1__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__h);
    vlSelfRef.__PVT__r2__DOT__x4_rc = (vlSelfRef.__PVT__r1__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r1__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__PVT__r1__DOT__x0_s = (vlSelfRef.__PVT__r1__DOT__f 
                                      ^ vlSelfRef.__PVT__r1__DOT__j);
    vlSelfRef.__PVT__r1__DOT__x1_s = ((vlSelfRef.__PVT__r1__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r1__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r1__DOT__f);
    vlSelfRef.__PVT__x2_round[1U] = vlSelfRef.__Vcellout__r1__x2_o;
    vlSelfRef.__PVT__r2__DOT__x3_rc = (vlSelfRef.__PVT__r1__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r1__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__x4_round[1U] = vlSelfRef.__PVT__r2__DOT__x4_rc;
    vlSelfRef.__PVT__r2__DOT__x0_rc = (vlSelfRef.__PVT__r1__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r1__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r1__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r2__DOT__x1_rc = (vlSelfRef.__PVT__r1__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r1__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r1__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[1U] = vlSelfRef.__PVT__r2__DOT__x3_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r2__DOT__x3_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[1U] = vlSelfRef.__PVT__r2__DOT__x0_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r2__DOT__x0_rc ^ vlSelfRef.__PVT__r2__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[1U] = vlSelfRef.__PVT__r2__DOT__x1_rc;
    vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xd2ULL ^ (vlSelfRef.__Vcellout__r1__x2_o 
                      ^ vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__j = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r2__DOT__x1_rc));
    vlSelfRef.__PVT__r2__DOT__h = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x3_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r2__DOT__f = (vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r2__DOT__x1_rc) 
                                      & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r3__DOT__x4_rc = (vlSelfRef.__PVT__r2__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r2__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r2__x2_o = ((~ vlSelfRef.__PVT__r2__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r2__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r2__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r2__DOT__x3_s = ((vlSelfRef.__PVT__r2__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__h);
    vlSelfRef.__PVT__r2__DOT__x0_s = (vlSelfRef.__PVT__r2__DOT__f 
                                      ^ vlSelfRef.__PVT__r2__DOT__j);
    vlSelfRef.__PVT__r2__DOT__x1_s = ((vlSelfRef.__PVT__r2__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r2__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r2__DOT__f);
    vlSelfRef.__PVT__x4_round[2U] = vlSelfRef.__PVT__r3__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[2U] = vlSelfRef.__Vcellout__r2__x2_o;
    vlSelfRef.__PVT__r3__DOT__x3_rc = (vlSelfRef.__PVT__r2__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r2__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r3__DOT__x0_rc = (vlSelfRef.__PVT__r2__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r2__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r2__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r3__DOT__x1_rc = (vlSelfRef.__PVT__r2__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r2__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r2__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[2U] = vlSelfRef.__PVT__r3__DOT__x3_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r3__DOT__x3_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[2U] = vlSelfRef.__PVT__r3__DOT__x0_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r3__DOT__x0_rc ^ vlSelfRef.__PVT__r3__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[2U] = vlSelfRef.__PVT__r3__DOT__x1_rc;
    vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xc3ULL ^ (vlSelfRef.__Vcellout__r2__x2_o 
                      ^ vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__j = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r3__DOT__x1_rc));
    vlSelfRef.__PVT__r3__DOT__h = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x3_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r3__DOT__f = (vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r3__DOT__x1_rc) 
                                      & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r4__DOT__x4_rc = (vlSelfRef.__PVT__r3__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r3__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r3__x2_o = ((~ vlSelfRef.__PVT__r3__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r3__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r3__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r3__DOT__x3_s = ((vlSelfRef.__PVT__r3__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__h);
    vlSelfRef.__PVT__r3__DOT__x0_s = (vlSelfRef.__PVT__r3__DOT__f 
                                      ^ vlSelfRef.__PVT__r3__DOT__j);
    vlSelfRef.__PVT__r3__DOT__x1_s = ((vlSelfRef.__PVT__r3__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r3__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r3__DOT__f);
    vlSelfRef.__PVT__x4_round[3U] = vlSelfRef.__PVT__r4__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[3U] = vlSelfRef.__Vcellout__r3__x2_o;
    vlSelfRef.__PVT__r4__DOT__x3_rc = (vlSelfRef.__PVT__r3__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r3__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r4__DOT__x0_rc = (vlSelfRef.__PVT__r3__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r3__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r3__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r4__DOT__x1_rc = (vlSelfRef.__PVT__r3__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r3__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r3__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[3U] = vlSelfRef.__PVT__r4__DOT__x3_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r4__DOT__x3_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[3U] = vlSelfRef.__PVT__r4__DOT__x0_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r4__DOT__x0_rc ^ vlSelfRef.__PVT__r4__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[3U] = vlSelfRef.__PVT__r4__DOT__x1_rc;
    vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xb4ULL ^ (vlSelfRef.__Vcellout__r3__x2_o 
                      ^ vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__j = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r4__DOT__x1_rc));
    vlSelfRef.__PVT__r4__DOT__h = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x3_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r4__DOT__f = (vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r4__DOT__x1_rc) 
                                      & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r5__DOT__x4_rc = (vlSelfRef.__PVT__r4__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r4__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r4__x2_o = ((~ vlSelfRef.__PVT__r4__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r4__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r4__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r4__DOT__x3_s = ((vlSelfRef.__PVT__r4__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__h);
    vlSelfRef.__PVT__r4__DOT__x0_s = (vlSelfRef.__PVT__r4__DOT__f 
                                      ^ vlSelfRef.__PVT__r4__DOT__j);
    vlSelfRef.__PVT__r4__DOT__x1_s = ((vlSelfRef.__PVT__r4__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r4__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r4__DOT__f);
    vlSelfRef.__PVT__x4_round[4U] = vlSelfRef.__PVT__r5__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[4U] = vlSelfRef.__Vcellout__r4__x2_o;
    vlSelfRef.__PVT__r5__DOT__x3_rc = (vlSelfRef.__PVT__r4__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r4__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r5__DOT__x0_rc = (vlSelfRef.__PVT__r4__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r4__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r4__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r5__DOT__x1_rc = (vlSelfRef.__PVT__r4__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r4__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r4__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[4U] = vlSelfRef.__PVT__r5__DOT__x3_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r5__DOT__x3_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[4U] = vlSelfRef.__PVT__r5__DOT__x0_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r5__DOT__x0_rc ^ vlSelfRef.__PVT__r5__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[4U] = vlSelfRef.__PVT__r5__DOT__x1_rc;
    vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
        = (0xa5ULL ^ (vlSelfRef.__Vcellout__r4__x2_o 
                      ^ vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__j = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r5__DOT__x1_rc));
    vlSelfRef.__PVT__r5__DOT__h = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x3_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r5__DOT__f = (vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r5__DOT__x1_rc) 
                                      & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r6__DOT__x4_rc = (vlSelfRef.__PVT__r5__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r5__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r5__x2_o = ((~ vlSelfRef.__PVT__r5__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r5__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r5__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r5__DOT__x3_s = ((vlSelfRef.__PVT__r5__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__h);
    vlSelfRef.__PVT__r5__DOT__x0_s = (vlSelfRef.__PVT__r5__DOT__f 
                                      ^ vlSelfRef.__PVT__r5__DOT__j);
    vlSelfRef.__PVT__r5__DOT__x1_s = ((vlSelfRef.__PVT__r5__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r5__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r5__DOT__f);
    vlSelfRef.__PVT__x4_round[5U] = vlSelfRef.__PVT__r6__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[5U] = vlSelfRef.__Vcellout__r5__x2_o;
    vlSelfRef.__PVT__r6__DOT__x3_rc = (vlSelfRef.__PVT__r5__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r5__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r6__DOT__x0_rc = (vlSelfRef.__PVT__r5__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r5__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r5__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r6__DOT__x1_rc = (vlSelfRef.__PVT__r5__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r5__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r5__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[5U] = vlSelfRef.__PVT__r6__DOT__x3_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r6__DOT__x3_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[5U] = vlSelfRef.__PVT__r6__DOT__x0_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r6__DOT__x0_rc ^ vlSelfRef.__PVT__r6__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[5U] = vlSelfRef.__PVT__r6__DOT__x1_rc;
    vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x96ULL ^ (vlSelfRef.__Vcellout__r5__x2_o 
                      ^ vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__j = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r6__DOT__x1_rc));
    vlSelfRef.__PVT__r6__DOT__h = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x3_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r6__DOT__f = (vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r6__DOT__x1_rc) 
                                      & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r7__DOT__x4_rc = (vlSelfRef.__PVT__r6__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r6__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r6__x2_o = ((~ vlSelfRef.__PVT__r6__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r6__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r6__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r6__DOT__x3_s = ((vlSelfRef.__PVT__r6__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__h);
    vlSelfRef.__PVT__r6__DOT__x0_s = (vlSelfRef.__PVT__r6__DOT__f 
                                      ^ vlSelfRef.__PVT__r6__DOT__j);
    vlSelfRef.__PVT__r6__DOT__x1_s = ((vlSelfRef.__PVT__r6__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r6__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r6__DOT__f);
    vlSelfRef.__PVT__x4_round[6U] = vlSelfRef.__PVT__r7__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[6U] = vlSelfRef.__Vcellout__r6__x2_o;
    vlSelfRef.__PVT__r7__DOT__x3_rc = (vlSelfRef.__PVT__r6__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r6__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r7__DOT__x0_rc = (vlSelfRef.__PVT__r6__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r6__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r6__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r7__DOT__x1_rc = (vlSelfRef.__PVT__r6__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r6__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r6__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[6U] = vlSelfRef.__PVT__r7__DOT__x3_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r7__DOT__x3_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[6U] = vlSelfRef.__PVT__r7__DOT__x0_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r7__DOT__x0_rc ^ vlSelfRef.__PVT__r7__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[6U] = vlSelfRef.__PVT__r7__DOT__x1_rc;
    vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x87ULL ^ (vlSelfRef.__Vcellout__r6__x2_o 
                      ^ vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__j = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r7__DOT__x1_rc));
    vlSelfRef.__PVT__r7__DOT__h = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x3_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r7__DOT__f = (vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r7__DOT__x1_rc) 
                                      & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r8__DOT__x4_rc = (vlSelfRef.__PVT__r7__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r7__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r7__x2_o = ((~ vlSelfRef.__PVT__r7__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r7__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r7__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r7__DOT__x3_s = ((vlSelfRef.__PVT__r7__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__h);
    vlSelfRef.__PVT__r7__DOT__x0_s = (vlSelfRef.__PVT__r7__DOT__f 
                                      ^ vlSelfRef.__PVT__r7__DOT__j);
    vlSelfRef.__PVT__r7__DOT__x1_s = ((vlSelfRef.__PVT__r7__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r7__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r7__DOT__f);
    vlSelfRef.__PVT__x4_round[7U] = vlSelfRef.__PVT__r8__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[7U] = vlSelfRef.__Vcellout__r7__x2_o;
    vlSelfRef.__PVT__r8__DOT__x3_rc = (vlSelfRef.__PVT__r7__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r7__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r8__DOT__x0_rc = (vlSelfRef.__PVT__r7__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r7__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r7__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r8__DOT__x1_rc = (vlSelfRef.__PVT__r7__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r7__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r7__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[7U] = vlSelfRef.__PVT__r8__DOT__x3_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r8__DOT__x3_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[7U] = vlSelfRef.__PVT__r8__DOT__x0_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r8__DOT__x0_rc ^ vlSelfRef.__PVT__r8__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[7U] = vlSelfRef.__PVT__r8__DOT__x1_rc;
    vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x78ULL ^ (vlSelfRef.__Vcellout__r7__x2_o 
                      ^ vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__j = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r8__DOT__x1_rc));
    vlSelfRef.__PVT__r8__DOT__h = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x3_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r8__DOT__f = (vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r8__DOT__x1_rc) 
                                      & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r9__DOT__x4_rc = (vlSelfRef.__PVT__r8__DOT__j 
                                       ^ ((((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__j)))) 
                                            << 0x39U) 
                                           | (vlSelfRef.__PVT__r8__DOT__j 
                                              >> 7U)) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__j 
                                              << 0x17U) 
                                             | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__j 
                                                                           >> 0x29U))))))));
    vlSelfRef.__Vcellout__r8__x2_o = ((~ vlSelfRef.__PVT__r8__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r8__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r8__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r8__DOT__x3_s = ((vlSelfRef.__PVT__r8__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__h);
    vlSelfRef.__PVT__r8__DOT__x0_s = (vlSelfRef.__PVT__r8__DOT__f 
                                      ^ vlSelfRef.__PVT__r8__DOT__j);
    vlSelfRef.__PVT__r8__DOT__x1_s = ((vlSelfRef.__PVT__r8__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r8__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r8__DOT__f);
    vlSelfRef.__PVT__x4_round[8U] = vlSelfRef.__PVT__r9__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[8U] = vlSelfRef.__Vcellout__r8__x2_o;
    vlSelfRef.__PVT__r9__DOT__x3_rc = (vlSelfRef.__PVT__r8__DOT__x3_s 
                                       ^ ((((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                            << 0x36U) 
                                           | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                              >> 0xaU)) 
                                          ^ (((QData)((IData)(
                                                              (0x1ffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x3_s)))) 
                                              << 0x2fU) 
                                             | (vlSelfRef.__PVT__r8__DOT__x3_s 
                                                >> 0x11U))));
    vlSelfRef.__PVT__r9__DOT__x0_rc = (vlSelfRef.__PVT__r8__DOT__x0_s 
                                       ^ ((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                            << 0x2dU) 
                                           | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                              >> 0x13U)) 
                                          ^ (((QData)((IData)(
                                                              (0xfffffffU 
                                                               & (IData)(vlSelfRef.__PVT__r8__DOT__x0_s)))) 
                                              << 0x24U) 
                                             | (vlSelfRef.__PVT__r8__DOT__x0_s 
                                                >> 0x1cU))));
    vlSelfRef.__PVT__r9__DOT__x1_rc = (vlSelfRef.__PVT__r8__DOT__x1_s 
                                       ^ (((vlSelfRef.__PVT__r8__DOT__x1_s 
                                            << 3U) 
                                           | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                          ^ ((vlSelfRef.__PVT__r8__DOT__x1_s 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__r8__DOT__x1_s 
                                                                           >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[8U] = vlSelfRef.__PVT__r9__DOT__x3_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r9__DOT__x3_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[8U] = vlSelfRef.__PVT__r9__DOT__x0_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r9__DOT__x0_rc ^ vlSelfRef.__PVT__r9__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[8U] = vlSelfRef.__PVT__r9__DOT__x1_rc;
    vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x69ULL ^ (vlSelfRef.__Vcellout__r8__x2_o 
                      ^ vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__j = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2 
                                   ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                      & vlSelfRef.__PVT__r9__DOT__x1_rc));
    vlSelfRef.__PVT__r9__DOT__h = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x3_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r9__DOT__f = (vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0 
                                   ^ ((~ vlSelfRef.__PVT__r9__DOT__x1_rc) 
                                      & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r10__DOT__x4_rc = (vlSelfRef.__PVT__r9__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r9__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r9__x2_o = ((~ vlSelfRef.__PVT__r9__DOT__h) 
                                      ^ ((((QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 1U)))) 
                                         ^ (((QData)((IData)(
                                                             (0x3fU 
                                                              & (~ (IData)(vlSelfRef.__PVT__r9__DOT__h))))) 
                                             << 0x3aU) 
                                            | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSelfRef.__PVT__r9__DOT__h 
                                                   >> 6U))))));
    vlSelfRef.__PVT__r9__DOT__x3_s = ((vlSelfRef.__PVT__r9__DOT__x3_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                          & vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_0)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__h);
    vlSelfRef.__PVT__r9__DOT__x0_s = (vlSelfRef.__PVT__r9__DOT__f 
                                      ^ vlSelfRef.__PVT__r9__DOT__j);
    vlSelfRef.__PVT__r9__DOT__x1_s = ((vlSelfRef.__PVT__r9__DOT__x1_rc 
                                       ^ ((~ vlSelfRef.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                          & vlSelfRef.__PVT__r9__DOT__x3_rc)) 
                                      ^ vlSelfRef.__PVT__r9__DOT__f);
    vlSelfRef.__PVT__x4_round[9U] = vlSelfRef.__PVT__r10__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[9U] = vlSelfRef.__Vcellout__r9__x2_o;
    vlSelfRef.__PVT__r10__DOT__x3_rc = (vlSelfRef.__PVT__r9__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r10__DOT__x0_rc = (vlSelfRef.__PVT__r9__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r9__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r10__DOT__x1_rc = (vlSelfRef.__PVT__r9__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r9__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r9__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[9U] = vlSelfRef.__PVT__r10__DOT__x3_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r10__DOT__x3_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[9U] = vlSelfRef.__PVT__r10__DOT__x0_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r10__DOT__x0_rc ^ vlSelfRef.__PVT__r10__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[9U] = vlSelfRef.__PVT__r10__DOT__x1_rc;
    vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x5aULL ^ (vlSelfRef.__Vcellout__r9__x2_o 
                      ^ vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__j = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2 
                                    ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                       & vlSelfRef.__PVT__r10__DOT__x1_rc));
    vlSelfRef.__PVT__r10__DOT__h = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x3_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r10__DOT__f = (vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r10__DOT__x1_rc) 
                                       & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x4_rc = (vlSelfRef.__PVT__r10__DOT__j 
                                        ^ ((((QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__j)))) 
                                             << 0x39U) 
                                            | (vlSelfRef.__PVT__r10__DOT__j 
                                               >> 7U)) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__j 
                                               << 0x17U) 
                                              | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))));
    vlSelfRef.__Vcellout__r10__x2_o = ((~ vlSelfRef.__PVT__r10__DOT__h) 
                                       ^ ((((QData)((IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                            << 0x3fU) 
                                           | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.__PVT__r10__DOT__h 
                                                  >> 1U)))) 
                                          ^ (((QData)((IData)(
                                                              (0x3fU 
                                                               & (~ (IData)(vlSelfRef.__PVT__r10__DOT__h))))) 
                                              << 0x3aU) 
                                             | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.__PVT__r10__DOT__h 
                                                    >> 6U))))));
    vlSelfRef.__PVT__r10__DOT__x3_s = ((vlSelfRef.__PVT__r10__DOT__x3_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                           & vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_0)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__h);
    vlSelfRef.__PVT__r10__DOT__x0_s = (vlSelfRef.__PVT__r10__DOT__f 
                                       ^ vlSelfRef.__PVT__r10__DOT__j);
    vlSelfRef.__PVT__r10__DOT__x1_s = ((vlSelfRef.__PVT__r10__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r10__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r10__DOT__f);
    vlSelfRef.__PVT__x4_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x4_rc;
    vlSelfRef.__PVT__x2_round[0xaU] = vlSelfRef.__Vcellout__r10__x2_o;
    vlSelfRef.__PVT__r11__DOT__x3_rc = (vlSelfRef.__PVT__r10__DOT__x3_s 
                                        ^ ((((QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                             << 0x36U) 
                                            | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                               >> 0xaU)) 
                                           ^ (((QData)((IData)(
                                                               (0x1ffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x3_s)))) 
                                               << 0x2fU) 
                                              | (vlSelfRef.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))));
    vlSelfRef.__PVT__r11__DOT__x0_rc = (vlSelfRef.__PVT__r10__DOT__x0_s 
                                        ^ ((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                             << 0x2dU) 
                                            | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                               >> 0x13U)) 
                                           ^ (((QData)((IData)(
                                                               (0xfffffffU 
                                                                & (IData)(vlSelfRef.__PVT__r10__DOT__x0_s)))) 
                                               << 0x24U) 
                                              | (vlSelfRef.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__r11__DOT__x1_rc = (vlSelfRef.__PVT__r10__DOT__x1_s 
                                        ^ (((vlSelfRef.__PVT__r10__DOT__x1_s 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                          >> 0x3dU)))))) 
                                           ^ ((vlSelfRef.__PVT__r10__DOT__x1_s 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))));
    vlSelfRef.__PVT__x3_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x3_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2 
        = (vlSelfRef.__PVT__r11__DOT__x3_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x0_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x0_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
        = (vlSelfRef.__PVT__r11__DOT__x0_rc ^ vlSelfRef.__PVT__r11__DOT__x4_rc);
    vlSelfRef.__PVT__x1_round[0xaU] = vlSelfRef.__PVT__r11__DOT__x1_rc;
    vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
        = (0x4bULL ^ (vlSelfRef.__Vcellout__r10__x2_o 
                      ^ vlSelfRef.__PVT__r11__DOT__x1_rc));
    vlSelfRef.__PVT__r11__DOT__h = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x3_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_2));
    vlSelfRef.__PVT__r11__DOT__f = (vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_0 
                                    ^ ((~ vlSelfRef.__PVT__r11__DOT__x1_rc) 
                                       & vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1));
    vlSelfRef.__PVT__r11__DOT__x1_s = ((vlSelfRef.__PVT__r11__DOT__x1_rc 
                                        ^ ((~ vlSelfRef.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                           & vlSelfRef.__PVT__r11__DOT__x3_rc)) 
                                       ^ vlSelfRef.__PVT__r11__DOT__f);
}
