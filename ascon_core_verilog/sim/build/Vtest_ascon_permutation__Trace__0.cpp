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
        bufp->chgQData(oldp+10,(vlSelfRef.test_ascon_permutation__DOT__rc),64);
        bufp->chgQData(oldp+12,((0xf0ULL ^ vlSelfRef.test_ascon_permutation__DOT__x2_i)),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgQData(oldp+14,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                 ^ ((((QData)((IData)(
                                                      (0x7ffffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s)))) 
                                      << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                                   >> 0x13U)) 
                                    ^ (((QData)((IData)(
                                                        (0xfffffffU 
                                                         & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s)))) 
                                        << 0x24U) | 
                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                        >> 0x1cU))))),64);
        bufp->chgQData(oldp+16,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                 ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                      << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                                                           >> 0x3dU)))))) 
                                    ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                        << 0x19U) | (QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                                                                >> 0x27U))))))))),64);
        bufp->chgQData(oldp+18,(((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                     ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc) 
                                        & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))) 
                                 ^ ((((QData)((IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                           ^ 
                                                           ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc)) 
                                                            & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                      << 0x3fU) | (0x7fffffffffffffffULL 
                                                   & (~ 
                                                      ((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                        >> 1U) 
                                                       ^ 
                                                       ((~ 
                                                         (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                                                          >> 1U)) 
                                                        & (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                           >> 1U)))))) 
                                    ^ (((QData)((IData)(
                                                        (0x3fU 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                             ^ 
                                                             ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc)) 
                                                              & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                        << 0x3aU) | 
                                       (0x3ffffffffffffffULL 
                                        & (~ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                               >> 6U) 
                                              ^ ((~ 
                                                  (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                                                   >> 6U)) 
                                                 & (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                    >> 6U))))))))),64);
        bufp->chgQData(oldp+20,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                 ^ ((((QData)((IData)(
                                                      (0x3ffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s)))) 
                                      << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                                   >> 0xaU)) 
                                    ^ (((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s)))) 
                                        << 0x2fU) | 
                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                        >> 0x11U))))),64);
        bufp->chgQData(oldp+22,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                 ^ ((((QData)((IData)(
                                                      (0x7fU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j)))) 
                                      << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                                   >> 7U)) 
                                    ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                        << 0x17U) | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+24,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+30,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+32,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+34,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+36,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+38,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[7]),64);
        bufp->chgQData(oldp+40,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[8]),64);
        bufp->chgQData(oldp+42,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[9]),64);
        bufp->chgQData(oldp+44,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[10]),64);
        bufp->chgQData(oldp+46,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+48,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+50,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+52,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+54,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+56,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+58,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+60,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[7]),64);
        bufp->chgQData(oldp+62,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[8]),64);
        bufp->chgQData(oldp+64,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[9]),64);
        bufp->chgQData(oldp+66,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[10]),64);
        bufp->chgQData(oldp+68,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+70,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+72,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+74,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+76,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+78,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+80,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+82,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[7]),64);
        bufp->chgQData(oldp+84,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[8]),64);
        bufp->chgQData(oldp+86,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[9]),64);
        bufp->chgQData(oldp+88,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[10]),64);
        bufp->chgQData(oldp+90,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+92,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+94,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+96,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+98,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+100,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+102,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+104,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[7]),64);
        bufp->chgQData(oldp+106,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[8]),64);
        bufp->chgQData(oldp+108,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[9]),64);
        bufp->chgQData(oldp+110,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[10]),64);
        bufp->chgQData(oldp+112,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+114,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+116,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+118,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+120,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+122,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+124,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+126,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[7]),64);
        bufp->chgQData(oldp+128,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[8]),64);
        bufp->chgQData(oldp+130,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[9]),64);
        bufp->chgQData(oldp+132,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[10]),64);
        bufp->chgQData(oldp+134,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+136,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+138,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+140,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+142,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+144,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+146,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+148,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h),64);
        bufp->chgQData(oldp+150,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j),64);
        bufp->chgQData(oldp+152,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+154,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+156,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h)),64);
        bufp->chgQData(oldp+158,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+160,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+162,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+164,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+166,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+168,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+170,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+172,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+174,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+176,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+178,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+180,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+182,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+184,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+186,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+188,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+190,((0xe1ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+192,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+194,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+196,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+198,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+200,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+202,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+204,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+206,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h),64);
        bufp->chgQData(oldp+208,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+210,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j),64);
        bufp->chgQData(oldp+212,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+214,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+216,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h)),64);
        bufp->chgQData(oldp+218,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+220,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+222,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+224,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+226,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+228,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+230,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+232,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+234,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+236,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+238,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+240,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_rc),64);
        bufp->chgQData(oldp+242,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc),64);
        bufp->chgQData(oldp+244,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r9__x2_o),64);
        bufp->chgQData(oldp+246,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc),64);
        bufp->chgQData(oldp+248,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x4_rc),64);
        bufp->chgQData(oldp+250,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_rc),64);
        bufp->chgQData(oldp+252,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc),64);
        bufp->chgQData(oldp+254,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r10__x2_o),64);
        bufp->chgQData(oldp+256,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc),64);
        bufp->chgQData(oldp+258,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x4_rc),64);
        bufp->chgQData(oldp+260,((0x5aULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r9__x2_o)),64);
        bufp->chgQData(oldp+262,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc)),64);
        bufp->chgQData(oldp+264,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+266,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc)),64);
        bufp->chgQData(oldp+268,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+270,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+272,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__f),64);
        bufp->chgQData(oldp+274,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc))),64);
        bufp->chgQData(oldp+276,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h),64);
        bufp->chgQData(oldp+278,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+280,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j),64);
        bufp->chgQData(oldp+282,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s),64);
        bufp->chgQData(oldp+284,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s),64);
        bufp->chgQData(oldp+286,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h)),64);
        bufp->chgQData(oldp+288,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s),64);
        bufp->chgQData(oldp+290,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+292,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+294,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+296,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+298,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+300,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+302,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+304,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+306,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+308,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+310,((0x4bULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r10__x2_o)),64);
        bufp->chgQData(oldp+312,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc)),64);
        bufp->chgQData(oldp+314,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+316,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc)),64);
        bufp->chgQData(oldp+318,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+320,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+322,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__f),64);
        bufp->chgQData(oldp+324,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc))),64);
        bufp->chgQData(oldp+326,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))),64);
        bufp->chgQData(oldp+328,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+330,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j),64);
        bufp->chgQData(oldp+332,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s),64);
        bufp->chgQData(oldp+334,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s),64);
        bufp->chgQData(oldp+336,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                     ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc) 
                                        & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)))),64);
        bufp->chgQData(oldp+338,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s),64);
        bufp->chgQData(oldp+340,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+342,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+344,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+346,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+348,((((QData)((IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                        ^ 
                                                        ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc)) 
                                                         & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   ((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                     >> 1U) 
                                                    ^ 
                                                    ((~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                                                       >> 1U)) 
                                                     & (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                        >> 1U))))))),64);
        bufp->chgQData(oldp+350,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                        ^ 
                                                        ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc)) 
                                                         & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   ((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                     >> 6U) 
                                                    ^ 
                                                    ((~ 
                                                      (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                                                       >> 6U)) 
                                                     & (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                        >> 6U))))))),64);
        bufp->chgQData(oldp+352,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+354,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+356,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+358,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+360,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+362,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+364,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+366,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+368,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+370,((0xd2ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+372,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+374,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+376,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+378,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+380,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+382,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+384,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+386,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h),64);
        bufp->chgQData(oldp+388,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+390,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j),64);
        bufp->chgQData(oldp+392,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+394,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+396,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h)),64);
        bufp->chgQData(oldp+398,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+400,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+402,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+404,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+406,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+408,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+410,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+412,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+414,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+416,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+418,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+420,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+422,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+424,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+426,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+428,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+430,((0xc3ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+432,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+434,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+436,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+438,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+440,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+442,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+444,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+446,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h),64);
        bufp->chgQData(oldp+448,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+450,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j),64);
        bufp->chgQData(oldp+452,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+454,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+456,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h)),64);
        bufp->chgQData(oldp+458,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+460,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+462,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+464,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+466,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+468,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+470,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+472,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+474,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+476,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+478,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+480,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+482,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+484,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+486,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+488,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+490,((0xb4ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+492,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+494,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+496,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+498,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+500,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+502,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+504,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+506,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h),64);
        bufp->chgQData(oldp+508,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+510,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j),64);
        bufp->chgQData(oldp+512,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+514,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+516,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h)),64);
        bufp->chgQData(oldp+518,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+520,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+522,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+524,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+526,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+528,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+530,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+532,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+534,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+536,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+538,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+540,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+542,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+544,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+546,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+548,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+550,((0xa5ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+552,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+554,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+556,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+558,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+560,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+562,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+564,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+566,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h),64);
        bufp->chgQData(oldp+568,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+570,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j),64);
        bufp->chgQData(oldp+572,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+574,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+576,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h)),64);
        bufp->chgQData(oldp+578,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+580,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+582,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+584,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+586,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+588,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+590,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+592,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+594,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+596,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+598,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+600,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+602,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+604,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+606,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+608,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+610,((0x96ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+612,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+614,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+616,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+618,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+620,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+622,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+624,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+626,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h),64);
        bufp->chgQData(oldp+628,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+630,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j),64);
        bufp->chgQData(oldp+632,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+634,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+636,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h)),64);
        bufp->chgQData(oldp+638,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+640,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+642,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+644,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+646,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+648,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+650,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+652,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+654,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+656,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+658,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+660,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_rc),64);
        bufp->chgQData(oldp+662,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc),64);
        bufp->chgQData(oldp+664,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r7__x2_o),64);
        bufp->chgQData(oldp+666,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc),64);
        bufp->chgQData(oldp+668,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x4_rc),64);
        bufp->chgQData(oldp+670,((0x87ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+672,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+674,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+676,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+678,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+680,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+682,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+684,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+686,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h),64);
        bufp->chgQData(oldp+688,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+690,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j),64);
        bufp->chgQData(oldp+692,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+694,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+696,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h)),64);
        bufp->chgQData(oldp+698,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+700,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+702,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+704,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+706,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+708,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+710,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+712,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+714,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+716,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+718,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+720,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_rc),64);
        bufp->chgQData(oldp+722,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc),64);
        bufp->chgQData(oldp+724,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r8__x2_o),64);
        bufp->chgQData(oldp+726,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc),64);
        bufp->chgQData(oldp+728,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x4_rc),64);
        bufp->chgQData(oldp+730,((0x78ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r7__x2_o)),64);
        bufp->chgQData(oldp+732,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc)),64);
        bufp->chgQData(oldp+734,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+736,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc)),64);
        bufp->chgQData(oldp+738,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+740,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+742,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__f),64);
        bufp->chgQData(oldp+744,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc))),64);
        bufp->chgQData(oldp+746,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h),64);
        bufp->chgQData(oldp+748,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+750,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j),64);
        bufp->chgQData(oldp+752,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s),64);
        bufp->chgQData(oldp+754,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s),64);
        bufp->chgQData(oldp+756,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h)),64);
        bufp->chgQData(oldp+758,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s),64);
        bufp->chgQData(oldp+760,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+762,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+764,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+766,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+768,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+770,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+772,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+774,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+776,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+778,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+780,((0x69ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r8__x2_o)),64);
        bufp->chgQData(oldp+782,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc)),64);
        bufp->chgQData(oldp+784,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+786,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc)),64);
        bufp->chgQData(oldp+788,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+790,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+792,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__f),64);
        bufp->chgQData(oldp+794,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc))),64);
        bufp->chgQData(oldp+796,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h),64);
        bufp->chgQData(oldp+798,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+800,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j),64);
        bufp->chgQData(oldp+802,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s),64);
        bufp->chgQData(oldp+804,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s),64);
        bufp->chgQData(oldp+806,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h)),64);
        bufp->chgQData(oldp+808,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s),64);
        bufp->chgQData(oldp+810,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+812,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+814,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+816,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+818,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+820,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+822,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+824,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+826,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+828,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j 
                                                                           >> 0x29U))))))),64);
    }
    bufp->chgQData(oldp+830,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                              & vlSelfRef.test_ascon_permutation__DOT__x1_i)),64);
    bufp->chgQData(oldp+832,(((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
                              & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->chgQData(oldp+834,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                              & vlSelfRef.test_ascon_permutation__DOT__x3_i)),64);
    bufp->chgQData(oldp+836,(((~ vlSelfRef.test_ascon_permutation__DOT__x3_i) 
                              & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->chgQData(oldp+838,((vlSelfRef.test_ascon_permutation__DOT__x1_i 
                              ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_permutation__DOT__x3_i))),64);
    bufp->chgQData(oldp+840,((vlSelfRef.test_ascon_permutation__DOT__x3_i 
                              ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                 & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
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
