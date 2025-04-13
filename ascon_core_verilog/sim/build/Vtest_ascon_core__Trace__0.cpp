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
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_12;
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
        bufp->chgBit(oldp+39,(vlSelfRef.test_ascon_core__DOT__process_en_init));
        bufp->chgBit(oldp+40,(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM));
        bufp->chgBit(oldp+41,(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt));
        bufp->chgBit(oldp+42,(vlSelfRef.test_ascon_core__DOT__process_en_hash));
        bufp->chgBit(oldp+43,(vlSelfRef.test_ascon_core__DOT__process_en_final));
        bufp->chgBit(oldp+44,((vlSelfRef.test_ascon_core__DOT__data_length 
                               < vlSelfRef.test_ascon_core__DOT__data_position)));
        bufp->chgQData(oldp+45,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? 0x1000808c0001ULL
                                  : ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                      ? 0x80100cc0002ULL
                                      : ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                          ? 0x80000cc0003ULL
                                          : 0x80000cc0004ULL)))),64);
        bufp->chgQData(oldp+47,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? (((QData)((IData)(
                                                      vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__nonce[2U])))
                                  : 0ULL)),64);
        bufp->chgQData(oldp+49,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
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
        bufp->chgWData(oldp+51,(__Vtemp_3),128);
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
        bufp->chgWData(oldp+55,(__Vtemp_6),128);
    }
    if (VL_UNLIKELY(((((((vlSelfRef.__Vm_traceActivity
                          [1U] | vlSelfRef.__Vm_traceActivity
                          [2U]) | vlSelfRef.__Vm_traceActivity
                         [3U]) | vlSelfRef.__Vm_traceActivity
                        [4U]) | vlSelfRef.__Vm_traceActivity
                       [6U]) | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgQData(oldp+59,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8
                                  : ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? (0x8000000000000000ULL 
                                         ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)
                                      : (0x8000000000000000ULL 
                                         ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8)))),64);
        bufp->chgQData(oldp+61,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8)),64);
        bufp->chgQData(oldp+63,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM)),64);
        bufp->chgQData(oldp+65,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM)),64);
        bufp->chgQData(oldp+67,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM)),64);
        bufp->chgQData(oldp+69,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)),64);
        bufp->chgQData(oldp+71,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8))),64);
        bufp->chgQData(oldp+73,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM))),64);
        bufp->chgQData(oldp+75,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM))),64);
        bufp->chgQData(oldp+77,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM))),64);
        bufp->chgQData(oldp+79,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8
                                      : ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                          ? (0x8000000000000000ULL 
                                             ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)
                                          : (0x8000000000000000ULL 
                                             ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8)))
                                  : ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                      ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                          : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM))),64);
        bufp->chgQData(oldp+81,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp)),64);
        bufp->chgQData(oldp+83,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp)),64);
        bufp->chgQData(oldp+85,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt)),64);
        bufp->chgQData(oldp+87,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt)),64);
        bufp->chgQData(oldp+89,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
        bufp->chgQData(oldp+91,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
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
        bufp->chgQData(oldp+93,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
                                  : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? ((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                          ? (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                          : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5)
                                      : 0ULL))),64);
        bufp->chgQData(oldp+95,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                  : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt
                                      : 0ULL))),64);
        bufp->chgQData(oldp+97,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                  : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt
                                      : 0ULL))),64);
        bufp->chgQData(oldp+99,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM
                                  : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt
                                      : 0ULL))),64);
        bufp->chgQData(oldp+101,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+103,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+105,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+107,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+109,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+111,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+113,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+115,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+117,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+119,(((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                   ? (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                                   : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3)),64);
        bufp->chgQData(oldp+121,(((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                   ? (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                   : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5)),64);
        bufp->chgQData(oldp+123,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+125,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+127,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+129,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+131,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+133,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+135,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+137,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+139,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+141,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+143,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+145,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+147,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+149,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+151,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                       : 0ULL))),64);
    }
    if (VL_UNLIKELY(((((vlSelfRef.__Vm_traceActivity
                        [1U] | vlSelfRef.__Vm_traceActivity
                        [2U]) | vlSelfRef.__Vm_traceActivity
                       [3U]) | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgQData(oldp+153,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                   : 0ULL)),64);
        bufp->chgQData(oldp+155,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                   : 0ULL)),64);
        bufp->chgQData(oldp+157,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                   : 0ULL)),64);
        bufp->chgQData(oldp+159,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                   : 0ULL)),64);
        bufp->chgQData(oldp+161,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                   : 0ULL)),64);
        bufp->chgQData(oldp+163,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                   : 0ULL)),64);
        bufp->chgQData(oldp+165,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                   : 0ULL)),64);
        bufp->chgQData(oldp+167,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                   : 0ULL)),64);
        bufp->chgQData(oldp+169,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                   : 0ULL)),64);
        bufp->chgQData(oldp+171,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                   : 0ULL)),64);
        bufp->chgQData(oldp+173,(((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                     ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)
                                     : 0xffffffffffffffffULL) 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                  | ((~ (((QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                     & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                         : 0ULL)))),64);
        bufp->chgQData(oldp+175,(((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                     ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                                     : 0xffffffffffffffffULL) 
                                   & (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                                  | ((~ (((QData)((IData)(
                                                          vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                                     & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                         : 0ULL)))),64);
        if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            __Vtemp_9[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U];
            __Vtemp_9[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U];
            __Vtemp_9[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U];
            __Vtemp_9[3U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U];
        } else if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            __Vtemp_9[0U] = 0U;
            __Vtemp_9[1U] = 0U;
            __Vtemp_9[2U] = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out);
            __Vtemp_9[3U] = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                                     >> 0x20U));
        } else {
            __Vtemp_9[0U] = vlSelfRef.test_ascon_core__DOT__data_out[0U];
            __Vtemp_9[1U] = vlSelfRef.test_ascon_core__DOT__data_out[1U];
            __Vtemp_9[2U] = vlSelfRef.test_ascon_core__DOT__data_out[2U];
            __Vtemp_9[3U] = vlSelfRef.test_ascon_core__DOT__data_out[3U];
        }
        bufp->chgWData(oldp+177,(__Vtemp_9),128);
        bufp->chgQData(oldp+181,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)))),64);
        bufp->chgQData(oldp+183,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)))),64);
        bufp->chgQData(oldp+185,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)))),64);
        bufp->chgQData(oldp+187,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)))),64);
        bufp->chgQData(oldp+189,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4)))),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgWData(oldp+191,(vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out),128);
        bufp->chgWData(oldp+195,(vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out),128);
        bufp->chgWData(oldp+199,(vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out),128);
        bufp->chgDouble(oldp+203,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__encrypt_cycle_use));
        bufp->chgDouble(oldp+205,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__decrypt_cycle_use));
        bufp->chgDouble(oldp+207,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__hash_cycle_use));
        bufp->chgQData(oldp+209,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time),64);
        bufp->chgQData(oldp+211,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+213,(vlSelfRef.test_ascon_core__DOT__err));
        bufp->chgQData(oldp+214,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12),64);
        bufp->chgQData(oldp+216,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12),64);
        bufp->chgIData(oldp+218,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position),32);
        bufp->chgQData(oldp+219,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last),64);
        bufp->chgQData(oldp+221,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgQData(oldp+223,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init),64);
        bufp->chgQData(oldp+225,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init),64);
        bufp->chgQData(oldp+227,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init),64);
        bufp->chgQData(oldp+229,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM),64);
        bufp->chgQData(oldp+231,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM),64);
        bufp->chgQData(oldp+233,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM),64);
        bufp->chgQData(oldp+235,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM),64);
        bufp->chgQData(oldp+237,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM),64);
        bufp->chgQData(oldp+239,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+241,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+243,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+245,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+247,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+249,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12),64);
        bufp->chgQData(oldp+251,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12),64);
        bufp->chgQData(oldp+253,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12),64);
        bufp->chgQData(oldp+255,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12),64);
        bufp->chgQData(oldp+257,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12),64);
        bufp->chgQData(oldp+259,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8),64);
        bufp->chgQData(oldp+261,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8),64);
        bufp->chgQData(oldp+263,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8),64);
        bufp->chgQData(oldp+265,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8),64);
        bufp->chgQData(oldp+267,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8),64);
        bufp->chgQData(oldp+269,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12),64);
        bufp->chgQData(oldp+271,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12),64);
        bufp->chgQData(oldp+273,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8),64);
        bufp->chgQData(oldp+275,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8),64);
        bufp->chgQData(oldp+277,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8),64);
        bufp->chgQData(oldp+279,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12),64);
        bufp->chgQData(oldp+281,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p),64);
        bufp->chgQData(oldp+283,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p),64);
        bufp->chgQData(oldp+285,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p),64);
        bufp->chgQData(oldp+287,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p),64);
        bufp->chgQData(oldp+289,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p),64);
        bufp->chgBit(oldp+291,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p));
        bufp->chgBit(oldp+292,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8));
        bufp->chgBit(oldp+293,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12));
        bufp->chgWData(oldp+294,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last),128);
        bufp->chgQData(oldp+298,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp),64);
        bufp->chgQData(oldp+300,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp),64);
        bufp->chgQData(oldp+302,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0),64);
        bufp->chgQData(oldp+304,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1),64);
        bufp->chgQData(oldp+306,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0]),64);
        bufp->chgQData(oldp+308,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1]),64);
        bufp->chgQData(oldp+310,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2]),64);
        bufp->chgQData(oldp+312,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3]),64);
        bufp->chgQData(oldp+314,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4]),64);
        bufp->chgQData(oldp+316,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+318,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+320,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+322,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+324,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+326,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+328,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+330,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+332,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+334,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+336,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+338,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+340,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+342,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+344,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+346,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg),64);
        bufp->chgQData(oldp+348,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg),64);
        bufp->chgQData(oldp+350,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg),64);
        bufp->chgQData(oldp+352,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg),64);
        bufp->chgQData(oldp+354,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg),64);
        bufp->chgQData(oldp+356,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                  ^ ((((QData)((IData)(
                                                       (0x7ffffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                       << 0x2dU) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                       >> 0x13U)) ^ 
                                     (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                       >> 0x1cU))))),64);
        bufp->chgQData(oldp+358,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                  ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                            >> 0x3dU)))))) 
                                     ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                         << 0x19U) 
                                        | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                      >> 0x27U))))))))),64);
        bufp->chgQData(oldp+360,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                  ^ ((((QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                       << 0x3fU) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                       >> 1U)) ^ (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                                   << 0x3aU) 
                                                  | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+362,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                  ^ ((((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                       << 0x36U) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                       >> 0xaU)) ^ 
                                     (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                       >> 0x11U))))),64);
        bufp->chgQData(oldp+364,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                  ^ ((((QData)((IData)(
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s)))) 
                                       << 0x39U) | 
                                      (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                       >> 7U)) ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                   << 0x17U) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                                                >> 0x29U))))))))),64);
        bufp->chgQData(oldp+366,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                                   ? 0xf0ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                                 ? 0xb4ULL
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                  ? 0x78ULL
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                   ? 0xb4ULL
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x78ULL
                                                    : 0ULL)))))),64);
        bufp->chgQData(oldp+368,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                                   ? 0xe1ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                                 ? 0xa5ULL
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                  ? 0x69ULL
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                   ? 0xa5ULL
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x69ULL
                                                    : 0ULL)))))),64);
        bufp->chgQData(oldp+370,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                                   ? 0xd2ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                                 ? 0x96ULL
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                  ? 0x5aULL
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                   ? 0x96ULL
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x5aULL
                                                    : 0ULL)))))),64);
        bufp->chgQData(oldp+372,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                                   ? 0xc3ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                                 ? 0x87ULL
                                                 : 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                  ? 0x4bULL
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                   ? 0x87ULL
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x4bULL
                                                    : 0ULL)))))),64);
        bufp->chgQData(oldp+374,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+376,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+378,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+380,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+382,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+384,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc),64);
        bufp->chgQData(oldp+386,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+388,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+390,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s),64);
        bufp->chgQData(oldp+392,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+394,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s),64);
        bufp->chgQData(oldp+396,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+398,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+400,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+402,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+404,((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s)))) 
                                   << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
                                                >> 1U))),64);
        bufp->chgQData(oldp+406,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s)))) 
                                   << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
                                                >> 6U))),64);
        bufp->chgQData(oldp+408,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+410,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+412,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+414,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+416,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+418,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+420,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+422,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+424,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+426,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc),64);
        bufp->chgQData(oldp+428,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+430,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+432,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s),64);
        bufp->chgQData(oldp+434,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+436,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s),64);
        bufp->chgQData(oldp+438,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+440,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+442,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+444,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+446,((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s)))) 
                                   << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
                                                >> 1U))),64);
        bufp->chgQData(oldp+448,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s)))) 
                                   << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
                                                >> 6U))),64);
        bufp->chgQData(oldp+450,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+452,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+454,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+456,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+458,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+460,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+462,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+464,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+466,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+468,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc),64);
        bufp->chgQData(oldp+470,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+472,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+474,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s),64);
        bufp->chgQData(oldp+476,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+478,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s),64);
        bufp->chgQData(oldp+480,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+482,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+484,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+486,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+488,((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s)))) 
                                   << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
                                                >> 1U))),64);
        bufp->chgQData(oldp+490,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s)))) 
                                   << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
                                                >> 6U))),64);
        bufp->chgQData(oldp+492,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+494,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+496,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+498,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+500,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc),64);
        bufp->chgQData(oldp+502,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+504,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+506,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s),64);
        bufp->chgQData(oldp+508,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+510,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s),64);
        bufp->chgQData(oldp+512,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+514,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+516,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+518,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+520,((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                   << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                                >> 1U))),64);
        bufp->chgQData(oldp+522,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                   << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                                >> 6U))),64);
        bufp->chgQData(oldp+524,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+526,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+528,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+530,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgWData(oldp+532,(vlSelfRef.test_ascon_core__DOT__data_out),128);
        bufp->chgBit(oldp+536,(vlSelfRef.test_ascon_core__DOT__done));
        bufp->chgWData(oldp+537,(vlSelfRef.test_ascon_core__DOT__tag),128);
        bufp->chgQData(oldp+541,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0),64);
        bufp->chgQData(oldp+543,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1),64);
        bufp->chgQData(oldp+545,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2),64);
        bufp->chgQData(oldp+547,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3),64);
        bufp->chgQData(oldp+549,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4),64);
        bufp->chgBit(oldp+551,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
        bufp->chgQData(oldp+552,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM),64);
        bufp->chgQData(oldp+554,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM),64);
        bufp->chgQData(oldp+556,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM),64);
        bufp->chgQData(oldp+558,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM),64);
        bufp->chgQData(oldp+560,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM),64);
        bufp->chgQData(oldp+562,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+564,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+566,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+568,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+570,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+572,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash),64);
        bufp->chgQData(oldp+574,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash),64);
        bufp->chgQData(oldp+576,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash),64);
        bufp->chgQData(oldp+578,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash),64);
        bufp->chgQData(oldp+580,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash),64);
        bufp->chgWData(oldp+582,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out),128);
        bufp->chgQData(oldp+586,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out),64);
        bufp->chgWData(oldp+588,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp),128);
        bufp->chgQData(oldp+592,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save),64);
        bufp->chgQData(oldp+594,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save),64);
        bufp->chgQData(oldp+596,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save),64);
        bufp->chgQData(oldp+598,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save),64);
        bufp->chgQData(oldp+600,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save),64);
        bufp->chgCData(oldp+602,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state),2);
    }
    bufp->chgBit(oldp+603,(vlSelfRef.test_ascon_core__DOT__clk));
    bufp->chgBit(oldp+604,((((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0) 
                             | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                            & (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0) 
                                | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)) 
                               & (((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_5) 
                                   | (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4)) 
                                  & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
                                      | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                                         | (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4))) 
                                     & ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3) 
                                        | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final))))))));
    bufp->chgQData(oldp+605,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
                              ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12)),64);
    bufp->chgQData(oldp+607,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
                              ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12)),64);
    bufp->chgQData(oldp+609,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
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
                                           : 0ULL) : 
                                      ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                            : 0ULL)
                                        : 0ULL))))),64);
    bufp->chgQData(oldp+611,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                               ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12
                               : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                       ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                           : 0ULL) : 
                                      ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                            : 0ULL)
                                        : 0ULL))))),64);
    bufp->chgQData(oldp+613,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                               ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                               : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                       ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                             ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)
                                             : 0xffffffffffffffffULL) 
                                           & (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                          | ((~ (((QData)((IData)(
                                                                  vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                             & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                 ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                 : 0ULL)))
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                               ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                               : 0ULL)
                                           : 0ULL))))),64);
    bufp->chgQData(oldp+615,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                               ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                   ? (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__nonce[2U])))
                                   : 0ULL) : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
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
                                                    : 0ULL))))),64);
    bufp->chgQData(oldp+617,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                               ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                   ? (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__nonce[0U])))
                                   : 0ULL) : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                               ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM
                                               : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                   ? 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                                    : 0ULL)
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                                     : 0ULL)
                                                    : 0ULL))))),64);
    bufp->chgQData(oldp+619,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? ((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                           ? (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3)
                                       : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                                      ? 0x1000808c0001ULL
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                                       ? 0x80100cc0002ULL
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                                        ? 0x80000cc0003ULL
                                                        : 0x80000cc0004ULL)))
                                                     : 
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8
                                                      : 
                                                     ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                       ? 
                                                      ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                                        : 0ULL)
                                                       : 
                                                      ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                        ? 
                                                       ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                                         : 0ULL)
                                                        : 0ULL))))
                                                    : 0ULL))),64);
    bufp->chgQData(oldp+621,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? ((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                           ? (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5)
                                       : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12
                                                     : 
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
                                                      : 
                                                     ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                       ? 
                                                      ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                                        : 0ULL)
                                                       : 
                                                      ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                        ? 
                                                       ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                                         : 0ULL)
                                                        : 0ULL))))
                                                    : 0ULL))),64);
    bufp->chgQData(oldp+623,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt
                                       : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                                                     : 
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                                      : 
                                                     ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
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
                                                    : 0ULL))),64);
    bufp->chgQData(oldp+625,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt
                                       : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_core__DOT__nonce[2U])))
                                                      : 0ULL)
                                                     : 
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                                      : 
                                                     ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
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
                                                    : 0ULL))),64);
    bufp->chgQData(oldp+627,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt
                                       : 0ULL)) : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_core__DOT__nonce[0U])))
                                                      : 0ULL)
                                                     : 
                                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM
                                                      : 
                                                     ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                       ? 
                                                      ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                                        : 0ULL)
                                                       : 
                                                      ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                        ? 
                                                       ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                                         : 0ULL)
                                                        : 0ULL))))
                                                    : 0ULL))),64);
    bufp->chgQData(oldp+629,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)))
                               : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)),64);
    bufp->chgQData(oldp+631,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)))
                               : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)),64);
    bufp->chgQData(oldp+633,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)))
                               : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)),64);
    bufp->chgQData(oldp+635,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)))
                               : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)),64);
    bufp->chgQData(oldp+637,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4)))
                               : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4)),64);
    if ((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)) {
        __Vtemp_12[0U] = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5);
        __Vtemp_12[1U] = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5 
                                  >> 0x20U));
        __Vtemp_12[2U] = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3);
        __Vtemp_12[3U] = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3 
                                  >> 0x20U));
    } else {
        __Vtemp_12[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
        __Vtemp_12[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
        __Vtemp_12[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
        __Vtemp_12[3U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U];
    }
    bufp->chgWData(oldp+639,(__Vtemp_12),128);
    bufp->chgQData(oldp+643,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                               ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save)),64);
    bufp->chgQData(oldp+645,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                               ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save)),64);
    bufp->chgQData(oldp+647,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                               ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save)),64);
    bufp->chgQData(oldp+649,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                               ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save)),64);
    bufp->chgQData(oldp+651,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                               ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save)),64);
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
