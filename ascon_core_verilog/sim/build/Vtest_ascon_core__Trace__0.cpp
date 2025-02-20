// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_ascon_core__Syms.h"


void Vtest_ascon_core___024root__trace_chg_0_sub_0(Vtest_ascon_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_ascon_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_chg_0\n"); );
    // Init
    Vtest_ascon_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_core___024root*>(voidSelf);
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_ascon_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_ascon_core___024root__trace_chg_0_sub_0(Vtest_ascon_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgQData(oldp+0,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+2,((0xe1ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r0__x2_o)),64);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+4,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1),64);
        bufp->chgQData(oldp+6,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+8,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1 
                                                  >> 1U))))),64);
        bufp->chgQData(oldp+10,((((QData)((IData)((0x3fU 
                                                   & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1))))) 
                                  << 0x3aU) | (0x3ffffffffffffffULL 
                                               & (~ 
                                                  (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1 
                                                   >> 6U))))),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+12,(vlSelfRef.test_ascon_core__DOT__rst_n));
        bufp->chgWData(oldp+13,(vlSelfRef.test_ascon_core__DOT__key),128);
        bufp->chgWData(oldp+17,(vlSelfRef.test_ascon_core__DOT__nonce),128);
        bufp->chgCData(oldp+21,(vlSelfRef.test_ascon_core__DOT__sel_type),2);
        bufp->chgBit(oldp+22,(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt));
        if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
            __Vtemp_3[0U] = vlSelfRef.test_ascon_core__DOT__key[0U];
            __Vtemp_3[1U] = vlSelfRef.test_ascon_core__DOT__key[1U];
            __Vtemp_3[2U] = vlSelfRef.test_ascon_core__DOT__key[2U];
            __Vtemp_3[3U] = vlSelfRef.test_ascon_core__DOT__key[3U];
        } else {
            __Vtemp_3[0U] = 0U;
            __Vtemp_3[1U] = 0U;
            __Vtemp_3[2U] = 0U;
            __Vtemp_3[3U] = 0U;
        }
        bufp->chgWData(oldp+23,(__Vtemp_3),128);
        if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
            __Vtemp_6[0U] = vlSelfRef.test_ascon_core__DOT__nonce[0U];
            __Vtemp_6[1U] = vlSelfRef.test_ascon_core__DOT__nonce[1U];
            __Vtemp_6[2U] = vlSelfRef.test_ascon_core__DOT__nonce[2U];
            __Vtemp_6[3U] = vlSelfRef.test_ascon_core__DOT__nonce[3U];
        } else {
            __Vtemp_6[0U] = 0U;
            __Vtemp_6[1U] = 0U;
            __Vtemp_6[2U] = 0U;
            __Vtemp_6[3U] = 0U;
        }
        bufp->chgWData(oldp+27,(__Vtemp_6),128);
        bufp->chgQData(oldp+31,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? (((QData)((IData)(
                                                      vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__key[0U])))
                                  : 0ULL)),64);
        bufp->chgQData(oldp+33,((0xf0ULL ^ ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                             ? (((QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__key[0U])))
                                             : 0ULL))),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+35,(vlSelfRef.test_ascon_core__DOT__data_length),32);
        bufp->chgIData(oldp+36,(vlSelfRef.test_ascon_core__DOT__data_position),32);
        bufp->chgWData(oldp+37,(vlSelfRef.test_ascon_core__DOT__data_in),128);
        bufp->chgBit(oldp+41,(vlSelfRef.test_ascon_core__DOT__process_en_init));
        bufp->chgBit(oldp+42,(vlSelfRef.test_ascon_core__DOT__process_en_AE_AM));
        bufp->chgBit(oldp+43,(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt));
        bufp->chgBit(oldp+44,(vlSelfRef.test_ascon_core__DOT__process_en_hash));
        bufp->chgBit(oldp+45,(vlSelfRef.test_ascon_core__DOT__process_en_final));
        bufp->chgBit(oldp+46,((vlSelfRef.test_ascon_core__DOT__data_position 
                               > vlSelfRef.test_ascon_core__DOT__data_length)));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U]) | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            __Vtemp_10[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U];
            __Vtemp_10[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U];
            __Vtemp_10[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U];
            __Vtemp_10[3U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U];
        } else {
            if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
                __Vtemp_10[0U] = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out);
                __Vtemp_10[1U] = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                                          >> 0x20U));
            } else {
                __Vtemp_10[0U] = 0U;
                __Vtemp_10[1U] = 0U;
            }
            __Vtemp_10[2U] = 0U;
            __Vtemp_10[3U] = 0U;
        }
        bufp->chgWData(oldp+47,(__Vtemp_10),128);
        bufp->chgQData(oldp+51,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                  : 0ULL)),64);
        bufp->chgQData(oldp+53,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                  : 0ULL)),64);
        bufp->chgQData(oldp+55,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                  : 0ULL)),64);
        bufp->chgQData(oldp+57,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                  : 0ULL)),64);
        bufp->chgQData(oldp+59,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                  : 0ULL)),64);
        bufp->chgQData(oldp+61,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                  : 0ULL)),64);
        bufp->chgQData(oldp+63,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                  : 0ULL)),64);
        bufp->chgQData(oldp+65,((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                   : 0ULL) ^ (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__key[2U]))))),64);
        bufp->chgQData(oldp+67,((0xf0ULL ^ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                              ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                              : 0ULL) 
                                            ^ (((QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__key[2U])))))),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgQData(oldp+69,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last),64);
        bufp->chgQData(oldp+71,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last),64);
        bufp->chgQData(oldp+73,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_encrypt),64);
        bufp->chgQData(oldp+75,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_encrypt),64);
        bufp->chgQData(oldp+77,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_decrypt),64);
        bufp->chgQData(oldp+79,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_decrypt),64);
        bufp->chgQData(oldp+81,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x1_i),64);
        bufp->chgQData(oldp+83,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i),64);
        bufp->chgQData(oldp+85,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x4_i),64);
        bufp->chgQData(oldp+87,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+89,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x1_i) 
                                 & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+91,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i)),64);
        bufp->chgQData(oldp+93,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i) 
                                 & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+95,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x1_i 
                                 ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                    & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i))),64);
        bufp->chgQData(oldp+97,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__h),64);
        bufp->chgQData(oldp+99,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__h)),64);
        bufp->chgQData(oldp+101,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+103,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+105,((0xe1ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r0__x2_o)),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U]) | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgQData(oldp+107,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[0]),64);
        bufp->chgQData(oldp+109,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[1]),64);
        bufp->chgQData(oldp+111,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[2]),64);
        bufp->chgQData(oldp+113,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[3]),64);
        bufp->chgQData(oldp+115,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[4]),64);
        bufp->chgQData(oldp+117,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[5]),64);
        bufp->chgQData(oldp+119,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[6]),64);
        bufp->chgQData(oldp+121,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[7]),64);
        bufp->chgQData(oldp+123,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[8]),64);
        bufp->chgQData(oldp+125,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[9]),64);
        bufp->chgQData(oldp+127,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x2_round[10]),64);
        bufp->chgQData(oldp+129,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x1_i)),64);
        bufp->chgQData(oldp+131,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+133,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT____Vcellinp__ascon_p12__x3_i 
                                  ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgQData(oldp+135,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AE_AM),64);
        bufp->chgQData(oldp+137,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AE_AM),64);
        bufp->chgQData(oldp+139,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2),64);
        bufp->chgQData(oldp+141,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3),64);
        bufp->chgQData(oldp+143,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s4),64);
        bufp->chgQData(oldp+145,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+147,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+149,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2),64);
        bufp->chgQData(oldp+151,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3),64);
        bufp->chgQData(oldp+153,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4),64);
        bufp->chgQData(oldp+155,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s1),64);
        bufp->chgQData(oldp+157,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s4),64);
        bufp->chgQData(oldp+159,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash),64);
        bufp->chgQData(oldp+161,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                  ^ ((((QData)((IData)(
                                                       (0x7ffffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                       << 0x2dU) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                       >> 0x13U)) ^ 
                                     (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                       >> 0x1cU))))),64);
        bufp->chgQData(oldp+163,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                  ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                            >> 0x3dU)))))) 
                                     ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                         << 0x19U) 
                                        | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                      >> 0x27U))))))))),64);
        bufp->chgQData(oldp+165,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h) 
                                  ^ ((((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                       << 0x3fU) | 
                                      (0x7fffffffffffffffULL 
                                       & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                             >> 1U)))) 
                                     ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                         << 0x3aU) 
                                        | (0x3ffffffffffffffULL 
                                           & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                                 >> 6U))))))),64);
        bufp->chgQData(oldp+167,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                  ^ ((((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                       << 0x36U) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                       >> 0xaU)) ^ 
                                     (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                       >> 0x11U))))),64);
        bufp->chgQData(oldp+169,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                  ^ ((((QData)((IData)(
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                                       << 0x39U) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                       >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                   << 0x17U) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+171,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0),64);
        bufp->chgQData(oldp+173,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1),64);
        bufp->chgWData(oldp+175,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last),128);
        bufp->chgQData(oldp+179,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+181,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+183,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+185,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+187,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+189,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+191,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+193,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+195,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+197,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+199,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+201,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+203,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+205,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+207,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+209,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+211,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+213,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+215,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+217,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+219,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+221,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+223,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+225,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+227,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+229,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+231,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+233,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+235,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+237,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+239,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+241,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+243,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+245,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+247,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+249,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+251,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+253,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+255,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+257,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+259,((0xb4ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2)),64);
        bufp->chgQData(oldp+261,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1)),64);
        bufp->chgQData(oldp+263,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+265,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3)),64);
        bufp->chgQData(oldp+267,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+269,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+271,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3))),64);
        bufp->chgQData(oldp+273,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h),64);
        bufp->chgQData(oldp+275,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+277,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j),64);
        bufp->chgQData(oldp+279,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+281,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+283,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h)),64);
        bufp->chgQData(oldp+285,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+287,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+289,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+291,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+293,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+295,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+297,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+299,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+301,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+303,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+305,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+307,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+309,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+311,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+313,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+315,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+317,((0xa5ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+319,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+321,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+323,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+325,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+327,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+329,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+331,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+333,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h),64);
        bufp->chgQData(oldp+335,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+337,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j),64);
        bufp->chgQData(oldp+339,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+341,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+343,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h)),64);
        bufp->chgQData(oldp+345,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+347,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+349,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+351,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+353,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+355,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+357,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+359,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+361,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+363,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+365,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+367,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+369,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+371,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+373,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+375,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+377,((0x96ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+379,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+381,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+383,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+385,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+387,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+389,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+391,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+393,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h),64);
        bufp->chgQData(oldp+395,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+397,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j),64);
        bufp->chgQData(oldp+399,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+401,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+403,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h)),64);
        bufp->chgQData(oldp+405,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+407,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+409,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+411,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+413,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+415,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+417,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+419,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+421,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+423,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+425,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+427,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+429,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+431,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+433,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+435,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+437,((0x87ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+439,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+441,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+443,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+445,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+447,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+449,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+451,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+453,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h),64);
        bufp->chgQData(oldp+455,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+457,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j),64);
        bufp->chgQData(oldp+459,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+461,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+463,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h)),64);
        bufp->chgQData(oldp+465,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+467,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+469,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+471,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+473,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+475,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+477,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+479,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+481,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+483,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+485,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+487,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+489,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+491,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+493,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+495,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+497,((0x78ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+499,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+501,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+503,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+505,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+507,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+509,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+511,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+513,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h),64);
        bufp->chgQData(oldp+515,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+517,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j),64);
        bufp->chgQData(oldp+519,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+521,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+523,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h)),64);
        bufp->chgQData(oldp+525,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+527,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+529,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+531,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+533,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+535,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+537,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+539,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+541,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+543,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+545,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+547,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+549,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+551,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+553,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+555,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+557,((0x69ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+559,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+561,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+563,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+565,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+567,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+569,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+571,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+573,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h),64);
        bufp->chgQData(oldp+575,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+577,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j),64);
        bufp->chgQData(oldp+579,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+581,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+583,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h)),64);
        bufp->chgQData(oldp+585,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+587,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+589,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+591,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+593,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+595,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+597,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+599,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+601,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+603,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+605,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+607,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+609,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+611,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+613,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+615,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+617,((0x5aULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+619,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+621,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+623,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+625,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+627,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+629,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+631,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+633,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h),64);
        bufp->chgQData(oldp+635,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+637,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j),64);
        bufp->chgQData(oldp+639,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+641,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+643,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h)),64);
        bufp->chgQData(oldp+645,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+647,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+649,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+651,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+653,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+655,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+657,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+659,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+661,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+663,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+665,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+667,((0x4bULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+669,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+671,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+673,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+675,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+677,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+679,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+681,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+683,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h),64);
        bufp->chgQData(oldp+685,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+687,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j),64);
        bufp->chgQData(oldp+689,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+691,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+693,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h)),64);
        bufp->chgQData(oldp+695,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+697,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+699,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+701,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+703,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+705,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+707,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+709,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+711,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+713,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+715,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+717,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s3),64);
        bufp->chgQData(oldp+719,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                  ^ ((((QData)((IData)(
                                                       (0x7ffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                       << 0x2dU) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                       >> 0x13U)) ^ 
                                     (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                       >> 0x1cU))))),64);
        bufp->chgQData(oldp+721,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                  ^ (((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                            >> 0x3dU)))))) 
                                     ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                         << 0x19U) 
                                        | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                      >> 0x27U))))))))),64);
        bufp->chgQData(oldp+723,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h) 
                                  ^ ((((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                       << 0x3fU) | 
                                      (0x7fffffffffffffffULL 
                                       & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                             >> 1U)))) 
                                     ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                         << 0x3aU) 
                                        | (0x3ffffffffffffffULL 
                                           & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                 >> 6U))))))),64);
        bufp->chgQData(oldp+725,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                  ^ ((((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x36U) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0xaU)) ^ 
                                     (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0x11U))))),64);
        bufp->chgQData(oldp+727,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                  ^ ((((QData)((IData)(
                                                       (0x7fU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                       << 0x39U) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                       >> 7U)) ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                   << 0x17U) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+729,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.x0_o),64);
        bufp->chgQData(oldp+731,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                  ^ (((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                            >> 0x3dU)))))) 
                                     ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                         << 0x19U) 
                                        | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                      >> 0x27U))))))))),64);
        bufp->chgQData(oldp+733,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h) 
                                  ^ ((((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                       << 0x3fU) | 
                                      (0x7fffffffffffffffULL 
                                       & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                             >> 1U)))) 
                                     ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                         << 0x3aU) 
                                        | (0x3ffffffffffffffULL 
                                           & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                 >> 6U))))))),64);
        bufp->chgQData(oldp+735,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                  ^ ((((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x36U) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0xaU)) ^ 
                                     (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0x11U))))),64);
        bufp->chgQData(oldp+737,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                  ^ ((((QData)((IData)(
                                                       (0x7fU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                       << 0x39U) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                       >> 7U)) ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                   << 0x17U) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+739,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0]),64);
        bufp->chgQData(oldp+741,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1]),64);
        bufp->chgQData(oldp+743,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2]),64);
        bufp->chgQData(oldp+745,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3]),64);
        bufp->chgQData(oldp+747,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4]),64);
        bufp->chgQData(oldp+749,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x0_p8),64);
        bufp->chgQData(oldp+751,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x1_p8),64);
        bufp->chgQData(oldp+753,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x2_p8),64);
        bufp->chgQData(oldp+755,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x3_p8),64);
        bufp->chgQData(oldp+757,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x4_p8),64);
        bufp->chgQData(oldp+759,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                  ^ ((((QData)((IData)(
                                                       (0x7ffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                       << 0x2dU) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                       >> 0x13U)) ^ 
                                     (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                       >> 0x1cU))))),64);
        bufp->chgQData(oldp+761,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                  ^ (((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                            >> 0x3dU)))))) 
                                     ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                         << 0x19U) 
                                        | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                      >> 0x27U))))))))),64);
        bufp->chgQData(oldp+763,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h) 
                                  ^ ((((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                       << 0x3fU) | 
                                      (0x7fffffffffffffffULL 
                                       & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                             >> 1U)))) 
                                     ^ (((QData)((IData)(
                                                         (0x3fU 
                                                          & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                         << 0x3aU) 
                                        | (0x3ffffffffffffffULL 
                                           & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                 >> 6U))))))),64);
        bufp->chgQData(oldp+765,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                  ^ ((((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x36U) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0xaU)) ^ 
                                     (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0x11U))))),64);
        bufp->chgQData(oldp+767,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                  ^ ((((QData)((IData)(
                                                       (0x7fU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                       << 0x39U) | 
                                      (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                       >> 7U)) ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                   << 0x17U) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+769,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s0),64);
        bufp->chgQData(oldp+771,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1),64);
        bufp->chgQData(oldp+773,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+775,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+777,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+779,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+781,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+783,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+785,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+787,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+789,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+791,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+793,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+795,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+797,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+799,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+801,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+803,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+805,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+807,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+809,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+811,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+813,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+815,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+817,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+819,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+821,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+823,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+825,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+827,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+829,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+831,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+833,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+835,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+837,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+839,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+841,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+843,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+845,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+847,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+849,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+851,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+853,((0xb4ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2)),64);
        bufp->chgQData(oldp+855,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1)),64);
        bufp->chgQData(oldp+857,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+859,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3)),64);
        bufp->chgQData(oldp+861,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+863,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+865,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3))),64);
        bufp->chgQData(oldp+867,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h),64);
        bufp->chgQData(oldp+869,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+871,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j),64);
        bufp->chgQData(oldp+873,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+875,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+877,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h)),64);
        bufp->chgQData(oldp+879,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+881,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+883,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+885,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+887,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+889,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+891,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+893,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+895,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+897,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+899,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+901,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+903,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+905,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+907,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+909,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+911,((0xa5ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+913,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+915,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+917,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+919,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+921,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+923,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+925,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+927,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h),64);
        bufp->chgQData(oldp+929,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+931,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j),64);
        bufp->chgQData(oldp+933,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+935,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+937,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h)),64);
        bufp->chgQData(oldp+939,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+941,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+943,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+945,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+947,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+949,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+951,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+953,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+955,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+957,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+959,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+961,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+963,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+965,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+967,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+969,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+971,((0x96ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+973,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+975,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+977,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+979,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+981,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+983,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+985,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+987,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h),64);
        bufp->chgQData(oldp+989,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+991,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j),64);
        bufp->chgQData(oldp+993,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+995,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+997,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h)),64);
        bufp->chgQData(oldp+999,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+1001,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1003,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1005,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1007,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1009,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1011,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1013,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1015,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1017,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1019,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1021,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+1023,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+1025,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+1027,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+1029,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+1031,((0x87ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+1033,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1035,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1037,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1039,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1041,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1043,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+1045,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1047,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h),64);
        bufp->chgQData(oldp+1049,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1051,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j),64);
        bufp->chgQData(oldp+1053,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+1055,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+1057,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h)),64);
        bufp->chgQData(oldp+1059,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+1061,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1063,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1065,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1067,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1069,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1071,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1073,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1075,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1077,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1079,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1081,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+1083,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+1085,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+1087,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+1089,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+1091,((0x78ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+1093,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1095,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1097,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1099,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1101,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1103,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+1105,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1107,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h),64);
        bufp->chgQData(oldp+1109,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1111,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j),64);
        bufp->chgQData(oldp+1113,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+1115,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+1117,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h)),64);
        bufp->chgQData(oldp+1119,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+1121,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1123,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1125,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1127,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1129,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1131,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1133,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1135,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1137,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1139,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1141,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+1143,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+1145,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+1147,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+1149,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+1151,((0x69ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+1153,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1155,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1157,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1159,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1161,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1163,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+1165,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1167,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h),64);
        bufp->chgQData(oldp+1169,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1171,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j),64);
        bufp->chgQData(oldp+1173,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+1175,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+1177,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h)),64);
        bufp->chgQData(oldp+1179,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+1181,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1183,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1185,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1187,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1189,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1191,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1193,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1195,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1197,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1199,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1201,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+1203,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+1205,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+1207,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+1209,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+1211,((0x5aULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+1213,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1215,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1217,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1219,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1221,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1223,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+1225,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1227,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h),64);
        bufp->chgQData(oldp+1229,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1231,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j),64);
        bufp->chgQData(oldp+1233,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+1235,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+1237,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h)),64);
        bufp->chgQData(oldp+1239,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+1241,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1243,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1245,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1247,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1249,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1251,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1253,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1255,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1257,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1259,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1261,((0x4bULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT____Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+1263,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1265,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1267,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1269,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1271,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1273,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+1275,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1277,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h),64);
        bufp->chgQData(oldp+1279,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1281,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j),64);
        bufp->chgQData(oldp+1283,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+1285,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+1287,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h)),64);
        bufp->chgQData(oldp+1289,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+1291,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1293,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1295,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1297,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1299,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1301,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1303,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1305,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1307,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1309,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1311,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x0_o),64);
        bufp->chgQData(oldp+1313,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x1_o),64);
        bufp->chgQData(oldp+1315,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x2_o),64);
        bufp->chgQData(oldp+1317,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x3_o),64);
        bufp->chgQData(oldp+1319,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x4_o),64);
        bufp->chgQData(oldp+1321,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[0]),64);
        bufp->chgQData(oldp+1323,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[1]),64);
        bufp->chgQData(oldp+1325,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[2]),64);
        bufp->chgQData(oldp+1327,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[3]),64);
        bufp->chgQData(oldp+1329,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[4]),64);
        bufp->chgQData(oldp+1331,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[5]),64);
        bufp->chgQData(oldp+1333,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[6]),64);
        bufp->chgQData(oldp+1335,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[7]),64);
        bufp->chgQData(oldp+1337,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[8]),64);
        bufp->chgQData(oldp+1339,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[9]),64);
        bufp->chgQData(oldp+1341,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x0_round[10]),64);
        bufp->chgQData(oldp+1343,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[0]),64);
        bufp->chgQData(oldp+1345,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[1]),64);
        bufp->chgQData(oldp+1347,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[2]),64);
        bufp->chgQData(oldp+1349,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[3]),64);
        bufp->chgQData(oldp+1351,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[4]),64);
        bufp->chgQData(oldp+1353,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[5]),64);
        bufp->chgQData(oldp+1355,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[6]),64);
        bufp->chgQData(oldp+1357,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[7]),64);
        bufp->chgQData(oldp+1359,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[8]),64);
        bufp->chgQData(oldp+1361,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[9]),64);
        bufp->chgQData(oldp+1363,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x1_round[10]),64);
        bufp->chgQData(oldp+1365,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[0]),64);
        bufp->chgQData(oldp+1367,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[1]),64);
        bufp->chgQData(oldp+1369,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[2]),64);
        bufp->chgQData(oldp+1371,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[3]),64);
        bufp->chgQData(oldp+1373,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[4]),64);
        bufp->chgQData(oldp+1375,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[5]),64);
        bufp->chgQData(oldp+1377,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[6]),64);
        bufp->chgQData(oldp+1379,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[7]),64);
        bufp->chgQData(oldp+1381,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[8]),64);
        bufp->chgQData(oldp+1383,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[9]),64);
        bufp->chgQData(oldp+1385,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x3_round[10]),64);
        bufp->chgQData(oldp+1387,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[0]),64);
        bufp->chgQData(oldp+1389,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[1]),64);
        bufp->chgQData(oldp+1391,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[2]),64);
        bufp->chgQData(oldp+1393,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[3]),64);
        bufp->chgQData(oldp+1395,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[4]),64);
        bufp->chgQData(oldp+1397,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[5]),64);
        bufp->chgQData(oldp+1399,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[6]),64);
        bufp->chgQData(oldp+1401,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[7]),64);
        bufp->chgQData(oldp+1403,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[8]),64);
        bufp->chgQData(oldp+1405,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[9]),64);
        bufp->chgQData(oldp+1407,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__x4_round[10]),64);
        bufp->chgQData(oldp+1409,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+1411,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+1413,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+1415,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+1417,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__f),64);
        bufp->chgQData(oldp+1419,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__j),64);
        bufp->chgQData(oldp+1421,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+1423,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+1425,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+1427,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1429,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1431,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1433,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1435,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1437,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1439,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1441,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1443,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+1445,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+1447,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+1449,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+1451,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+1453,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1455,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1457,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1459,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1461,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1463,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__f),64);
        bufp->chgQData(oldp+1465,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1467,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__h),64);
        bufp->chgQData(oldp+1469,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1471,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__j),64);
        bufp->chgQData(oldp+1473,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+1475,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+1477,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__h)),64);
        bufp->chgQData(oldp+1479,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+1481,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1483,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1485,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1487,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1489,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1491,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1493,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1495,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1497,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1499,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1501,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_rc),64);
        bufp->chgQData(oldp+1503,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc),64);
        bufp->chgQData(oldp+1505,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r9__x2_o),64);
        bufp->chgQData(oldp+1507,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc),64);
        bufp->chgQData(oldp+1509,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x4_rc),64);
        bufp->chgQData(oldp+1511,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_rc),64);
        bufp->chgQData(oldp+1513,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc),64);
        bufp->chgQData(oldp+1515,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r10__x2_o),64);
        bufp->chgQData(oldp+1517,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc),64);
        bufp->chgQData(oldp+1519,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x4_rc),64);
        bufp->chgQData(oldp+1521,((0x5aULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r9__x2_o)),64);
        bufp->chgQData(oldp+1523,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1525,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1527,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1529,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1531,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1533,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__f),64);
        bufp->chgQData(oldp+1535,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1537,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__h),64);
        bufp->chgQData(oldp+1539,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1541,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__j),64);
        bufp->chgQData(oldp+1543,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s),64);
        bufp->chgQData(oldp+1545,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s),64);
        bufp->chgQData(oldp+1547,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__h)),64);
        bufp->chgQData(oldp+1549,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s),64);
        bufp->chgQData(oldp+1551,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1553,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1555,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1557,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1559,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1561,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1563,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1565,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1567,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1569,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1571,((0x4bULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r10__x2_o)),64);
        bufp->chgQData(oldp+1573,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1575,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1577,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1579,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1581,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1583,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__f),64);
        bufp->chgQData(oldp+1585,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1587,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__h),64);
        bufp->chgQData(oldp+1589,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1591,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__j),64);
        bufp->chgQData(oldp+1593,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s),64);
        bufp->chgQData(oldp+1595,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s),64);
        bufp->chgQData(oldp+1597,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__h)),64);
        bufp->chgQData(oldp+1599,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s),64);
        bufp->chgQData(oldp+1601,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1603,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1605,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1607,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1609,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1611,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1613,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1615,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1617,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1619,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1621,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+1623,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+1625,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+1627,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+1629,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+1631,((0xd2ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+1633,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1635,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1637,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1639,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1641,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1643,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__f),64);
        bufp->chgQData(oldp+1645,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1647,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__h),64);
        bufp->chgQData(oldp+1649,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1651,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__j),64);
        bufp->chgQData(oldp+1653,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+1655,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+1657,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__h)),64);
        bufp->chgQData(oldp+1659,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+1661,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1663,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1665,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1667,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1669,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1671,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1673,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1675,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1677,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1679,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1681,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+1683,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+1685,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+1687,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+1689,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+1691,((0xc3ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+1693,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1695,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1697,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1699,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1701,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1703,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__f),64);
        bufp->chgQData(oldp+1705,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1707,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__h),64);
        bufp->chgQData(oldp+1709,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1711,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__j),64);
        bufp->chgQData(oldp+1713,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+1715,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+1717,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__h)),64);
        bufp->chgQData(oldp+1719,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+1721,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1723,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1725,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1727,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1729,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1731,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1733,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1735,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1737,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1739,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1741,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+1743,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+1745,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+1747,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+1749,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+1751,((0xb4ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+1753,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1755,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1757,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1759,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1761,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1763,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__f),64);
        bufp->chgQData(oldp+1765,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1767,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__h),64);
        bufp->chgQData(oldp+1769,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1771,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__j),64);
        bufp->chgQData(oldp+1773,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+1775,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+1777,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__h)),64);
        bufp->chgQData(oldp+1779,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+1781,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1783,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1785,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1787,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1789,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1791,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1793,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1795,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1797,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1799,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1801,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+1803,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+1805,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+1807,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+1809,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+1811,((0xa5ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+1813,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1815,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1817,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1819,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1821,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1823,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__f),64);
        bufp->chgQData(oldp+1825,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1827,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__h),64);
        bufp->chgQData(oldp+1829,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1831,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__j),64);
        bufp->chgQData(oldp+1833,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+1835,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+1837,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__h)),64);
        bufp->chgQData(oldp+1839,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+1841,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1843,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1845,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1847,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1849,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1851,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1853,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1855,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1857,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1859,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1861,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+1863,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+1865,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+1867,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+1869,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+1871,((0x96ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+1873,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1875,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1877,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1879,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1881,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1883,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__f),64);
        bufp->chgQData(oldp+1885,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1887,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__h),64);
        bufp->chgQData(oldp+1889,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1891,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__j),64);
        bufp->chgQData(oldp+1893,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+1895,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+1897,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__h)),64);
        bufp->chgQData(oldp+1899,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+1901,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1903,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1905,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1907,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1909,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1911,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1913,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1915,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1917,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1919,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1921,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_rc),64);
        bufp->chgQData(oldp+1923,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc),64);
        bufp->chgQData(oldp+1925,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r7__x2_o),64);
        bufp->chgQData(oldp+1927,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc),64);
        bufp->chgQData(oldp+1929,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x4_rc),64);
        bufp->chgQData(oldp+1931,((0x87ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+1933,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1935,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1937,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1939,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1941,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1943,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__f),64);
        bufp->chgQData(oldp+1945,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1947,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__h),64);
        bufp->chgQData(oldp+1949,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1951,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__j),64);
        bufp->chgQData(oldp+1953,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+1955,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+1957,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__h)),64);
        bufp->chgQData(oldp+1959,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+1961,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1963,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1965,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1967,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1969,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1971,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1973,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1975,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1977,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1979,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1981,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_rc),64);
        bufp->chgQData(oldp+1983,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc),64);
        bufp->chgQData(oldp+1985,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r8__x2_o),64);
        bufp->chgQData(oldp+1987,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc),64);
        bufp->chgQData(oldp+1989,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x4_rc),64);
        bufp->chgQData(oldp+1991,((0x78ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r7__x2_o)),64);
        bufp->chgQData(oldp+1993,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1995,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1997,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1999,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2001,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2003,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__f),64);
        bufp->chgQData(oldp+2005,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2007,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__h),64);
        bufp->chgQData(oldp+2009,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2011,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__j),64);
        bufp->chgQData(oldp+2013,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s),64);
        bufp->chgQData(oldp+2015,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s),64);
        bufp->chgQData(oldp+2017,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__h)),64);
        bufp->chgQData(oldp+2019,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s),64);
        bufp->chgQData(oldp+2021,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2023,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2025,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2027,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2029,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2031,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2033,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2035,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2037,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2039,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2041,((0x69ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__Vcellout__r8__x2_o)),64);
        bufp->chgQData(oldp+2043,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2045,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2047,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2049,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2051,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2053,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__f),64);
        bufp->chgQData(oldp+2055,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2057,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__h),64);
        bufp->chgQData(oldp+2059,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2061,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__j),64);
        bufp->chgQData(oldp+2063,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s),64);
        bufp->chgQData(oldp+2065,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s),64);
        bufp->chgQData(oldp+2067,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__h)),64);
        bufp->chgQData(oldp+2069,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s),64);
        bufp->chgQData(oldp+2071,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2073,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2075,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2077,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2079,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2081,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2083,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2085,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2087,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2089,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2091,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[0]),64);
        bufp->chgQData(oldp+2093,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[1]),64);
        bufp->chgQData(oldp+2095,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[2]),64);
        bufp->chgQData(oldp+2097,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[3]),64);
        bufp->chgQData(oldp+2099,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[4]),64);
        bufp->chgQData(oldp+2101,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[5]),64);
        bufp->chgQData(oldp+2103,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[6]),64);
        bufp->chgQData(oldp+2105,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[7]),64);
        bufp->chgQData(oldp+2107,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[8]),64);
        bufp->chgQData(oldp+2109,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[9]),64);
        bufp->chgQData(oldp+2111,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x0_round[10]),64);
        bufp->chgQData(oldp+2113,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[0]),64);
        bufp->chgQData(oldp+2115,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[1]),64);
        bufp->chgQData(oldp+2117,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[2]),64);
        bufp->chgQData(oldp+2119,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[3]),64);
        bufp->chgQData(oldp+2121,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[4]),64);
        bufp->chgQData(oldp+2123,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[5]),64);
        bufp->chgQData(oldp+2125,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[6]),64);
        bufp->chgQData(oldp+2127,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[7]),64);
        bufp->chgQData(oldp+2129,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[8]),64);
        bufp->chgQData(oldp+2131,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[9]),64);
        bufp->chgQData(oldp+2133,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x1_round[10]),64);
        bufp->chgQData(oldp+2135,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[0]),64);
        bufp->chgQData(oldp+2137,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[1]),64);
        bufp->chgQData(oldp+2139,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[2]),64);
        bufp->chgQData(oldp+2141,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[3]),64);
        bufp->chgQData(oldp+2143,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[4]),64);
        bufp->chgQData(oldp+2145,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[5]),64);
        bufp->chgQData(oldp+2147,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[6]),64);
        bufp->chgQData(oldp+2149,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[7]),64);
        bufp->chgQData(oldp+2151,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[8]),64);
        bufp->chgQData(oldp+2153,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[9]),64);
        bufp->chgQData(oldp+2155,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x2_round[10]),64);
        bufp->chgQData(oldp+2157,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[0]),64);
        bufp->chgQData(oldp+2159,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[1]),64);
        bufp->chgQData(oldp+2161,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[2]),64);
        bufp->chgQData(oldp+2163,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[3]),64);
        bufp->chgQData(oldp+2165,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[4]),64);
        bufp->chgQData(oldp+2167,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[5]),64);
        bufp->chgQData(oldp+2169,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[6]),64);
        bufp->chgQData(oldp+2171,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[7]),64);
        bufp->chgQData(oldp+2173,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[8]),64);
        bufp->chgQData(oldp+2175,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[9]),64);
        bufp->chgQData(oldp+2177,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x3_round[10]),64);
        bufp->chgQData(oldp+2179,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[0]),64);
        bufp->chgQData(oldp+2181,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[1]),64);
        bufp->chgQData(oldp+2183,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[2]),64);
        bufp->chgQData(oldp+2185,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[3]),64);
        bufp->chgQData(oldp+2187,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[4]),64);
        bufp->chgQData(oldp+2189,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[5]),64);
        bufp->chgQData(oldp+2191,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[6]),64);
        bufp->chgQData(oldp+2193,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[7]),64);
        bufp->chgQData(oldp+2195,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[8]),64);
        bufp->chgQData(oldp+2197,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[9]),64);
        bufp->chgQData(oldp+2199,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__x4_round[10]),64);
        bufp->chgQData(oldp+2201,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+2203,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+2205,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+2207,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+2209,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+2211,((0xf0ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s2)),64);
        bufp->chgQData(oldp+2213,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1)),64);
        bufp->chgQData(oldp+2215,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2217,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3)),64);
        bufp->chgQData(oldp+2219,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2221,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2223,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__f),64);
        bufp->chgQData(oldp+2225,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s1 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3))),64);
        bufp->chgQData(oldp+2227,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__h),64);
        bufp->chgQData(oldp+2229,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__s3 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2231,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__j),64);
        bufp->chgQData(oldp+2233,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+2235,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+2237,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__h)),64);
        bufp->chgQData(oldp+2239,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+2241,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2243,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2245,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2247,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2249,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2251,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2253,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2255,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2257,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2259,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2261,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+2263,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+2265,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+2267,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+2269,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+2271,((0xe1ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+2273,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2275,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2277,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2279,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2281,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2283,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__f),64);
        bufp->chgQData(oldp+2285,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2287,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__h),64);
        bufp->chgQData(oldp+2289,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2291,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__j),64);
        bufp->chgQData(oldp+2293,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+2295,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+2297,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__h)),64);
        bufp->chgQData(oldp+2299,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+2301,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2303,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2305,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2307,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2309,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2311,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2313,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2315,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2317,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2319,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2321,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x0_rc),64);
        bufp->chgQData(oldp+2323,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc),64);
        bufp->chgQData(oldp+2325,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r9__x2_o),64);
        bufp->chgQData(oldp+2327,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc),64);
        bufp->chgQData(oldp+2329,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x4_rc),64);
        bufp->chgQData(oldp+2331,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_rc),64);
        bufp->chgQData(oldp+2333,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc),64);
        bufp->chgQData(oldp+2335,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r10__x2_o),64);
        bufp->chgQData(oldp+2337,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc),64);
        bufp->chgQData(oldp+2339,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x4_rc),64);
        bufp->chgQData(oldp+2341,((0x5aULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r9__x2_o)),64);
        bufp->chgQData(oldp+2343,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2345,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2347,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2349,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2351,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2353,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__f),64);
        bufp->chgQData(oldp+2355,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2357,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__h),64);
        bufp->chgQData(oldp+2359,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2361,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__j),64);
        bufp->chgQData(oldp+2363,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s),64);
        bufp->chgQData(oldp+2365,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s),64);
        bufp->chgQData(oldp+2367,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__h)),64);
        bufp->chgQData(oldp+2369,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s),64);
        bufp->chgQData(oldp+2371,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2373,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2375,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2377,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2379,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2381,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2383,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2385,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2387,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2389,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2391,((0x4bULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r10__x2_o)),64);
        bufp->chgQData(oldp+2393,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2395,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2397,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2399,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2401,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2403,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__f),64);
        bufp->chgQData(oldp+2405,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2407,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h),64);
        bufp->chgQData(oldp+2409,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2411,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j),64);
        bufp->chgQData(oldp+2413,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s),64);
        bufp->chgQData(oldp+2415,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s),64);
        bufp->chgQData(oldp+2417,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h)),64);
        bufp->chgQData(oldp+2419,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s),64);
        bufp->chgQData(oldp+2421,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2423,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2425,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2427,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2429,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2431,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2433,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2435,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2437,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2439,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2441,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+2443,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+2445,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+2447,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+2449,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+2451,((0xd2ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+2453,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2455,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2457,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2459,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2461,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2463,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__f),64);
        bufp->chgQData(oldp+2465,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2467,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__h),64);
        bufp->chgQData(oldp+2469,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2471,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__j),64);
        bufp->chgQData(oldp+2473,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+2475,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+2477,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__h)),64);
        bufp->chgQData(oldp+2479,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+2481,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2483,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2485,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2487,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2489,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2491,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2493,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2495,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2497,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2499,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2501,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+2503,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+2505,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+2507,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+2509,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+2511,((0xc3ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+2513,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2515,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2517,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2519,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2521,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2523,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__f),64);
        bufp->chgQData(oldp+2525,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2527,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__h),64);
        bufp->chgQData(oldp+2529,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2531,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__j),64);
        bufp->chgQData(oldp+2533,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+2535,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+2537,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__h)),64);
        bufp->chgQData(oldp+2539,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+2541,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2543,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2545,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2547,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2549,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2551,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2553,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2555,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2557,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2559,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2561,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+2563,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+2565,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+2567,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+2569,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+2571,((0xb4ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+2573,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2575,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2577,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2579,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2581,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2583,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__f),64);
        bufp->chgQData(oldp+2585,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2587,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__h),64);
        bufp->chgQData(oldp+2589,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2591,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__j),64);
        bufp->chgQData(oldp+2593,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+2595,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+2597,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__h)),64);
        bufp->chgQData(oldp+2599,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+2601,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2603,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2605,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2607,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2609,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2611,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2613,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2615,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2617,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2619,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2621,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+2623,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+2625,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+2627,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+2629,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+2631,((0xa5ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+2633,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2635,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2637,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2639,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2641,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2643,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__f),64);
        bufp->chgQData(oldp+2645,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2647,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__h),64);
        bufp->chgQData(oldp+2649,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2651,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__j),64);
        bufp->chgQData(oldp+2653,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+2655,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+2657,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__h)),64);
        bufp->chgQData(oldp+2659,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+2661,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2663,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2665,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2667,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2669,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2671,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2673,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2675,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2677,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2679,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2681,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+2683,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+2685,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+2687,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+2689,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+2691,((0x96ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+2693,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2695,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2697,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2699,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2701,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2703,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__f),64);
        bufp->chgQData(oldp+2705,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2707,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__h),64);
        bufp->chgQData(oldp+2709,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2711,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__j),64);
        bufp->chgQData(oldp+2713,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+2715,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+2717,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__h)),64);
        bufp->chgQData(oldp+2719,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+2721,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2723,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2725,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2727,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2729,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2731,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2733,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2735,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2737,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2739,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2741,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x0_rc),64);
        bufp->chgQData(oldp+2743,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc),64);
        bufp->chgQData(oldp+2745,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r7__x2_o),64);
        bufp->chgQData(oldp+2747,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc),64);
        bufp->chgQData(oldp+2749,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x4_rc),64);
        bufp->chgQData(oldp+2751,((0x87ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+2753,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2755,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2757,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2759,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2761,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2763,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__f),64);
        bufp->chgQData(oldp+2765,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2767,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__h),64);
        bufp->chgQData(oldp+2769,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2771,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__j),64);
        bufp->chgQData(oldp+2773,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+2775,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+2777,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__h)),64);
        bufp->chgQData(oldp+2779,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+2781,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2783,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2785,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2787,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2789,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2791,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2793,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2795,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2797,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2799,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2801,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x0_rc),64);
        bufp->chgQData(oldp+2803,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc),64);
        bufp->chgQData(oldp+2805,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r8__x2_o),64);
        bufp->chgQData(oldp+2807,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc),64);
        bufp->chgQData(oldp+2809,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x4_rc),64);
        bufp->chgQData(oldp+2811,((0x78ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r7__x2_o)),64);
        bufp->chgQData(oldp+2813,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2815,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2817,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2819,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2821,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2823,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__f),64);
        bufp->chgQData(oldp+2825,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2827,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__h),64);
        bufp->chgQData(oldp+2829,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2831,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__j),64);
        bufp->chgQData(oldp+2833,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s),64);
        bufp->chgQData(oldp+2835,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s),64);
        bufp->chgQData(oldp+2837,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__h)),64);
        bufp->chgQData(oldp+2839,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s),64);
        bufp->chgQData(oldp+2841,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2843,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2845,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2847,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2849,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2851,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2853,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2855,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2857,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2859,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2861,((0x69ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__Vcellout__r8__x2_o)),64);
        bufp->chgQData(oldp+2863,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc)),64);
        bufp->chgQData(oldp+2865,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+2867,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc)),64);
        bufp->chgQData(oldp+2869,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+2871,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+2873,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__f),64);
        bufp->chgQData(oldp+2875,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc))),64);
        bufp->chgQData(oldp+2877,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__h),64);
        bufp->chgQData(oldp+2879,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+2881,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__j),64);
        bufp->chgQData(oldp+2883,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s),64);
        bufp->chgQData(oldp+2885,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s),64);
        bufp->chgQData(oldp+2887,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__h)),64);
        bufp->chgQData(oldp+2889,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s),64);
        bufp->chgQData(oldp+2891,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+2893,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+2895,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+2897,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+2899,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+2901,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+2903,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+2905,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+2907,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+2909,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+2911,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[0]),64);
        bufp->chgQData(oldp+2913,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[1]),64);
        bufp->chgQData(oldp+2915,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[2]),64);
        bufp->chgQData(oldp+2917,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[3]),64);
        bufp->chgQData(oldp+2919,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[4]),64);
        bufp->chgQData(oldp+2921,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[5]),64);
        bufp->chgQData(oldp+2923,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[6]),64);
        bufp->chgQData(oldp+2925,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[7]),64);
        bufp->chgQData(oldp+2927,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[8]),64);
        bufp->chgQData(oldp+2929,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[9]),64);
        bufp->chgQData(oldp+2931,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x0_round[10]),64);
        bufp->chgQData(oldp+2933,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[0]),64);
        bufp->chgQData(oldp+2935,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[1]),64);
        bufp->chgQData(oldp+2937,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[2]),64);
        bufp->chgQData(oldp+2939,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[3]),64);
        bufp->chgQData(oldp+2941,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[4]),64);
        bufp->chgQData(oldp+2943,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[5]),64);
        bufp->chgQData(oldp+2945,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[6]),64);
        bufp->chgQData(oldp+2947,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[7]),64);
        bufp->chgQData(oldp+2949,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[8]),64);
        bufp->chgQData(oldp+2951,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[9]),64);
        bufp->chgQData(oldp+2953,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x1_round[10]),64);
        bufp->chgQData(oldp+2955,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[0]),64);
        bufp->chgQData(oldp+2957,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[1]),64);
        bufp->chgQData(oldp+2959,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[2]),64);
        bufp->chgQData(oldp+2961,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[3]),64);
        bufp->chgQData(oldp+2963,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[4]),64);
        bufp->chgQData(oldp+2965,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[5]),64);
        bufp->chgQData(oldp+2967,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[6]),64);
        bufp->chgQData(oldp+2969,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[7]),64);
        bufp->chgQData(oldp+2971,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[8]),64);
        bufp->chgQData(oldp+2973,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[9]),64);
        bufp->chgQData(oldp+2975,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x2_round[10]),64);
        bufp->chgQData(oldp+2977,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[0]),64);
        bufp->chgQData(oldp+2979,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[1]),64);
        bufp->chgQData(oldp+2981,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[2]),64);
        bufp->chgQData(oldp+2983,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[3]),64);
        bufp->chgQData(oldp+2985,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[4]),64);
        bufp->chgQData(oldp+2987,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[5]),64);
        bufp->chgQData(oldp+2989,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[6]),64);
        bufp->chgQData(oldp+2991,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[7]),64);
        bufp->chgQData(oldp+2993,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[8]),64);
        bufp->chgQData(oldp+2995,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[9]),64);
        bufp->chgQData(oldp+2997,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x3_round[10]),64);
        bufp->chgQData(oldp+2999,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[0]),64);
        bufp->chgQData(oldp+3001,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[1]),64);
        bufp->chgQData(oldp+3003,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[2]),64);
        bufp->chgQData(oldp+3005,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[3]),64);
        bufp->chgQData(oldp+3007,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[4]),64);
        bufp->chgQData(oldp+3009,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[5]),64);
        bufp->chgQData(oldp+3011,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[6]),64);
        bufp->chgQData(oldp+3013,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[7]),64);
        bufp->chgQData(oldp+3015,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[8]),64);
        bufp->chgQData(oldp+3017,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[9]),64);
        bufp->chgQData(oldp+3019,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__x4_round[10]),64);
        bufp->chgQData(oldp+3021,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+3023,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+3025,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+3027,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+3029,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+3031,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s1)),64);
        bufp->chgQData(oldp+3033,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3035,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s3)),64);
        bufp->chgQData(oldp+3037,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s3) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3039,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3041,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__f),64);
        bufp->chgQData(oldp+3043,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s1 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s3))),64);
        bufp->chgQData(oldp+3045,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__h),64);
        bufp->chgQData(oldp+3047,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__s3 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3049,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__j),64);
        bufp->chgQData(oldp+3051,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+3053,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+3055,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__h)),64);
        bufp->chgQData(oldp+3057,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+3059,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3061,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3063,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3065,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3067,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3069,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3071,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3073,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3075,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3077,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3079,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+3081,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+3083,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+3085,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+3087,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+3089,((0xe1ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+3091,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3093,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3095,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3097,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3099,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3101,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__f),64);
        bufp->chgQData(oldp+3103,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3105,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__h),64);
        bufp->chgQData(oldp+3107,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3109,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__j),64);
        bufp->chgQData(oldp+3111,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+3113,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+3115,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__h)),64);
        bufp->chgQData(oldp+3117,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+3119,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3121,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3123,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3125,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3127,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3129,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3131,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3133,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3135,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3137,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3139,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_rc),64);
        bufp->chgQData(oldp+3141,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc),64);
        bufp->chgQData(oldp+3143,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r9__x2_o),64);
        bufp->chgQData(oldp+3145,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc),64);
        bufp->chgQData(oldp+3147,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x4_rc),64);
        bufp->chgQData(oldp+3149,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_rc),64);
        bufp->chgQData(oldp+3151,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc),64);
        bufp->chgQData(oldp+3153,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r10__x2_o),64);
        bufp->chgQData(oldp+3155,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc),64);
        bufp->chgQData(oldp+3157,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x4_rc),64);
        bufp->chgQData(oldp+3159,((0x5aULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r9__x2_o)),64);
        bufp->chgQData(oldp+3161,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3163,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3165,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3167,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3169,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3171,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__f),64);
        bufp->chgQData(oldp+3173,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3175,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__h),64);
        bufp->chgQData(oldp+3177,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3179,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__j),64);
        bufp->chgQData(oldp+3181,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s),64);
        bufp->chgQData(oldp+3183,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s),64);
        bufp->chgQData(oldp+3185,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__h)),64);
        bufp->chgQData(oldp+3187,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s),64);
        bufp->chgQData(oldp+3189,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3191,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3193,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3195,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3197,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3199,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3201,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3203,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3205,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3207,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3209,((0x4bULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r10__x2_o)),64);
        bufp->chgQData(oldp+3211,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3213,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3215,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3217,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3219,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3221,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__f),64);
        bufp->chgQData(oldp+3223,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3225,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h),64);
        bufp->chgQData(oldp+3227,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3229,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j),64);
        bufp->chgQData(oldp+3231,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s),64);
        bufp->chgQData(oldp+3233,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s),64);
        bufp->chgQData(oldp+3235,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h)),64);
        bufp->chgQData(oldp+3237,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s),64);
        bufp->chgQData(oldp+3239,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3241,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3243,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3245,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3247,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3249,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3251,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3253,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3255,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3257,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3259,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+3261,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+3263,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+3265,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+3267,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+3269,((0xd2ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+3271,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3273,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3275,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3277,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3279,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3281,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__f),64);
        bufp->chgQData(oldp+3283,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3285,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__h),64);
        bufp->chgQData(oldp+3287,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3289,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__j),64);
        bufp->chgQData(oldp+3291,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+3293,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+3295,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__h)),64);
        bufp->chgQData(oldp+3297,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+3299,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3301,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3303,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3305,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3307,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3309,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3311,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3313,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3315,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3317,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3319,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+3321,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+3323,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+3325,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+3327,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+3329,((0xc3ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+3331,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3333,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3335,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3337,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3339,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3341,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__f),64);
        bufp->chgQData(oldp+3343,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3345,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__h),64);
        bufp->chgQData(oldp+3347,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3349,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__j),64);
        bufp->chgQData(oldp+3351,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+3353,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+3355,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__h)),64);
        bufp->chgQData(oldp+3357,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+3359,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3361,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3363,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3365,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3367,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3369,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3371,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3373,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3375,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3377,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3379,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+3381,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+3383,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+3385,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+3387,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+3389,((0xb4ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+3391,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3393,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3395,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3397,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3399,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3401,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__f),64);
        bufp->chgQData(oldp+3403,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3405,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__h),64);
        bufp->chgQData(oldp+3407,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3409,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__j),64);
        bufp->chgQData(oldp+3411,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+3413,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+3415,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__h)),64);
        bufp->chgQData(oldp+3417,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+3419,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3421,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3423,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3425,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3427,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3429,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3431,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3433,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3435,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3437,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3439,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+3441,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+3443,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+3445,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+3447,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+3449,((0xa5ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+3451,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3453,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3455,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3457,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3459,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3461,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__f),64);
        bufp->chgQData(oldp+3463,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3465,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__h),64);
        bufp->chgQData(oldp+3467,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3469,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__j),64);
        bufp->chgQData(oldp+3471,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+3473,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+3475,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__h)),64);
        bufp->chgQData(oldp+3477,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+3479,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3481,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3483,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3485,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3487,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3489,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3491,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3493,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3495,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3497,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3499,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+3501,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+3503,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+3505,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+3507,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+3509,((0x96ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+3511,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3513,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3515,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3517,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3519,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3521,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__f),64);
        bufp->chgQData(oldp+3523,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3525,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__h),64);
        bufp->chgQData(oldp+3527,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3529,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__j),64);
        bufp->chgQData(oldp+3531,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+3533,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+3535,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__h)),64);
        bufp->chgQData(oldp+3537,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+3539,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3541,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3543,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3545,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3547,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3549,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3551,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3553,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3555,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3557,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3559,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_rc),64);
        bufp->chgQData(oldp+3561,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc),64);
        bufp->chgQData(oldp+3563,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r7__x2_o),64);
        bufp->chgQData(oldp+3565,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc),64);
        bufp->chgQData(oldp+3567,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x4_rc),64);
        bufp->chgQData(oldp+3569,((0x87ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+3571,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3573,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3575,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3577,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3579,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3581,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__f),64);
        bufp->chgQData(oldp+3583,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3585,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__h),64);
        bufp->chgQData(oldp+3587,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3589,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__j),64);
        bufp->chgQData(oldp+3591,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+3593,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+3595,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__h)),64);
        bufp->chgQData(oldp+3597,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+3599,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3601,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3603,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3605,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3607,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3609,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3611,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3613,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3615,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3617,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3619,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_rc),64);
        bufp->chgQData(oldp+3621,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc),64);
        bufp->chgQData(oldp+3623,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r8__x2_o),64);
        bufp->chgQData(oldp+3625,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc),64);
        bufp->chgQData(oldp+3627,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x4_rc),64);
        bufp->chgQData(oldp+3629,((0x78ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r7__x2_o)),64);
        bufp->chgQData(oldp+3631,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3633,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3635,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3637,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3639,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3641,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__f),64);
        bufp->chgQData(oldp+3643,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3645,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__h),64);
        bufp->chgQData(oldp+3647,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3649,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__j),64);
        bufp->chgQData(oldp+3651,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s),64);
        bufp->chgQData(oldp+3653,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s),64);
        bufp->chgQData(oldp+3655,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__h)),64);
        bufp->chgQData(oldp+3657,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s),64);
        bufp->chgQData(oldp+3659,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3661,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3663,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3665,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3667,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3669,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3671,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3673,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3675,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3677,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3679,((0x69ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__Vcellout__r8__x2_o)),64);
        bufp->chgQData(oldp+3681,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3683,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3685,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3687,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3689,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3691,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__f),64);
        bufp->chgQData(oldp+3693,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3695,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__h),64);
        bufp->chgQData(oldp+3697,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3699,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__j),64);
        bufp->chgQData(oldp+3701,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s),64);
        bufp->chgQData(oldp+3703,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s),64);
        bufp->chgQData(oldp+3705,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__h)),64);
        bufp->chgQData(oldp+3707,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s),64);
        bufp->chgQData(oldp+3709,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3711,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3713,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3715,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3717,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3719,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3721,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3723,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3725,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3727,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3729,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[0]),64);
        bufp->chgQData(oldp+3731,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[1]),64);
        bufp->chgQData(oldp+3733,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[2]),64);
        bufp->chgQData(oldp+3735,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[3]),64);
        bufp->chgQData(oldp+3737,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[4]),64);
        bufp->chgQData(oldp+3739,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[5]),64);
        bufp->chgQData(oldp+3741,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[6]),64);
        bufp->chgQData(oldp+3743,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[7]),64);
        bufp->chgQData(oldp+3745,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[8]),64);
        bufp->chgQData(oldp+3747,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[9]),64);
        bufp->chgQData(oldp+3749,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x0_round[10]),64);
        bufp->chgQData(oldp+3751,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[0]),64);
        bufp->chgQData(oldp+3753,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[1]),64);
        bufp->chgQData(oldp+3755,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[2]),64);
        bufp->chgQData(oldp+3757,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[3]),64);
        bufp->chgQData(oldp+3759,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[4]),64);
        bufp->chgQData(oldp+3761,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[5]),64);
        bufp->chgQData(oldp+3763,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[6]),64);
        bufp->chgQData(oldp+3765,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[7]),64);
        bufp->chgQData(oldp+3767,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[8]),64);
        bufp->chgQData(oldp+3769,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[9]),64);
        bufp->chgQData(oldp+3771,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x1_round[10]),64);
        bufp->chgQData(oldp+3773,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[0]),64);
        bufp->chgQData(oldp+3775,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[1]),64);
        bufp->chgQData(oldp+3777,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[2]),64);
        bufp->chgQData(oldp+3779,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[3]),64);
        bufp->chgQData(oldp+3781,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[4]),64);
        bufp->chgQData(oldp+3783,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[5]),64);
        bufp->chgQData(oldp+3785,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[6]),64);
        bufp->chgQData(oldp+3787,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[7]),64);
        bufp->chgQData(oldp+3789,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[8]),64);
        bufp->chgQData(oldp+3791,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[9]),64);
        bufp->chgQData(oldp+3793,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x2_round[10]),64);
        bufp->chgQData(oldp+3795,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[0]),64);
        bufp->chgQData(oldp+3797,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[1]),64);
        bufp->chgQData(oldp+3799,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[2]),64);
        bufp->chgQData(oldp+3801,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[3]),64);
        bufp->chgQData(oldp+3803,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[4]),64);
        bufp->chgQData(oldp+3805,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[5]),64);
        bufp->chgQData(oldp+3807,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[6]),64);
        bufp->chgQData(oldp+3809,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[7]),64);
        bufp->chgQData(oldp+3811,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[8]),64);
        bufp->chgQData(oldp+3813,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[9]),64);
        bufp->chgQData(oldp+3815,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x3_round[10]),64);
        bufp->chgQData(oldp+3817,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[0]),64);
        bufp->chgQData(oldp+3819,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[1]),64);
        bufp->chgQData(oldp+3821,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[2]),64);
        bufp->chgQData(oldp+3823,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[3]),64);
        bufp->chgQData(oldp+3825,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[4]),64);
        bufp->chgQData(oldp+3827,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[5]),64);
        bufp->chgQData(oldp+3829,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[6]),64);
        bufp->chgQData(oldp+3831,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[7]),64);
        bufp->chgQData(oldp+3833,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[8]),64);
        bufp->chgQData(oldp+3835,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[9]),64);
        bufp->chgQData(oldp+3837,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__x4_round[10]),64);
        bufp->chgQData(oldp+3839,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+3841,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+3843,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+3845,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+3847,((0xf0ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash)),64);
        bufp->chgQData(oldp+3849,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__f),64);
        bufp->chgQData(oldp+3851,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+3853,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+3855,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+3857,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3859,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3861,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3863,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3865,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3867,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3869,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3871,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3873,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+3875,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+3877,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+3879,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+3881,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+3883,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3885,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3887,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3889,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3891,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3893,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__f),64);
        bufp->chgQData(oldp+3895,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3897,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__h),64);
        bufp->chgQData(oldp+3899,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3901,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__j),64);
        bufp->chgQData(oldp+3903,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+3905,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+3907,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__h)),64);
        bufp->chgQData(oldp+3909,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+3911,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3913,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3915,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3917,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3919,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3921,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3923,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3925,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3927,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3929,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+3931,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x0_rc),64);
        bufp->chgQData(oldp+3933,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc),64);
        bufp->chgQData(oldp+3935,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r9__x2_o),64);
        bufp->chgQData(oldp+3937,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc),64);
        bufp->chgQData(oldp+3939,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x4_rc),64);
        bufp->chgQData(oldp+3941,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x0_rc),64);
        bufp->chgQData(oldp+3943,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc),64);
        bufp->chgQData(oldp+3945,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r10__x2_o),64);
        bufp->chgQData(oldp+3947,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc),64);
        bufp->chgQData(oldp+3949,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x4_rc),64);
        bufp->chgQData(oldp+3951,((0x5aULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r9__x2_o)),64);
        bufp->chgQData(oldp+3953,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc)),64);
        bufp->chgQData(oldp+3955,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+3957,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc)),64);
        bufp->chgQData(oldp+3959,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+3961,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+3963,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__f),64);
        bufp->chgQData(oldp+3965,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc))),64);
        bufp->chgQData(oldp+3967,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__h),64);
        bufp->chgQData(oldp+3969,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+3971,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__j),64);
        bufp->chgQData(oldp+3973,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s),64);
        bufp->chgQData(oldp+3975,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s),64);
        bufp->chgQData(oldp+3977,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__h)),64);
        bufp->chgQData(oldp+3979,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s),64);
        bufp->chgQData(oldp+3981,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+3983,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+3985,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+3987,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+3989,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+3991,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+3993,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+3995,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+3997,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+3999,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4001,((0x4bULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r10__x2_o)),64);
        bufp->chgQData(oldp+4003,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4005,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4007,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4009,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4011,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4013,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__f),64);
        bufp->chgQData(oldp+4015,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4017,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h),64);
        bufp->chgQData(oldp+4019,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4021,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j),64);
        bufp->chgQData(oldp+4023,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s),64);
        bufp->chgQData(oldp+4025,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s),64);
        bufp->chgQData(oldp+4027,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h)),64);
        bufp->chgQData(oldp+4029,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s),64);
        bufp->chgQData(oldp+4031,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4033,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4035,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4037,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4039,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4041,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4043,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4045,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4047,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4049,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4051,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+4053,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+4055,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+4057,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+4059,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+4061,((0xd2ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+4063,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4065,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4067,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4069,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4071,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4073,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__f),64);
        bufp->chgQData(oldp+4075,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4077,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__h),64);
        bufp->chgQData(oldp+4079,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4081,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__j),64);
        bufp->chgQData(oldp+4083,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+4085,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+4087,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__h)),64);
        bufp->chgQData(oldp+4089,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+4091,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4093,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4095,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4097,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4099,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4101,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4103,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4105,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4107,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4109,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4111,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+4113,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+4115,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+4117,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+4119,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+4121,((0xc3ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+4123,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4125,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4127,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4129,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4131,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4133,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__f),64);
        bufp->chgQData(oldp+4135,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4137,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__h),64);
        bufp->chgQData(oldp+4139,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4141,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__j),64);
        bufp->chgQData(oldp+4143,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+4145,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+4147,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__h)),64);
        bufp->chgQData(oldp+4149,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+4151,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4153,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4155,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4157,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4159,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4161,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4163,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4165,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4167,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4169,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4171,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+4173,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+4175,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+4177,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+4179,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+4181,((0xb4ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+4183,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4185,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4187,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4189,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4191,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4193,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__f),64);
        bufp->chgQData(oldp+4195,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4197,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__h),64);
        bufp->chgQData(oldp+4199,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4201,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__j),64);
        bufp->chgQData(oldp+4203,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+4205,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+4207,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__h)),64);
        bufp->chgQData(oldp+4209,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+4211,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4213,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4215,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4217,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4219,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4221,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4223,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4225,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4227,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4229,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4231,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+4233,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+4235,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+4237,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+4239,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+4241,((0xa5ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+4243,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4245,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4247,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4249,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4251,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4253,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__f),64);
        bufp->chgQData(oldp+4255,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4257,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__h),64);
        bufp->chgQData(oldp+4259,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4261,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__j),64);
        bufp->chgQData(oldp+4263,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+4265,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+4267,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__h)),64);
        bufp->chgQData(oldp+4269,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+4271,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4273,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4275,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4277,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4279,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4281,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4283,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4285,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4287,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4289,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4291,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+4293,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+4295,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+4297,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+4299,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+4301,((0x96ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+4303,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4305,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4307,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4309,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4311,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4313,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__f),64);
        bufp->chgQData(oldp+4315,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4317,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__h),64);
        bufp->chgQData(oldp+4319,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4321,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__j),64);
        bufp->chgQData(oldp+4323,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+4325,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+4327,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__h)),64);
        bufp->chgQData(oldp+4329,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+4331,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4333,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4335,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4337,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4339,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4341,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4343,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4345,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4347,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4349,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4351,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x0_rc),64);
        bufp->chgQData(oldp+4353,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc),64);
        bufp->chgQData(oldp+4355,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r7__x2_o),64);
        bufp->chgQData(oldp+4357,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc),64);
        bufp->chgQData(oldp+4359,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x4_rc),64);
        bufp->chgQData(oldp+4361,((0x87ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+4363,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4365,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4367,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4369,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4371,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4373,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__f),64);
        bufp->chgQData(oldp+4375,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4377,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__h),64);
        bufp->chgQData(oldp+4379,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4381,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__j),64);
        bufp->chgQData(oldp+4383,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+4385,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+4387,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__h)),64);
        bufp->chgQData(oldp+4389,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+4391,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4393,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4395,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4397,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4399,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4401,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4403,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4405,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4407,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4409,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4411,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x0_rc),64);
        bufp->chgQData(oldp+4413,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc),64);
        bufp->chgQData(oldp+4415,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r8__x2_o),64);
        bufp->chgQData(oldp+4417,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc),64);
        bufp->chgQData(oldp+4419,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x4_rc),64);
        bufp->chgQData(oldp+4421,((0x78ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r7__x2_o)),64);
        bufp->chgQData(oldp+4423,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4425,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4427,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4429,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4431,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4433,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__f),64);
        bufp->chgQData(oldp+4435,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4437,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__h),64);
        bufp->chgQData(oldp+4439,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4441,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__j),64);
        bufp->chgQData(oldp+4443,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s),64);
        bufp->chgQData(oldp+4445,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s),64);
        bufp->chgQData(oldp+4447,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__h)),64);
        bufp->chgQData(oldp+4449,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s),64);
        bufp->chgQData(oldp+4451,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4453,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4455,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4457,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4459,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4461,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4463,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4465,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4467,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4469,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+4471,((0x69ULL ^ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__Vcellout__r8__x2_o)),64);
        bufp->chgQData(oldp+4473,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc)),64);
        bufp->chgQData(oldp+4475,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+4477,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc)),64);
        bufp->chgQData(oldp+4479,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+4481,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+4483,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__f),64);
        bufp->chgQData(oldp+4485,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc))),64);
        bufp->chgQData(oldp+4487,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__h),64);
        bufp->chgQData(oldp+4489,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_rc 
                                   ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+4491,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__j),64);
        bufp->chgQData(oldp+4493,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s),64);
        bufp->chgQData(oldp+4495,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s),64);
        bufp->chgQData(oldp+4497,((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__h)),64);
        bufp->chgQData(oldp+4499,(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s),64);
        bufp->chgQData(oldp+4501,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+4503,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                    << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+4505,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+4507,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+4509,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+4511,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+4513,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                    << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+4515,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+4517,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__j)))) 
                                    << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+4519,(((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                                            >> 0x29U))))))),64);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+4521,(vlSelfRef.test_ascon_core__DOT__tag),128);
        bufp->chgQData(oldp+4525,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0),64);
        bufp->chgQData(oldp+4527,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1),64);
        bufp->chgQData(oldp+4529,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2),64);
        bufp->chgQData(oldp+4531,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3),64);
        bufp->chgQData(oldp+4533,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4),64);
        bufp->chgBit(oldp+4535,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
        bufp->chgQData(oldp+4536,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AE_AM),64);
        bufp->chgQData(oldp+4538,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AE_AM),64);
        bufp->chgQData(oldp+4540,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AE_AM),64);
        bufp->chgQData(oldp+4542,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AE_AM),64);
        bufp->chgQData(oldp+4544,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AE_AM),64);
        bufp->chgQData(oldp+4546,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+4548,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+4550,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+4552,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+4554,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+4556,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash),64);
        bufp->chgQData(oldp+4558,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash),64);
        bufp->chgQData(oldp+4560,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash),64);
        bufp->chgQData(oldp+4562,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash),64);
        bufp->chgQData(oldp+4564,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash),64);
        bufp->chgWData(oldp+4566,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out),128);
        bufp->chgQData(oldp+4570,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out),64);
        bufp->chgQData(oldp+4572,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__IV),64);
        bufp->chgWData(oldp+4574,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key),320);
    }
    bufp->chgBit(oldp+4584,(vlSelfRef.test_ascon_core__DOT__clk));
    bufp->chgQData(oldp+4585,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x0_o 
                               ^ (((QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[8U]))))),64);
    bufp->chgQData(oldp+4587,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x1_o 
                               ^ (((QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[6U]))))),64);
    bufp->chgQData(oldp+4589,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x2_o 
                               ^ (((QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[4U]))))),64);
    bufp->chgQData(oldp+4591,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x3_o 
                               ^ (((QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[2U]))))),64);
    bufp->chgQData(oldp+4593,((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x4_o 
                               ^ (((QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[0U]))))),64);
    bufp->chgQData(oldp+4595,((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                 ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                                 : 0xffffffffffffffffULL) 
                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->chgQData(oldp+4597,((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AE_AM)
                                 ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                                 : 0xffffffffffffffffULL) 
                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->chgQData(oldp+4599,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash) 
                               & vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->chgQData(oldp+4601,(((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash)),64);
    bufp->chgQData(oldp+4603,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash 
                               ^ ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_hash))),64);
}

void Vtest_ascon_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_cleanup\n"); );
    // Init
    Vtest_ascon_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_core___024root*>(voidSelf);
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
