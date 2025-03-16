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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_chg_0_sub_0\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_13;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgWData(oldp+0,(vlSelfRef.test_ascon_core__DOT__KEY),128);
        bufp->chgWData(oldp+4,(vlSelfRef.test_ascon_core__DOT__NONCE),128);
        bufp->chgWData(oldp+8,(vlSelfRef.test_ascon_core__DOT__TAG),128);
        bufp->chgIData(oldp+12,(vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH),32);
        bufp->chgIData(oldp+13,(vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH),32);
        bufp->chgIData(oldp+14,(vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH),32);
        bufp->chgIData(oldp+15,(vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH),32);
        bufp->chgIData(oldp+16,(vlSelfRef.test_ascon_core__DOT__count),32);
        bufp->chgIData(oldp+17,(vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+18,(vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+19,(vlSelfRef.test_ascon_core__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+20,(vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+21,(vlSelfRef.test_ascon_core__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+22,(vlSelfRef.test_ascon_core__DOT__rst_n));
        bufp->chgWData(oldp+23,(vlSelfRef.test_ascon_core__DOT__key),128);
        bufp->chgWData(oldp+27,(vlSelfRef.test_ascon_core__DOT__nonce),128);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgCData(oldp+31,(vlSelfRef.test_ascon_core__DOT__sel_type),2);
        bufp->chgBit(oldp+32,(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt));
        bufp->chgIData(oldp+33,(vlSelfRef.test_ascon_core__DOT__data_length),32);
        bufp->chgIData(oldp+34,(vlSelfRef.test_ascon_core__DOT__data_position),32);
        bufp->chgWData(oldp+35,(vlSelfRef.test_ascon_core__DOT__data_in),128);
        bufp->chgBit(oldp+39,((1U & ((~ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                                          & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                                             & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))))) 
                                         | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)) 
                                            & (((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                                                & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)))) 
                                               | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                                                   & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))) 
                                                  | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                                                      & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                         & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)))) 
                                                     | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                        & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))))))))) 
                                     | (vlSelfRef.test_ascon_core__DOT__data_length 
                                        < vlSelfRef.test_ascon_core__DOT__data_position)))));
        bufp->chgBit(oldp+40,(vlSelfRef.test_ascon_core__DOT__process_en_init));
        bufp->chgBit(oldp+41,(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM));
        bufp->chgBit(oldp+42,(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt));
        bufp->chgBit(oldp+43,(vlSelfRef.test_ascon_core__DOT__process_en_hash));
        bufp->chgBit(oldp+44,(vlSelfRef.test_ascon_core__DOT__process_en_final));
        bufp->chgBit(oldp+45,((vlSelfRef.test_ascon_core__DOT__data_length 
                               < vlSelfRef.test_ascon_core__DOT__data_position)));
        bufp->chgBit(oldp+46,((1U & (~ (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                                         & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                                            & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                               & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))))) 
                                        | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)) 
                                           & (((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                                               & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                  & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)))) 
                                              | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                                                  & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))) 
                                                 | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)) 
                                                     & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                        & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)))) 
                                                    | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                                       & ((~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                                          & (~ (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))))))))))));
        bufp->chgQData(oldp+47,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? 0x1000808c0001ULL
                                  : ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                      ? 0x80100cc0002ULL
                                      : ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                          ? 0x80000cc0003ULL
                                          : 0x80000cc0004ULL)))),64);
        bufp->chgQData(oldp+49,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? (((QData)((IData)(
                                                      vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__nonce[2U])))
                                  : 0ULL)),64);
        bufp->chgQData(oldp+51,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? (((QData)((IData)(
                                                      vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__nonce[0U])))
                                  : 0ULL)),64);
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
        bufp->chgWData(oldp+53,(__Vtemp_3),128);
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
        bufp->chgWData(oldp+57,(__Vtemp_6),128);
    }
    if (VL_UNLIKELY(((((((vlSelfRef.__Vm_traceActivity
                          [1U] | vlSelfRef.__Vm_traceActivity
                          [2U]) | vlSelfRef.__Vm_traceActivity
                         [3U]) | vlSelfRef.__Vm_traceActivity
                        [4U]) | vlSelfRef.__Vm_traceActivity
                       [6U]) | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgQData(oldp+61,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8
                                  : ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? (0x8000000000000000ULL 
                                         ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)
                                      : (0x8000000000000000ULL 
                                         ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8)))),64);
        bufp->chgQData(oldp+63,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8)),64);
        bufp->chgQData(oldp+65,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM)),64);
        bufp->chgQData(oldp+67,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM)),64);
        bufp->chgQData(oldp+69,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM)),64);
        bufp->chgQData(oldp+71,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)),64);
        bufp->chgQData(oldp+73,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8))),64);
        bufp->chgQData(oldp+75,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM))),64);
        bufp->chgQData(oldp+77,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM))),64);
        bufp->chgQData(oldp+79,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM))),64);
        bufp->chgQData(oldp+81,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8
                                      : ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                          ? (0x8000000000000000ULL 
                                             ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)
                                          : (0x8000000000000000ULL 
                                             ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8)))
                                  : ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                      ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                          : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM))),64);
        bufp->chgQData(oldp+83,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp)),64);
        bufp->chgQData(oldp+85,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp)),64);
        bufp->chgQData(oldp+87,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt)),64);
        bufp->chgQData(oldp+89,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt)),64);
        bufp->chgQData(oldp+91,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt)),64);
    }
    if (VL_UNLIKELY((((((vlSelfRef.__Vm_traceActivity
                         [1U] | vlSelfRef.__Vm_traceActivity
                         [2U]) | vlSelfRef.__Vm_traceActivity
                        [3U]) | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgQData(oldp+93,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8
                                  : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? ((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                          ? (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                                          : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3)
                                      : 0ULL))),64);
        bufp->chgQData(oldp+95,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                  : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt
                                      : 0ULL))),64);
        bufp->chgQData(oldp+97,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                  : 0ULL)),64);
        bufp->chgQData(oldp+99,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                  : 0ULL)),64);
        bufp->chgQData(oldp+101,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+103,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+105,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+107,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+109,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+111,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+113,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+115,(((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                   ? (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                                   : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3)),64);
        bufp->chgQData(oldp+117,(((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                   ? (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                   : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5)),64);
        bufp->chgQData(oldp+119,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+121,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+123,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+125,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+127,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+129,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+131,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+133,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+135,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+137,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+139,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+141,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+143,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+145,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+147,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+149,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+151,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+153,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+155,((0xb4ULL ^ ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                              ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                              : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt
                                                  : 0ULL)))),64);
    }
    if (VL_UNLIKELY(((((vlSelfRef.__Vm_traceActivity
                        [1U] | vlSelfRef.__Vm_traceActivity
                        [2U]) | vlSelfRef.__Vm_traceActivity
                       [3U]) | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            __Vtemp_10[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U];
            __Vtemp_10[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U];
            __Vtemp_10[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U];
            __Vtemp_10[3U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U];
        } else {
            __Vtemp_10[0U] = 0U;
            __Vtemp_10[1U] = 0U;
            if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
                __Vtemp_10[2U] = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out);
                __Vtemp_10[3U] = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                                          >> 0x20U));
            } else {
                __Vtemp_10[2U] = 0U;
                __Vtemp_10[3U] = 0U;
            }
        }
        bufp->chgWData(oldp+157,(__Vtemp_10),128);
        bufp->chgQData(oldp+161,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                   : 0ULL)),64);
        bufp->chgQData(oldp+163,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                   : 0ULL)),64);
        bufp->chgQData(oldp+165,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                   : 0ULL)),64);
        bufp->chgQData(oldp+167,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                   : 0ULL)),64);
        bufp->chgQData(oldp+169,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                   : 0ULL)),64);
        bufp->chgQData(oldp+171,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                   : 0ULL)),64);
        bufp->chgQData(oldp+173,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                   : 0ULL)),64);
        bufp->chgQData(oldp+175,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                   : 0ULL)),64);
        bufp->chgQData(oldp+177,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                   : 0ULL)),64);
        bufp->chgQData(oldp+179,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                   : 0ULL)),64);
        bufp->chgQData(oldp+181,((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                    : 0ULL) ^ (((QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__key[2U]))))),64);
        bufp->chgQData(oldp+183,((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                    : 0ULL) ^ (((QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.test_ascon_core__DOT__key[0U]))))),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgQData(oldp+185,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init),64);
        bufp->chgQData(oldp+187,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init),64);
        bufp->chgQData(oldp+189,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init),64);
        bufp->chgQData(oldp+191,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM),64);
        bufp->chgQData(oldp+193,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM),64);
        bufp->chgQData(oldp+195,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM),64);
        bufp->chgQData(oldp+197,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM),64);
        bufp->chgQData(oldp+199,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM),64);
        bufp->chgQData(oldp+201,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+203,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+205,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+207,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+209,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+211,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12),64);
        bufp->chgQData(oldp+213,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12),64);
        bufp->chgQData(oldp+215,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12),64);
        bufp->chgQData(oldp+217,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8),64);
        bufp->chgQData(oldp+219,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8),64);
        bufp->chgQData(oldp+221,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8),64);
        bufp->chgQData(oldp+223,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12),64);
        bufp->chgQData(oldp+225,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12),64);
        bufp->chgQData(oldp+227,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12),64);
        bufp->chgQData(oldp+229,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12),64);
        bufp->chgQData(oldp+231,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12),64);
        bufp->chgQData(oldp+233,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8),64);
        bufp->chgQData(oldp+235,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8),64);
        bufp->chgQData(oldp+237,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8),64);
        bufp->chgQData(oldp+239,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8),64);
        bufp->chgQData(oldp+241,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8),64);
        bufp->chgQData(oldp+243,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12),64);
        bufp->chgQData(oldp+245,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12),64);
        bufp->chgQData(oldp+247,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8),64);
        bufp->chgQData(oldp+249,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8),64);
        bufp->chgQData(oldp+251,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8),64);
        bufp->chgQData(oldp+253,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12),64);
        bufp->chgWData(oldp+255,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last),128);
        bufp->chgQData(oldp+259,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp),64);
        bufp->chgQData(oldp+261,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp),64);
        bufp->chgQData(oldp+263,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0),64);
        bufp->chgQData(oldp+265,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1),64);
        bufp->chgQData(oldp+267,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0]),64);
        bufp->chgQData(oldp+269,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1]),64);
        bufp->chgQData(oldp+271,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2]),64);
        bufp->chgQData(oldp+273,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3]),64);
        bufp->chgQData(oldp+275,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4]),64);
        bufp->chgQData(oldp+277,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+279,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+281,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+283,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+285,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+287,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+289,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+291,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[7]),64);
        bufp->chgQData(oldp+293,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[8]),64);
        bufp->chgQData(oldp+295,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[9]),64);
        bufp->chgQData(oldp+297,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[10]),64);
        bufp->chgQData(oldp+299,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+301,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+303,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+305,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+307,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+309,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+311,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+313,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[7]),64);
        bufp->chgQData(oldp+315,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[8]),64);
        bufp->chgQData(oldp+317,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[9]),64);
        bufp->chgQData(oldp+319,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[10]),64);
        bufp->chgQData(oldp+321,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+323,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+325,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+327,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+329,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+331,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+333,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+335,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[7]),64);
        bufp->chgQData(oldp+337,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[8]),64);
        bufp->chgQData(oldp+339,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[9]),64);
        bufp->chgQData(oldp+341,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[10]),64);
        bufp->chgQData(oldp+343,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+345,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+347,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+349,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+351,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+353,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+355,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+357,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[7]),64);
        bufp->chgQData(oldp+359,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[8]),64);
        bufp->chgQData(oldp+361,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[9]),64);
        bufp->chgQData(oldp+363,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[10]),64);
        bufp->chgQData(oldp+365,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+367,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+369,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+371,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+373,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+375,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+377,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+379,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[7]),64);
        bufp->chgQData(oldp+381,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[8]),64);
        bufp->chgQData(oldp+383,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[9]),64);
        bufp->chgQData(oldp+385,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[10]),64);
        bufp->chgQData(oldp+387,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+389,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+391,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+393,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+395,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+397,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12)),64);
        bufp->chgQData(oldp+399,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+401,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12)),64);
        bufp->chgQData(oldp+403,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+405,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+407,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+409,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12))),64);
        bufp->chgQData(oldp+411,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h),64);
        bufp->chgQData(oldp+413,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+415,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j),64);
        bufp->chgQData(oldp+417,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+419,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+421,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h)),64);
        bufp->chgQData(oldp+423,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+425,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+427,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+429,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+431,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+433,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+435,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+437,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+439,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+441,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+443,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+445,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+447,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+449,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+451,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+453,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+455,((0xe1ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+457,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+459,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+461,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+463,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+465,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+467,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+469,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+471,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h),64);
        bufp->chgQData(oldp+473,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+475,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j),64);
        bufp->chgQData(oldp+477,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+479,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+481,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h)),64);
        bufp->chgQData(oldp+483,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+485,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+487,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+489,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+491,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+493,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+495,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+497,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+499,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+501,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+503,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+505,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc),64);
        bufp->chgQData(oldp+507,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc),64);
        bufp->chgQData(oldp+509,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o),64);
        bufp->chgQData(oldp+511,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc),64);
        bufp->chgQData(oldp+513,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc),64);
        bufp->chgQData(oldp+515,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc),64);
        bufp->chgQData(oldp+517,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc),64);
        bufp->chgQData(oldp+519,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o),64);
        bufp->chgQData(oldp+521,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc),64);
        bufp->chgQData(oldp+523,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc),64);
        bufp->chgQData(oldp+525,((0x5aULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o)),64);
        bufp->chgQData(oldp+527,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc)),64);
        bufp->chgQData(oldp+529,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+531,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc)),64);
        bufp->chgQData(oldp+533,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+535,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+537,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f),64);
        bufp->chgQData(oldp+539,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc))),64);
        bufp->chgQData(oldp+541,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h),64);
        bufp->chgQData(oldp+543,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+545,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j),64);
        bufp->chgQData(oldp+547,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s),64);
        bufp->chgQData(oldp+549,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s),64);
        bufp->chgQData(oldp+551,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h)),64);
        bufp->chgQData(oldp+553,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s),64);
        bufp->chgQData(oldp+555,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+557,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+559,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+561,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+563,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+565,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+567,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+569,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+571,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+573,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+575,((0x4bULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o)),64);
        bufp->chgQData(oldp+577,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc)),64);
        bufp->chgQData(oldp+579,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+581,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc)),64);
        bufp->chgQData(oldp+583,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+585,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+587,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f),64);
        bufp->chgQData(oldp+589,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc))),64);
        bufp->chgQData(oldp+591,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h),64);
        bufp->chgQData(oldp+593,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+595,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j),64);
        bufp->chgQData(oldp+597,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s),64);
        bufp->chgQData(oldp+599,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s),64);
        bufp->chgQData(oldp+601,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h)),64);
        bufp->chgQData(oldp+603,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s),64);
        bufp->chgQData(oldp+605,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+607,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+609,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+611,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+613,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+615,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+617,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+619,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+621,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+623,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+625,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+627,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+629,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+631,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+633,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+635,((0xd2ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+637,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+639,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+641,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+643,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+645,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+647,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+649,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+651,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h),64);
        bufp->chgQData(oldp+653,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+655,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j),64);
        bufp->chgQData(oldp+657,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+659,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+661,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h)),64);
        bufp->chgQData(oldp+663,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+665,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+667,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+669,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+671,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+673,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+675,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+677,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+679,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+681,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+683,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+685,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+687,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+689,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+691,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+693,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+695,((0xc3ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+697,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+699,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+701,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+703,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+705,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+707,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+709,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+711,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h),64);
        bufp->chgQData(oldp+713,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+715,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j),64);
        bufp->chgQData(oldp+717,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+719,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+721,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h)),64);
        bufp->chgQData(oldp+723,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+725,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+727,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+729,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+731,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+733,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+735,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+737,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+739,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+741,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+743,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+745,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+747,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+749,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+751,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+753,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+755,((0xb4ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+757,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+759,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+761,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+763,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+765,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+767,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+769,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+771,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h),64);
        bufp->chgQData(oldp+773,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+775,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j),64);
        bufp->chgQData(oldp+777,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+779,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+781,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h)),64);
        bufp->chgQData(oldp+783,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+785,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+787,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+789,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+791,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+793,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+795,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+797,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+799,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+801,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+803,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+805,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+807,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+809,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+811,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+813,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+815,((0xa5ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+817,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+819,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+821,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+823,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+825,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+827,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+829,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+831,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h),64);
        bufp->chgQData(oldp+833,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+835,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j),64);
        bufp->chgQData(oldp+837,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+839,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+841,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h)),64);
        bufp->chgQData(oldp+843,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+845,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+847,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+849,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+851,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+853,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+855,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+857,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+859,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+861,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+863,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+865,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+867,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+869,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+871,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+873,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+875,((0x96ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+877,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+879,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+881,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+883,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+885,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+887,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+889,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+891,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h),64);
        bufp->chgQData(oldp+893,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+895,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j),64);
        bufp->chgQData(oldp+897,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+899,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+901,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h)),64);
        bufp->chgQData(oldp+903,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+905,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+907,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+909,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+911,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+913,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+915,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+917,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+919,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+921,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+923,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+925,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc),64);
        bufp->chgQData(oldp+927,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc),64);
        bufp->chgQData(oldp+929,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o),64);
        bufp->chgQData(oldp+931,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc),64);
        bufp->chgQData(oldp+933,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc),64);
        bufp->chgQData(oldp+935,((0x87ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+937,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+939,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+941,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+943,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+945,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+947,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+949,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+951,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h),64);
        bufp->chgQData(oldp+953,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc 
                                  ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+955,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j),64);
        bufp->chgQData(oldp+957,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+959,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+961,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h)),64);
        bufp->chgQData(oldp+963,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+965,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+967,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+969,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+971,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+973,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+975,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__h 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+977,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+979,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+981,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                                                >> 7U))),64);
        bufp->chgQData(oldp+983,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__j 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+985,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc),64);
        bufp->chgQData(oldp+987,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc),64);
        bufp->chgQData(oldp+989,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o),64);
        bufp->chgQData(oldp+991,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc),64);
        bufp->chgQData(oldp+993,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc),64);
        bufp->chgQData(oldp+995,((0x78ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o)),64);
        bufp->chgQData(oldp+997,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc)),64);
        bufp->chgQData(oldp+999,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1001,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1003,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1005,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1007,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f),64);
        bufp->chgQData(oldp+1009,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1011,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h),64);
        bufp->chgQData(oldp+1013,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1015,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j),64);
        bufp->chgQData(oldp+1017,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s),64);
        bufp->chgQData(oldp+1019,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s),64);
        bufp->chgQData(oldp+1021,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h)),64);
        bufp->chgQData(oldp+1023,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s),64);
        bufp->chgQData(oldp+1025,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1027,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1029,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1031,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1033,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1035,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1037,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1039,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1041,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1043,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1045,((0x69ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o)),64);
        bufp->chgQData(oldp+1047,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1049,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1051,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1053,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1055,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1057,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f),64);
        bufp->chgQData(oldp+1059,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1061,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h),64);
        bufp->chgQData(oldp+1063,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1065,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j),64);
        bufp->chgQData(oldp+1067,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s),64);
        bufp->chgQData(oldp+1069,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s),64);
        bufp->chgQData(oldp+1071,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h)),64);
        bufp->chgQData(oldp+1073,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s),64);
        bufp->chgQData(oldp+1075,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1077,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1079,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1081,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1083,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1085,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1087,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1089,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1091,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1093,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1095,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+1097,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+1099,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+1101,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+1103,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+1105,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+1107,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+1109,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+1111,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+1113,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+1115,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+1117,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+1119,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+1121,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+1123,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+1125,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+1127,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+1129,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+1131,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+1133,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+1135,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+1137,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+1139,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+1141,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+1143,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+1145,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+1147,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+1149,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+1151,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+1153,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+1155,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+1157,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+1159,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+1161,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+1163,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+1165,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+1167,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+1169,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+1171,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+1173,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+1175,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8)),64);
        bufp->chgQData(oldp+1177,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1179,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8)),64);
        bufp->chgQData(oldp+1181,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1183,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1185,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+1187,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8))),64);
        bufp->chgQData(oldp+1189,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h),64);
        bufp->chgQData(oldp+1191,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1193,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j),64);
        bufp->chgQData(oldp+1195,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+1197,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+1199,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h)),64);
        bufp->chgQData(oldp+1201,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+1203,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1205,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1207,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1209,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1211,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1213,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1215,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1217,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1219,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1221,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1223,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+1225,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+1227,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+1229,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+1231,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+1233,((0xa5ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o)),64);
        bufp->chgQData(oldp+1235,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1237,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1239,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1241,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1243,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1245,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+1247,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1249,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h),64);
        bufp->chgQData(oldp+1251,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1253,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j),64);
        bufp->chgQData(oldp+1255,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+1257,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+1259,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h)),64);
        bufp->chgQData(oldp+1261,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+1263,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1265,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1267,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1269,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1271,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1273,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1275,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1277,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1279,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1281,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1283,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+1285,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+1287,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+1289,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+1291,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+1293,((0x96ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o)),64);
        bufp->chgQData(oldp+1295,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1297,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1299,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1301,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1303,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1305,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+1307,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1309,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h),64);
        bufp->chgQData(oldp+1311,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1313,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j),64);
        bufp->chgQData(oldp+1315,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+1317,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+1319,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h)),64);
        bufp->chgQData(oldp+1321,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+1323,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1325,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1327,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1329,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1331,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1333,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1335,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1337,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1339,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1341,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1343,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+1345,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+1347,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+1349,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+1351,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+1353,((0x87ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o)),64);
        bufp->chgQData(oldp+1355,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1357,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1359,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1361,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1363,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1365,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+1367,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1369,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h),64);
        bufp->chgQData(oldp+1371,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1373,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j),64);
        bufp->chgQData(oldp+1375,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+1377,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+1379,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h)),64);
        bufp->chgQData(oldp+1381,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+1383,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1385,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1387,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1389,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1391,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1393,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1395,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1397,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1399,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1401,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1403,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+1405,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+1407,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+1409,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+1411,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+1413,((0x78ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o)),64);
        bufp->chgQData(oldp+1415,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1417,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1419,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1421,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1423,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1425,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+1427,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1429,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h),64);
        bufp->chgQData(oldp+1431,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1433,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j),64);
        bufp->chgQData(oldp+1435,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+1437,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+1439,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h)),64);
        bufp->chgQData(oldp+1441,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+1443,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1445,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1447,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1449,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1451,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1453,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1455,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1457,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1459,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1461,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1463,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+1465,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+1467,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+1469,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+1471,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+1473,((0x69ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o)),64);
        bufp->chgQData(oldp+1475,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1477,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1479,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1481,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1483,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1485,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+1487,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1489,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h),64);
        bufp->chgQData(oldp+1491,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1493,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j),64);
        bufp->chgQData(oldp+1495,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+1497,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+1499,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h)),64);
        bufp->chgQData(oldp+1501,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+1503,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1505,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1507,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1509,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1511,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1513,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1515,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1517,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1519,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1521,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1523,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+1525,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+1527,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+1529,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+1531,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+1533,((0x5aULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o)),64);
        bufp->chgQData(oldp+1535,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1537,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1539,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1541,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1543,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1545,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+1547,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1549,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h),64);
        bufp->chgQData(oldp+1551,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1553,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j),64);
        bufp->chgQData(oldp+1555,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+1557,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+1559,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h)),64);
        bufp->chgQData(oldp+1561,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+1563,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1565,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1567,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1569,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1571,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1573,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1575,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1577,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1579,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1581,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1583,((0x4bULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o)),64);
        bufp->chgQData(oldp+1585,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1587,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
        bufp->chgQData(oldp+1589,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1591,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
        bufp->chgQData(oldp+1593,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1595,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+1597,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc))),64);
        bufp->chgQData(oldp+1599,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h),64);
        bufp->chgQData(oldp+1601,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
                                   ^ ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
        bufp->chgQData(oldp+1603,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j),64);
        bufp->chgQData(oldp+1605,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+1607,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+1609,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h)),64);
        bufp->chgQData(oldp+1611,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+1613,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1615,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1617,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1619,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1621,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1623,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1625,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1627,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1629,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1631,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                            >> 0x29U))))))),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgWData(oldp+1633,(vlSelfRef.test_ascon_core__DOT__tag),128);
        bufp->chgQData(oldp+1637,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0),64);
        bufp->chgQData(oldp+1639,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1),64);
        bufp->chgQData(oldp+1641,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2),64);
        bufp->chgQData(oldp+1643,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3),64);
        bufp->chgQData(oldp+1645,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4),64);
        bufp->chgBit(oldp+1647,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
        bufp->chgQData(oldp+1648,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM),64);
        bufp->chgQData(oldp+1650,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM),64);
        bufp->chgQData(oldp+1652,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM),64);
        bufp->chgQData(oldp+1654,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM),64);
        bufp->chgQData(oldp+1656,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM),64);
        bufp->chgQData(oldp+1658,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1660,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1662,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1664,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1666,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1668,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash),64);
        bufp->chgQData(oldp+1670,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash),64);
        bufp->chgQData(oldp+1672,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash),64);
        bufp->chgQData(oldp+1674,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash),64);
        bufp->chgQData(oldp+1676,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash),64);
        bufp->chgWData(oldp+1678,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out),128);
        bufp->chgQData(oldp+1682,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out),64);
    }
    bufp->chgBit(oldp+1684,(vlSelfRef.test_ascon_core__DOT__clk));
    bufp->chgQData(oldp+1685,(vlSelfRef.test_ascon_core__DOT__start_time),64);
    bufp->chgQData(oldp+1687,(vlSelfRef.test_ascon_core__DOT__end_time),64);
    bufp->chgQData(oldp+1689,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12)),64);
    bufp->chgQData(oldp+1691,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12)),64);
    bufp->chgQData(oldp+1693,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                    ? 0x1000808c0001ULL
                                    : ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                        ? 0x80100cc0002ULL
                                        : ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                            ? 0x80000cc0003ULL
                                            : 0x80000cc0004ULL)))
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                        ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                            : 0ULL)
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                                : 0ULL)
                                            : 0ULL))))),64);
    bufp->chgQData(oldp+1695,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                        ? (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                             ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                             : 0ULL) 
                                           ^ (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__key[2U]))))
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                : 0ULL)
                                            : 0ULL))))),64);
    bufp->chgQData(oldp+1697,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12),64);
    bufp->chgQData(oldp+1699,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12),64);
    bufp->chgQData(oldp+1701,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)),64);
    bufp->chgQData(oldp+1703,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)),64);
    bufp->chgQData(oldp+1705,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)),64);
    bufp->chgQData(oldp+1707,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)),64);
    bufp->chgQData(oldp+1709,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4)),64);
    if ((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT____VdfgRegularize_h32e126ea_0_1)) {
        __Vtemp_13[0U] = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5);
        __Vtemp_13[1U] = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5 
                                  >> 0x20U));
        __Vtemp_13[2U] = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3);
        __Vtemp_13[3U] = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3 
                                  >> 0x20U));
    } else {
        __Vtemp_13[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
        __Vtemp_13[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
        __Vtemp_13[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
        __Vtemp_13[3U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U];
    }
    bufp->chgWData(oldp+1711,(__Vtemp_13),128);
    bufp->chgQData(oldp+1715,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last),64);
    bufp->chgQData(oldp+1717,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last),64);
    bufp->chgQData(oldp+1719,((0xf0ULL ^ ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                                           : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                               ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                               : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                   ? 
                                                  (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                     : 0ULL) 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_core__DOT__key[2U]))))
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                     : 0ULL)
                                                    : 0ULL)))))),64);
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
