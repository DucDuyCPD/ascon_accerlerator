// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_ascon_permutation__Syms.h"


void Vtest_ascon_permutation___024root__trace_chg_0_sub_0(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_ascon_permutation___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_chg_0\n"); );
    // Init
    Vtest_ascon_permutation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_permutation___024root*>(voidSelf);
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_ascon_permutation___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_ascon_permutation___024root__trace_chg_0_sub_0(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgQData(oldp+0,(vlSelfRef.test_ascon_permutation__DOT__x0_i),64);
        bufp->chgQData(oldp+2,(vlSelfRef.test_ascon_permutation__DOT__x1_i),64);
        bufp->chgQData(oldp+4,(vlSelfRef.test_ascon_permutation__DOT__x2_i),64);
        bufp->chgQData(oldp+6,(vlSelfRef.test_ascon_permutation__DOT__x3_i),64);
        bufp->chgQData(oldp+8,(vlSelfRef.test_ascon_permutation__DOT__x4_i),64);
        bufp->chgQData(oldp+10,(vlSelfRef.test_ascon_permutation__DOT__x0_cmp),64);
        bufp->chgQData(oldp+12,(vlSelfRef.test_ascon_permutation__DOT__x1_cmp),64);
        bufp->chgQData(oldp+14,(vlSelfRef.test_ascon_permutation__DOT__x2_cmp),64);
        bufp->chgQData(oldp+16,(vlSelfRef.test_ascon_permutation__DOT__x3_cmp),64);
        bufp->chgQData(oldp+18,(vlSelfRef.test_ascon_permutation__DOT__x4_cmp),64);
        bufp->chgQData(oldp+20,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1]),64);
        bufp->chgQData(oldp+24,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4]),64);
        bufp->chgQData(oldp+30,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[0]),64);
        bufp->chgQData(oldp+32,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[1]),64);
        bufp->chgQData(oldp+34,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[2]),64);
        bufp->chgQData(oldp+36,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[3]),64);
        bufp->chgQData(oldp+38,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[4]),64);
        bufp->chgQData(oldp+40,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr19),64);
        bufp->chgQData(oldp+42,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr28),64);
        bufp->chgQData(oldp+44,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr61),64);
        bufp->chgQData(oldp+46,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr39),64);
        bufp->chgQData(oldp+48,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr1),64);
        bufp->chgQData(oldp+50,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr6),64);
        bufp->chgQData(oldp+52,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr10),64);
        bufp->chgQData(oldp+54,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr17),64);
        bufp->chgQData(oldp+56,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr7),64);
        bufp->chgQData(oldp+58,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr41),64);
        bufp->chgIData(oldp+60,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r),32);
        bufp->chgIData(oldp+61,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i),32);
        bufp->chgQData(oldp+62,((0xf0ULL ^ vlSelfRef.test_ascon_permutation__DOT__x2_i)),64);
        bufp->chgQData(oldp+64,((0x96ULL ^ vlSelfRef.test_ascon_permutation__DOT__x2_i)),64);
        bufp->chgQData(oldp+66,((0xb4ULL ^ vlSelfRef.test_ascon_permutation__DOT__x2_i)),64);
        bufp->chgIData(oldp+68,(vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U]) | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgQData(oldp+69,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                 & vlSelfRef.test_ascon_permutation__DOT__x1_i)),64);
        bufp->chgQData(oldp+71,(((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
                                 & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+73,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_permutation__DOT__x3_i)),64);
        bufp->chgQData(oldp+75,((vlSelfRef.test_ascon_permutation__DOT__x1_i 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                    & vlSelfRef.test_ascon_permutation__DOT__x3_i))),64);
        bufp->chgQData(oldp+77,(((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
                                 & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+79,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_permutation__DOT__x3_i)),64);
        bufp->chgQData(oldp+81,((vlSelfRef.test_ascon_permutation__DOT__x1_i 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                    & vlSelfRef.test_ascon_permutation__DOT__x3_i))),64);
        bufp->chgQData(oldp+83,(((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
                                 & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+85,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_permutation__DOT__x3_i)),64);
        bufp->chgQData(oldp+87,((vlSelfRef.test_ascon_permutation__DOT__x1_i 
                                 ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                    & vlSelfRef.test_ascon_permutation__DOT__x3_i))),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgQData(oldp+89,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                 ^ ((((QData)((IData)(
                                                      (0x7ffffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                      << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                                   >> 0x13U)) 
                                    ^ (((QData)((IData)(
                                                        (0xfffffffU 
                                                         & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                        << 0x24U) | 
                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                        >> 0x1cU))))),64);
        bufp->chgQData(oldp+91,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
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
                                                                                >> 0x27U))))))))),64);
        bufp->chgQData(oldp+93,(((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                     ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                        & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))) 
                                 ^ ((((QData)((IData)(
                                                      (1U 
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
                                        << 0x3aU) | 
                                       (0x3ffffffffffffffULL 
                                        & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                               >> 6U) 
                                              ^ ((~ 
                                                  (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                                   >> 6U)) 
                                                 & (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
                                                    >> 6U))))))))),64);
        bufp->chgQData(oldp+95,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                 ^ ((((QData)((IData)(
                                                      (0x3ffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                      << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                                   >> 0xaU)) 
                                    ^ (((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                        << 0x2fU) | 
                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                        >> 0x11U))))),64);
        bufp->chgQData(oldp+97,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                 ^ ((((QData)((IData)(
                                                      (0x7fU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j)))) 
                                      << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                                   >> 7U)) 
                                    ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                        << 0x17U) | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+99,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                 ^ ((((QData)((IData)(
                                                      (0x7ffffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                      << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                                   >> 0x13U)) 
                                    ^ (((QData)((IData)(
                                                        (0xfffffffU 
                                                         & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                        << 0x24U) | 
                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                        >> 0x1cU))))),64);
        bufp->chgQData(oldp+101,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                  ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                            >> 0x3dU)))))) 
                                     ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                         << 0x19U) 
                                        | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                      >> 0x27U))))))))),64);
        bufp->chgQData(oldp+103,(((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                      ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                         & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))) 
                                  ^ ((((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                                            ^ 
                                                            ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)) 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                       << 0x3fU) | 
                                      (0x7fffffffffffffffULL 
                                       & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                              >> 1U) 
                                             ^ ((~ 
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
                                         << 0x3aU) 
                                        | (0x3ffffffffffffffULL 
                                           & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                                  >> 6U) 
                                                 ^ 
                                                 ((~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                                    >> 6U)) 
                                                  & (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2 
                                                     >> 6U))))))))),64);
        bufp->chgQData(oldp+105,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                  ^ ((((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                       << 0x36U) | 
                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                       >> 0xaU)) ^ 
                                     (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                       >> 0x11U))))),64);
        bufp->chgQData(oldp+107,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                  ^ ((((QData)((IData)(
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j)))) 
                                       << 0x39U) | 
                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                       >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                   << 0x17U) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+109,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                  ^ ((((QData)((IData)(
                                                       (0x7ffffU 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                       << 0x2dU) | 
                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                       >> 0x13U)) ^ 
                                     (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                       >> 0x1cU))))),64);
        bufp->chgQData(oldp+111,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                  ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                            >> 0x3dU)))))) 
                                     ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                         << 0x19U) 
                                        | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                      >> 0x27U))))))))),64);
        bufp->chgQData(oldp+113,(((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                      ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                         & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))) 
                                  ^ ((((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                            ^ 
                                                            ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                             & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                       << 0x3fU) | 
                                      (0x7fffffffffffffffULL 
                                       & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                              >> 1U) 
                                             ^ ((~ 
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
                                         << 0x3aU) 
                                        | (0x3ffffffffffffffULL 
                                           & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                  >> 6U) 
                                                 ^ 
                                                 ((~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                    >> 6U)) 
                                                  & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                     >> 6U))))))))),64);
        bufp->chgQData(oldp+115,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                  ^ ((((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                       << 0x36U) | 
                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                       >> 0xaU)) ^ 
                                     (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                       >> 0x11U))))),64);
        bufp->chgQData(oldp+117,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                  ^ ((((QData)((IData)(
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j)))) 
                                       << 0x39U) | 
                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                       >> 7U)) ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                   << 0x17U) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+119,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+121,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+123,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+125,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+127,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+129,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+131,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+133,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[7]),64);
        bufp->chgQData(oldp+135,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[8]),64);
        bufp->chgQData(oldp+137,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[9]),64);
        bufp->chgQData(oldp+139,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[10]),64);
        bufp->chgQData(oldp+141,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+143,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+145,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+147,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+149,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+151,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+153,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+155,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[7]),64);
        bufp->chgQData(oldp+157,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[8]),64);
        bufp->chgQData(oldp+159,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[9]),64);
        bufp->chgQData(oldp+161,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[10]),64);
        bufp->chgQData(oldp+163,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+165,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+167,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+169,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+171,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+173,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+175,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+177,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[7]),64);
        bufp->chgQData(oldp+179,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[8]),64);
        bufp->chgQData(oldp+181,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[9]),64);
        bufp->chgQData(oldp+183,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[10]),64);
        bufp->chgQData(oldp+185,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+187,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+189,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+191,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+193,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+195,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+197,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+199,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[7]),64);
        bufp->chgQData(oldp+201,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[8]),64);
        bufp->chgQData(oldp+203,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[9]),64);
        bufp->chgQData(oldp+205,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[10]),64);
        bufp->chgQData(oldp+207,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+209,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+211,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+213,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+215,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+217,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+219,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+221,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[7]),64);
        bufp->chgQData(oldp+223,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[8]),64);
        bufp->chgQData(oldp+225,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[9]),64);
        bufp->chgQData(oldp+227,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[10]),64);
        bufp->chgQData(oldp+229,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+231,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+233,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+235,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+237,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+239,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__d),64);
        bufp->chgQData(oldp+241,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+243,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+245,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h),64);
        bufp->chgQData(oldp+247,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__i),64);
        bufp->chgQData(oldp+249,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j),64);
        bufp->chgQData(oldp+251,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+253,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+255,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h)),64);
        bufp->chgQData(oldp+257,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+259,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+261,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+263,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+265,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+267,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+269,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+271,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+273,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+275,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+277,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+279,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+281,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+283,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+285,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+287,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+289,((0xe1ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+291,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+293,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+295,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+297,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+299,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+301,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+303,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+305,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h),64);
        bufp->chgQData(oldp+307,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+309,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j),64);
        bufp->chgQData(oldp+311,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+313,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+315,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h)),64);
        bufp->chgQData(oldp+317,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+319,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+321,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+323,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+325,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+327,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+329,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+331,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+333,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+335,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+337,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+339,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_rc),64);
        bufp->chgQData(oldp+341,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc),64);
        bufp->chgQData(oldp+343,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r9__x2_o),64);
        bufp->chgQData(oldp+345,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc),64);
        bufp->chgQData(oldp+347,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x4_rc),64);
        bufp->chgQData(oldp+349,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_rc),64);
        bufp->chgQData(oldp+351,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc),64);
        bufp->chgQData(oldp+353,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r10__x2_o),64);
        bufp->chgQData(oldp+355,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc),64);
        bufp->chgQData(oldp+357,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x4_rc),64);
        bufp->chgQData(oldp+359,((0x5aULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r9__x2_o)),64);
        bufp->chgQData(oldp+361,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc)),64);
        bufp->chgQData(oldp+363,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+365,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc)),64);
        bufp->chgQData(oldp+367,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+369,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+371,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__f),64);
        bufp->chgQData(oldp+373,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc))),64);
        bufp->chgQData(oldp+375,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h),64);
        bufp->chgQData(oldp+377,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+379,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j),64);
        bufp->chgQData(oldp+381,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s),64);
        bufp->chgQData(oldp+383,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s),64);
        bufp->chgQData(oldp+385,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h)),64);
        bufp->chgQData(oldp+387,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s),64);
        bufp->chgQData(oldp+389,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+391,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+393,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+395,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+397,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+399,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+401,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+403,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+405,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+407,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+409,((0x4bULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r10__x2_o)),64);
        bufp->chgQData(oldp+411,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc)),64);
        bufp->chgQData(oldp+413,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+415,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)),64);
        bufp->chgQData(oldp+417,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+419,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+421,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__f),64);
        bufp->chgQData(oldp+423,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc))),64);
        bufp->chgQData(oldp+425,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))),64);
        bufp->chgQData(oldp+427,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+429,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j),64);
        bufp->chgQData(oldp+431,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s),64);
        bufp->chgQData(oldp+433,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s),64);
        bufp->chgQData(oldp+435,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                     ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                        & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)))),64);
        bufp->chgQData(oldp+437,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s),64);
        bufp->chgQData(oldp+439,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+441,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+443,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+445,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+447,((((QData)((IData)(
                                                   (1U 
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
                                                        >> 1U))))))),64);
        bufp->chgQData(oldp+449,((((QData)((IData)(
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
                                                        >> 6U))))))),64);
        bufp->chgQData(oldp+451,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+453,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+455,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+457,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+459,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+461,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+463,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+465,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+467,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+469,((0xd2ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+471,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+473,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+475,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+477,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+479,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+481,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+483,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+485,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h),64);
        bufp->chgQData(oldp+487,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+489,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j),64);
        bufp->chgQData(oldp+491,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+493,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+495,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h)),64);
        bufp->chgQData(oldp+497,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+499,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+501,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+503,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+505,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+507,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+509,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+511,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+513,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+515,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+517,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+519,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+521,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+523,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+525,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+527,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+529,((0xc3ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+531,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+533,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+535,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+537,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+539,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+541,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+543,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+545,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h),64);
        bufp->chgQData(oldp+547,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+549,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j),64);
        bufp->chgQData(oldp+551,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+553,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+555,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h)),64);
        bufp->chgQData(oldp+557,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+559,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+561,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+563,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+565,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+567,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+569,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+571,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+573,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+575,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+577,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+579,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+581,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+583,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+585,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+587,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+589,((0xb4ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+591,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+593,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+595,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+597,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+599,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+601,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+603,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+605,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h),64);
        bufp->chgQData(oldp+607,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+609,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j),64);
        bufp->chgQData(oldp+611,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+613,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+615,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h)),64);
        bufp->chgQData(oldp+617,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+619,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+621,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+623,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+625,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+627,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+629,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+631,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+633,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+635,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+637,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+639,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+641,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+643,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+645,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+647,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+649,((0xa5ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+651,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+653,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+655,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+657,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+659,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+661,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+663,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+665,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h),64);
        bufp->chgQData(oldp+667,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+669,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j),64);
        bufp->chgQData(oldp+671,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+673,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+675,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h)),64);
        bufp->chgQData(oldp+677,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+679,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+681,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+683,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+685,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+687,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+689,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+691,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+693,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+695,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+697,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+699,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+701,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+703,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+705,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+707,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+709,((0x96ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+711,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+713,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+715,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+717,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+719,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+721,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+723,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+725,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h),64);
        bufp->chgQData(oldp+727,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+729,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j),64);
        bufp->chgQData(oldp+731,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+733,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+735,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h)),64);
        bufp->chgQData(oldp+737,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+739,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+741,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+743,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+745,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+747,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+749,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+751,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+753,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+755,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+757,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+759,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_rc),64);
        bufp->chgQData(oldp+761,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc),64);
        bufp->chgQData(oldp+763,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r7__x2_o),64);
        bufp->chgQData(oldp+765,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc),64);
        bufp->chgQData(oldp+767,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x4_rc),64);
        bufp->chgQData(oldp+769,((0x87ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+771,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+773,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+775,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+777,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+779,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+781,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+783,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+785,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h),64);
        bufp->chgQData(oldp+787,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+789,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j),64);
        bufp->chgQData(oldp+791,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+793,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+795,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h)),64);
        bufp->chgQData(oldp+797,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+799,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+801,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+803,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+805,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+807,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+809,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+811,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+813,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+815,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+817,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+819,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_rc),64);
        bufp->chgQData(oldp+821,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc),64);
        bufp->chgQData(oldp+823,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r8__x2_o),64);
        bufp->chgQData(oldp+825,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc),64);
        bufp->chgQData(oldp+827,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x4_rc),64);
        bufp->chgQData(oldp+829,((0x78ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r7__x2_o)),64);
        bufp->chgQData(oldp+831,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc)),64);
        bufp->chgQData(oldp+833,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+835,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc)),64);
        bufp->chgQData(oldp+837,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+839,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+841,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__f),64);
        bufp->chgQData(oldp+843,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc))),64);
        bufp->chgQData(oldp+845,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h),64);
        bufp->chgQData(oldp+847,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+849,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j),64);
        bufp->chgQData(oldp+851,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s),64);
        bufp->chgQData(oldp+853,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s),64);
        bufp->chgQData(oldp+855,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h)),64);
        bufp->chgQData(oldp+857,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s),64);
        bufp->chgQData(oldp+859,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+861,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+863,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+865,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+867,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+869,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+871,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+873,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+875,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+877,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+879,((0x69ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r8__x2_o)),64);
        bufp->chgQData(oldp+881,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc)),64);
        bufp->chgQData(oldp+883,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+885,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc)),64);
        bufp->chgQData(oldp+887,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+889,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+891,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__f),64);
        bufp->chgQData(oldp+893,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc))),64);
        bufp->chgQData(oldp+895,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h),64);
        bufp->chgQData(oldp+897,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+899,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j),64);
        bufp->chgQData(oldp+901,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s),64);
        bufp->chgQData(oldp+903,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s),64);
        bufp->chgQData(oldp+905,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h)),64);
        bufp->chgQData(oldp+907,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s),64);
        bufp->chgQData(oldp+909,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+911,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+913,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+915,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+917,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+919,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+921,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+923,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+925,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+927,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+929,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+931,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+933,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+935,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+937,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+939,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+941,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+943,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+945,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+947,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+949,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+951,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+953,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+955,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+957,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+959,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+961,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+963,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+965,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+967,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+969,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+971,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+973,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+975,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+977,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+979,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+981,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+983,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+985,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+987,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+989,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h),64);
        bufp->chgQData(oldp+991,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+993,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+995,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h)),64);
        bufp->chgQData(oldp+997,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+999,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+1001,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1003,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1005,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1007,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1009,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1011,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1013,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1015,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+1017,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+1019,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+1021,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+1023,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+1025,((0x87ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+1027,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1029,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1031,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1033,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1035,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1037,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+1039,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1041,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h),64);
        bufp->chgQData(oldp+1043,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1045,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j),64);
        bufp->chgQData(oldp+1047,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+1049,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+1051,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h)),64);
        bufp->chgQData(oldp+1053,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+1055,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1057,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1059,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1061,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1063,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1065,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1067,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1069,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1071,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1073,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1075,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+1077,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+1079,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+1081,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+1083,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+1085,((0x78ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+1087,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1089,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1091,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1093,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1095,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1097,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+1099,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1101,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h),64);
        bufp->chgQData(oldp+1103,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1105,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j),64);
        bufp->chgQData(oldp+1107,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+1109,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+1111,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h)),64);
        bufp->chgQData(oldp+1113,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+1115,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1117,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1119,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1121,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1123,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1125,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1127,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1129,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1131,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1133,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1135,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+1137,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+1139,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+1141,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+1143,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+1145,((0x69ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+1147,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1149,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1151,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1153,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1155,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1157,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+1159,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1161,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h),64);
        bufp->chgQData(oldp+1163,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1165,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j),64);
        bufp->chgQData(oldp+1167,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+1169,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+1171,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h)),64);
        bufp->chgQData(oldp+1173,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+1175,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1177,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1179,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1181,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1183,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1185,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1187,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1189,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1191,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1193,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1195,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+1197,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+1199,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+1201,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+1203,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+1205,((0x5aULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+1207,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1209,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1211,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1213,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1215,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1217,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+1219,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1221,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h),64);
        bufp->chgQData(oldp+1223,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1225,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j),64);
        bufp->chgQData(oldp+1227,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+1229,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+1231,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h)),64);
        bufp->chgQData(oldp+1233,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+1235,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1237,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1239,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1241,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1243,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1245,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1247,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1249,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1251,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1253,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1255,((0x4bULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+1257,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1259,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1261,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1263,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1265,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1267,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+1269,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1271,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))),64);
        bufp->chgQData(oldp+1273,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1275,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j),64);
        bufp->chgQData(oldp+1277,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+1279,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+1281,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                      ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                         & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)))),64);
        bufp->chgQData(oldp+1283,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+1285,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1287,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1289,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1291,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1293,((((QData)((IData)(
                                                    (1U 
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
                                                         >> 1U))))))),64);
        bufp->chgQData(oldp+1295,((((QData)((IData)(
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
                                                         >> 6U))))))),64);
        bufp->chgQData(oldp+1297,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1299,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1301,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1303,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1305,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+1307,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+1309,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+1311,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+1313,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+1315,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+1317,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+1319,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+1321,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+1323,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+1325,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+1327,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+1329,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+1331,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+1333,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+1335,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+1337,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+1339,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+1341,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+1343,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+1345,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+1347,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+1349,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+1351,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+1353,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+1355,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+1357,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+1359,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+1361,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+1363,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+1365,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+1367,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+1369,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+1371,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+1373,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+1375,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+1377,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+1379,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+1381,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+1383,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+1385,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h),64);
        bufp->chgQData(oldp+1387,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+1389,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+1391,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h)),64);
        bufp->chgQData(oldp+1393,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+1395,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1397,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1399,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1401,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1403,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1405,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1407,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1409,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1411,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+1413,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+1415,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+1417,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+1419,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+1421,((0xa5ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+1423,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1425,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1427,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1429,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1431,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1433,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+1435,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1437,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h),64);
        bufp->chgQData(oldp+1439,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1441,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j),64);
        bufp->chgQData(oldp+1443,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+1445,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+1447,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h)),64);
        bufp->chgQData(oldp+1449,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+1451,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1453,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1455,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1457,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1459,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1461,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1463,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1465,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1467,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1469,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1471,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+1473,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+1475,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+1477,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+1479,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+1481,((0x96ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+1483,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1485,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1487,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1489,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1491,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1493,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+1495,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1497,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h),64);
        bufp->chgQData(oldp+1499,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1501,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j),64);
        bufp->chgQData(oldp+1503,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+1505,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+1507,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h)),64);
        bufp->chgQData(oldp+1509,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+1511,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1513,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1515,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1517,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1519,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1521,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1523,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1525,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1527,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1529,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1531,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+1533,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+1535,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+1537,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+1539,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+1541,((0x87ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+1543,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1545,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1547,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1549,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1551,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1553,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+1555,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1557,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h),64);
        bufp->chgQData(oldp+1559,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1561,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j),64);
        bufp->chgQData(oldp+1563,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+1565,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+1567,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h)),64);
        bufp->chgQData(oldp+1569,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+1571,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1573,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1575,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1577,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1579,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1581,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1583,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1585,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1587,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1589,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1591,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+1593,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+1595,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+1597,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+1599,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+1601,((0x78ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+1603,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1605,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1607,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1609,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1611,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1613,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+1615,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1617,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h),64);
        bufp->chgQData(oldp+1619,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1621,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j),64);
        bufp->chgQData(oldp+1623,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+1625,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+1627,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h)),64);
        bufp->chgQData(oldp+1629,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+1631,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1633,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1635,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1637,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1639,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1641,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1643,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1645,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1647,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1649,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1651,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+1653,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+1655,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+1657,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+1659,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+1661,((0x69ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+1663,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1665,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1667,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1669,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1671,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1673,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+1675,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1677,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h),64);
        bufp->chgQData(oldp+1679,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1681,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j),64);
        bufp->chgQData(oldp+1683,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+1685,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+1687,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h)),64);
        bufp->chgQData(oldp+1689,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+1691,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1693,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1695,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1697,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1699,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1701,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1703,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1705,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1707,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1709,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1711,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+1713,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+1715,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+1717,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+1719,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+1721,((0x5aULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+1723,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1725,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1727,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1729,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1731,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1733,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+1735,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1737,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h),64);
        bufp->chgQData(oldp+1739,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1741,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j),64);
        bufp->chgQData(oldp+1743,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+1745,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+1747,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h)),64);
        bufp->chgQData(oldp+1749,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+1751,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1753,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1755,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1757,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1759,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1761,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1763,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1765,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1767,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1769,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1771,((0x4bULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+1773,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1775,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1777,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1779,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1781,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1783,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+1785,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1787,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))),64);
        bufp->chgQData(oldp+1789,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1791,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j),64);
        bufp->chgQData(oldp+1793,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+1795,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+1797,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                      ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                         & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)))),64);
        bufp->chgQData(oldp+1799,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+1801,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1803,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1805,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1807,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1809,((((QData)((IData)(
                                                    (1U 
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
                                                         >> 1U))))))),64);
        bufp->chgQData(oldp+1811,((((QData)((IData)(
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
                                                         >> 6U))))))),64);
        bufp->chgQData(oldp+1813,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1815,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1817,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1819,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                                            >> 0x29U))))))),64);
    }
}

void Vtest_ascon_permutation___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_cleanup\n"); );
    // Init
    Vtest_ascon_permutation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_permutation___024root*>(voidSelf);
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
