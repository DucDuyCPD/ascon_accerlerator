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
        bufp->chgBit(oldp+39,(((vlSelfRef.test_ascon_core__DOT__data_length 
                                < vlSelfRef.test_ascon_core__DOT__data_position) 
                               | (((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                                     | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)) 
                                    | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                   | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                                  & (((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                                        | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)) 
                                       | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                      | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)) 
                                     & ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                                          | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)) 
                                         | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final) 
                                            | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash))) 
                                        & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
                                            | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                                               | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final) 
                                                  | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)))) 
                                           & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                                               | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
                                                  | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash))) 
                                              | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)))))))));
        bufp->chgBit(oldp+40,(vlSelfRef.test_ascon_core__DOT__process_en_init));
        bufp->chgBit(oldp+41,(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM));
        bufp->chgBit(oldp+42,(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt));
        bufp->chgBit(oldp+43,(vlSelfRef.test_ascon_core__DOT__process_en_hash));
        bufp->chgBit(oldp+44,(vlSelfRef.test_ascon_core__DOT__process_en_final));
        bufp->chgBit(oldp+45,((vlSelfRef.test_ascon_core__DOT__data_length 
                               < vlSelfRef.test_ascon_core__DOT__data_position)));
        bufp->chgBit(oldp+46,((((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                                  | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)) 
                                 | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)) 
                               & (((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                                     | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)) 
                                    | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)) 
                                   | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)) 
                                  & ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                                       | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)) 
                                      | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final) 
                                         | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash))) 
                                     & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
                                         | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init) 
                                            | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final) 
                                               | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)))) 
                                        & (((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM) 
                                            | ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) 
                                               | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash))) 
                                           | (IData)(vlSelfRef.test_ascon_core__DOT__process_en_final))))))));
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
        bufp->chgQData(oldp+61,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8
                                  : ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? (0x8000000000000000ULL 
                                         ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)
                                      : (0x8000000000000000ULL 
                                         ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8)))),64);
        bufp->chgQData(oldp+63,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8)),64);
        bufp->chgQData(oldp+65,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM)),64);
        bufp->chgQData(oldp+67,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM)),64);
        bufp->chgQData(oldp+69,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM)),64);
        bufp->chgQData(oldp+71,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)),64);
        bufp->chgQData(oldp+73,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8))),64);
        bufp->chgQData(oldp+75,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM))),64);
        bufp->chgQData(oldp+77,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM))),64);
        bufp->chgQData(oldp+79,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                  ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                          ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                          : 0ULL)) : 
                                 ((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                   ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                       : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM))),64);
        bufp->chgQData(oldp+81,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
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
        bufp->chgQData(oldp+83,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp)),64);
        bufp->chgQData(oldp+85,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp)),64);
        bufp->chgQData(oldp+87,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt)),64);
        bufp->chgQData(oldp+89,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                  ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                      : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt)),64);
        bufp->chgQData(oldp+91,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
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
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                  : 0ULL)),64);
        bufp->chgQData(oldp+97,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                  : 0ULL)),64);
        bufp->chgQData(oldp+99,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                  : 0ULL)),64);
        bufp->chgQData(oldp+101,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+103,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+105,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+107,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+109,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+111,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+113,(((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                   ? (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                                   : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3)),64);
        bufp->chgQData(oldp+115,(((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                   ? (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                   : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5)),64);
        bufp->chgQData(oldp+117,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+119,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+121,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+123,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+125,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8
                                   : 0ULL)),64);
        bufp->chgQData(oldp+127,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+129,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+131,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+133,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+135,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+137,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL)),64);
        bufp->chgQData(oldp+139,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+141,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+143,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                       : 0ULL))),64);
        bufp->chgQData(oldp+145,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
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
        bufp->chgQData(oldp+147,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                   : 0ULL)),64);
        bufp->chgQData(oldp+149,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                   : 0ULL)),64);
        bufp->chgQData(oldp+151,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                   : 0ULL)),64);
        bufp->chgQData(oldp+153,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                   : 0ULL)),64);
        bufp->chgQData(oldp+155,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                   : 0ULL)),64);
        bufp->chgQData(oldp+157,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                   : 0ULL)),64);
        bufp->chgQData(oldp+159,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                   : 0ULL)),64);
        bufp->chgQData(oldp+161,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                   : 0ULL)),64);
        bufp->chgQData(oldp+163,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                   : 0ULL)),64);
        bufp->chgQData(oldp+165,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                   : 0ULL)),64);
        bufp->chgQData(oldp+167,(((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
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
        bufp->chgQData(oldp+169,(((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
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
        bufp->chgWData(oldp+171,(__Vtemp_9),128);
        bufp->chgQData(oldp+175,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)))),64);
        bufp->chgQData(oldp+177,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)))),64);
        bufp->chgQData(oldp+179,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)))),64);
        bufp->chgQData(oldp+181,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt
                                       : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                           ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash
                                           : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)))),64);
        bufp->chgQData(oldp+183,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
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
        bufp->chgWData(oldp+185,(vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out),128);
        bufp->chgWData(oldp+189,(vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out),128);
        bufp->chgWData(oldp+193,(vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out),128);
        bufp->chgDouble(oldp+197,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__encrypt_cycle_use));
        bufp->chgDouble(oldp+199,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__decrypt_cycle_use));
        bufp->chgDouble(oldp+201,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__hash_cycle_use));
        bufp->chgQData(oldp+203,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time),64);
        bufp->chgQData(oldp+205,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgQData(oldp+207,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12),64);
        bufp->chgQData(oldp+209,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12),64);
        bufp->chgIData(oldp+211,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position),32);
        bufp->chgQData(oldp+212,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last),64);
        bufp->chgQData(oldp+214,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgQData(oldp+216,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init),64);
        bufp->chgQData(oldp+218,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init),64);
        bufp->chgQData(oldp+220,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init),64);
        bufp->chgQData(oldp+222,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM),64);
        bufp->chgQData(oldp+224,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM),64);
        bufp->chgQData(oldp+226,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM),64);
        bufp->chgQData(oldp+228,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM),64);
        bufp->chgQData(oldp+230,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM),64);
        bufp->chgQData(oldp+232,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+234,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+236,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+238,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+240,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt),64);
        bufp->chgQData(oldp+242,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12),64);
        bufp->chgQData(oldp+244,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_p12),64);
        bufp->chgQData(oldp+246,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12),64);
        bufp->chgQData(oldp+248,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p12),64);
        bufp->chgQData(oldp+250,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8),64);
        bufp->chgQData(oldp+252,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_p8),64);
        bufp->chgQData(oldp+254,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8),64);
        bufp->chgQData(oldp+256,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_p8),64);
        bufp->chgQData(oldp+258,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12),64);
        bufp->chgQData(oldp+260,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12),64);
        bufp->chgQData(oldp+262,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12),64);
        bufp->chgQData(oldp+264,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12),64);
        bufp->chgQData(oldp+266,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12),64);
        bufp->chgQData(oldp+268,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8),64);
        bufp->chgQData(oldp+270,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8),64);
        bufp->chgQData(oldp+272,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8),64);
        bufp->chgQData(oldp+274,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8),64);
        bufp->chgQData(oldp+276,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8),64);
        bufp->chgQData(oldp+278,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12),64);
        bufp->chgQData(oldp+280,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12),64);
        bufp->chgQData(oldp+282,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8),64);
        bufp->chgQData(oldp+284,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8),64);
        bufp->chgQData(oldp+286,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8),64);
        bufp->chgQData(oldp+288,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12),64);
        bufp->chgWData(oldp+290,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last),128);
        bufp->chgQData(oldp+294,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp),64);
        bufp->chgQData(oldp+296,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp),64);
        bufp->chgQData(oldp+298,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0),64);
        bufp->chgQData(oldp+300,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1),64);
        bufp->chgQData(oldp+302,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0]),64);
        bufp->chgQData(oldp+304,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1]),64);
        bufp->chgQData(oldp+306,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2]),64);
        bufp->chgQData(oldp+308,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3]),64);
        bufp->chgQData(oldp+310,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4]),64);
        bufp->chgQData(oldp+312,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+314,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+316,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+318,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+320,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+322,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+324,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+326,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[7]),64);
        bufp->chgQData(oldp+328,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[8]),64);
        bufp->chgQData(oldp+330,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[9]),64);
        bufp->chgQData(oldp+332,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x0_round[10]),64);
        bufp->chgQData(oldp+334,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+336,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+338,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+340,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+342,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+344,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+346,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+348,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[7]),64);
        bufp->chgQData(oldp+350,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[8]),64);
        bufp->chgQData(oldp+352,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[9]),64);
        bufp->chgQData(oldp+354,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x1_round[10]),64);
        bufp->chgQData(oldp+356,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+358,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+360,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+362,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+364,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+366,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+368,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+370,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[7]),64);
        bufp->chgQData(oldp+372,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[8]),64);
        bufp->chgQData(oldp+374,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[9]),64);
        bufp->chgQData(oldp+376,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x2_round[10]),64);
        bufp->chgQData(oldp+378,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+380,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+382,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+384,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+386,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+388,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+390,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+392,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[7]),64);
        bufp->chgQData(oldp+394,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[8]),64);
        bufp->chgQData(oldp+396,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[9]),64);
        bufp->chgQData(oldp+398,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x3_round[10]),64);
        bufp->chgQData(oldp+400,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+402,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+404,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+406,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+408,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+410,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+412,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+414,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[7]),64);
        bufp->chgQData(oldp+416,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[8]),64);
        bufp->chgQData(oldp+418,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[9]),64);
        bufp->chgQData(oldp+420,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__x4_round[10]),64);
        bufp->chgQData(oldp+422,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+424,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+426,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+428,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+430,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+432,(((0xf0ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_p12)) 
                                  | (0xffffffffffffff0fULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_p12))),64);
        bufp->chgQData(oldp+434,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12)),64);
        bufp->chgQData(oldp+436,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p12) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+438,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12)),64);
        bufp->chgQData(oldp+440,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p12) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+442,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+444,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+446,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+448,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+450,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+452,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+454,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x4_s),64);
        bufp->chgQData(oldp+456,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+458,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+460,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+462,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+464,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+466,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+468,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+470,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+472,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+474,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+476,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+478,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+480,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r0__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+482,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+484,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+486,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+488,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+490,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+492,(((0xe1ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o)) 
                                  | (0xffffffffffffff1eULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o))),64);
        bufp->chgQData(oldp+494,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+496,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+498,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+500,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+502,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+504,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+506,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+508,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+510,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+512,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+514,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_s),64);
        bufp->chgQData(oldp+516,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+518,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+520,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+522,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+524,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+526,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+528,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+530,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+532,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+534,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+536,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+538,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+540,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+542,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc),64);
        bufp->chgQData(oldp+544,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc),64);
        bufp->chgQData(oldp+546,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o),64);
        bufp->chgQData(oldp+548,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc),64);
        bufp->chgQData(oldp+550,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc),64);
        bufp->chgQData(oldp+552,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc),64);
        bufp->chgQData(oldp+554,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc),64);
        bufp->chgQData(oldp+556,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o),64);
        bufp->chgQData(oldp+558,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc),64);
        bufp->chgQData(oldp+560,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc),64);
        bufp->chgQData(oldp+562,(((0x5aULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o)) 
                                  | (0xffffffffffffffa5ULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o))),64);
        bufp->chgQData(oldp+564,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc)),64);
        bufp->chgQData(oldp+566,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+568,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc)),64);
        bufp->chgQData(oldp+570,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+572,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+574,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__f),64);
        bufp->chgQData(oldp+576,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s),64);
        bufp->chgQData(oldp+578,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s),64);
        bufp->chgQData(oldp+580,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+582,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s),64);
        bufp->chgQData(oldp+584,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_s),64);
        bufp->chgQData(oldp+586,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+588,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+590,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+592,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+594,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+596,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+598,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+600,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+602,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+604,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+606,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+608,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+610,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+612,(((0x4bULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o)) 
                                  | (0xffffffffffffffb4ULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o))),64);
        bufp->chgQData(oldp+614,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc)),64);
        bufp->chgQData(oldp+616,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+618,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc)),64);
        bufp->chgQData(oldp+620,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+622,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+624,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__f),64);
        bufp->chgQData(oldp+626,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s),64);
        bufp->chgQData(oldp+628,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s),64);
        bufp->chgQData(oldp+630,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+632,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s),64);
        bufp->chgQData(oldp+634,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_s),64);
        bufp->chgQData(oldp+636,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+638,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+640,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+642,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+644,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+646,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+648,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+650,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+652,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+654,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+656,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+658,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+660,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+662,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+664,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+666,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+668,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+670,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+672,(((0xd2ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o)) 
                                  | (0xffffffffffffff2dULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o))),64);
        bufp->chgQData(oldp+674,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+676,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+678,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+680,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+682,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+684,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+686,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+688,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+690,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+692,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+694,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_s),64);
        bufp->chgQData(oldp+696,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+698,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+700,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+702,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+704,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+706,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+708,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+710,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+712,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+714,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+716,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+718,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+720,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+722,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+724,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+726,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+728,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+730,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+732,(((0xc3ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o)) 
                                  | (0xffffffffffffff3cULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o))),64);
        bufp->chgQData(oldp+734,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+736,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+738,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+740,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+742,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+744,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+746,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+748,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+750,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+752,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+754,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_s),64);
        bufp->chgQData(oldp+756,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+758,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+760,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+762,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+764,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+766,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+768,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+770,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+772,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+774,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+776,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+778,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+780,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+782,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+784,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+786,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+788,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+790,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+792,(((0xb4ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o)) 
                                  | (0xffffffffffffff4bULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o))),64);
        bufp->chgQData(oldp+794,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+796,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+798,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+800,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+802,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+804,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+806,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+808,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+810,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+812,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+814,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_s),64);
        bufp->chgQData(oldp+816,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+818,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+820,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+822,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+824,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+826,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+828,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+830,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+832,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+834,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+836,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+838,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+840,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+842,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+844,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+846,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+848,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+850,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+852,(((0xa5ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o)) 
                                  | (0xffffffffffffff5aULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o))),64);
        bufp->chgQData(oldp+854,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+856,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+858,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+860,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+862,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+864,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+866,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+868,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+870,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+872,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+874,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_s),64);
        bufp->chgQData(oldp+876,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+878,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+880,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+882,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+884,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+886,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+888,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+890,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+892,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+894,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+896,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+898,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+900,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+902,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+904,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+906,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+908,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+910,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+912,(((0x96ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o)) 
                                  | (0xffffffffffffff69ULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o))),64);
        bufp->chgQData(oldp+914,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+916,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+918,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+920,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+922,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+924,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+926,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+928,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+930,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+932,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+934,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_s),64);
        bufp->chgQData(oldp+936,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+938,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+940,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                   << 3U) | (QData)((IData)(
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                                                        >> 0x3dU))))))),64);
        bufp->chgQData(oldp+942,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                   << 0x19U) | (QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s 
                                                                           >> 0x27U))))))),64);
        bufp->chgQData(oldp+944,((((QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3fU) | (0x7fffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 1U))))),64);
        bufp->chgQData(oldp+946,((((QData)((IData)(
                                                   (0x3fU 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                   << 0x3aU) | (0x3ffffffffffffffULL 
                                                & (~ 
                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
                                                    >> 6U))))),64);
        bufp->chgQData(oldp+948,((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
                                                >> 0xaU))),64);
        bufp->chgQData(oldp+950,((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s)))) 
                                   << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s 
                                                >> 0x11U))),64);
        bufp->chgQData(oldp+952,((((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_s)))) 
                                   << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_s 
                                                >> 7U))),64);
        bufp->chgQData(oldp+954,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_s 
                                   << 0x17U) | (QData)((IData)(
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_s 
                                                                           >> 0x29U))))))),64);
        bufp->chgQData(oldp+956,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+958,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+960,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+962,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc),64);
        bufp->chgQData(oldp+964,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc),64);
        bufp->chgQData(oldp+966,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o),64);
        bufp->chgQData(oldp+968,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc),64);
        bufp->chgQData(oldp+970,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc),64);
        bufp->chgQData(oldp+972,(((0x87ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o)) 
                                  | (0xffffffffffffff78ULL 
                                     & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o))),64);
        bufp->chgQData(oldp+974,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc_xor_x4_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+976,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+978,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x2_rc_xor_x1_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+980,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+982,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc_xor_x3_rc) 
                                  & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+984,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+986,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+988,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+990,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+992,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+994,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_s),64);
        bufp->chgQData(oldp+996,((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
                                                >> 0x13U))),64);
        bufp->chgQData(oldp+998,((((QData)((IData)(
                                                   (0xfffffffU 
                                                    & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s)))) 
                                   << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s 
                                                >> 0x1cU))),64);
        bufp->chgQData(oldp+1000,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1002,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1004,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1006,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1008,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1010,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1012,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1014,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1016,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1018,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1020,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1022,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc),64);
        bufp->chgQData(oldp+1024,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc),64);
        bufp->chgQData(oldp+1026,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o),64);
        bufp->chgQData(oldp+1028,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc),64);
        bufp->chgQData(oldp+1030,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc),64);
        bufp->chgQData(oldp+1032,(((0x78ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o)) 
                                   | (0xffffffffffffff87ULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o))),64);
        bufp->chgQData(oldp+1034,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1036,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1038,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1040,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1042,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1044,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__f),64);
        bufp->chgQData(oldp+1046,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s),64);
        bufp->chgQData(oldp+1048,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s),64);
        bufp->chgQData(oldp+1050,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1052,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s),64);
        bufp->chgQData(oldp+1054,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_s),64);
        bufp->chgQData(oldp+1056,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1058,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1060,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1062,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1064,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1066,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1068,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1070,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1072,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1074,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1076,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1078,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1080,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1082,(((0x69ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o)) 
                                   | (0xffffffffffffff96ULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o))),64);
        bufp->chgQData(oldp+1084,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1086,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1088,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1090,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1092,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1094,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__f),64);
        bufp->chgQData(oldp+1096,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s),64);
        bufp->chgQData(oldp+1098,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s),64);
        bufp->chgQData(oldp+1100,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1102,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s),64);
        bufp->chgQData(oldp+1104,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_s),64);
        bufp->chgQData(oldp+1106,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1108,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1110,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1112,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1114,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1116,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1118,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1120,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1122,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1124,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1126,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1128,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1130,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1132,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[0]),64);
        bufp->chgQData(oldp+1134,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[1]),64);
        bufp->chgQData(oldp+1136,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[2]),64);
        bufp->chgQData(oldp+1138,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[3]),64);
        bufp->chgQData(oldp+1140,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[4]),64);
        bufp->chgQData(oldp+1142,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[5]),64);
        bufp->chgQData(oldp+1144,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x0_round[6]),64);
        bufp->chgQData(oldp+1146,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[0]),64);
        bufp->chgQData(oldp+1148,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[1]),64);
        bufp->chgQData(oldp+1150,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[2]),64);
        bufp->chgQData(oldp+1152,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[3]),64);
        bufp->chgQData(oldp+1154,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[4]),64);
        bufp->chgQData(oldp+1156,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[5]),64);
        bufp->chgQData(oldp+1158,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x1_round[6]),64);
        bufp->chgQData(oldp+1160,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[0]),64);
        bufp->chgQData(oldp+1162,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[1]),64);
        bufp->chgQData(oldp+1164,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[2]),64);
        bufp->chgQData(oldp+1166,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[3]),64);
        bufp->chgQData(oldp+1168,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[4]),64);
        bufp->chgQData(oldp+1170,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[5]),64);
        bufp->chgQData(oldp+1172,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x2_round[6]),64);
        bufp->chgQData(oldp+1174,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[0]),64);
        bufp->chgQData(oldp+1176,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[1]),64);
        bufp->chgQData(oldp+1178,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[2]),64);
        bufp->chgQData(oldp+1180,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[3]),64);
        bufp->chgQData(oldp+1182,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[4]),64);
        bufp->chgQData(oldp+1184,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[5]),64);
        bufp->chgQData(oldp+1186,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x3_round[6]),64);
        bufp->chgQData(oldp+1188,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[0]),64);
        bufp->chgQData(oldp+1190,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[1]),64);
        bufp->chgQData(oldp+1192,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[2]),64);
        bufp->chgQData(oldp+1194,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[3]),64);
        bufp->chgQData(oldp+1196,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[4]),64);
        bufp->chgQData(oldp+1198,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[5]),64);
        bufp->chgQData(oldp+1200,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__x4_round[6]),64);
        bufp->chgQData(oldp+1202,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc),64);
        bufp->chgQData(oldp+1204,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc),64);
        bufp->chgQData(oldp+1206,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o),64);
        bufp->chgQData(oldp+1208,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc),64);
        bufp->chgQData(oldp+1210,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc),64);
        bufp->chgQData(oldp+1212,(((0xb4ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_p8)) 
                                   | (0xffffffffffffff4bULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_p8))),64);
        bufp->chgQData(oldp+1214,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8)),64);
        bufp->chgQData(oldp+1216,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_p8) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1218,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8)),64);
        bufp->chgQData(oldp+1220,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_p8) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1222,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1224,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__f),64);
        bufp->chgQData(oldp+1226,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s),64);
        bufp->chgQData(oldp+1228,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s),64);
        bufp->chgQData(oldp+1230,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1232,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s),64);
        bufp->chgQData(oldp+1234,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x4_s),64);
        bufp->chgQData(oldp+1236,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1238,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1240,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1242,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1244,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1246,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1248,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1250,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1252,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1254,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1256,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1258,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1260,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r0__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1262,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc),64);
        bufp->chgQData(oldp+1264,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc),64);
        bufp->chgQData(oldp+1266,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o),64);
        bufp->chgQData(oldp+1268,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc),64);
        bufp->chgQData(oldp+1270,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc),64);
        bufp->chgQData(oldp+1272,(((0xa5ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o)) 
                                   | (0xffffffffffffff5aULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o))),64);
        bufp->chgQData(oldp+1274,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1276,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1278,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1280,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1282,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1284,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__f),64);
        bufp->chgQData(oldp+1286,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s),64);
        bufp->chgQData(oldp+1288,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s),64);
        bufp->chgQData(oldp+1290,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1292,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s),64);
        bufp->chgQData(oldp+1294,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_s),64);
        bufp->chgQData(oldp+1296,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1298,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1300,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1302,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1304,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1306,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1308,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1310,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1312,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1314,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1316,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1318,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1320,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1322,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc),64);
        bufp->chgQData(oldp+1324,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc),64);
        bufp->chgQData(oldp+1326,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o),64);
        bufp->chgQData(oldp+1328,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc),64);
        bufp->chgQData(oldp+1330,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc),64);
        bufp->chgQData(oldp+1332,(((0x96ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o)) 
                                   | (0xffffffffffffff69ULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o))),64);
        bufp->chgQData(oldp+1334,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1336,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1338,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1340,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1342,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1344,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__f),64);
        bufp->chgQData(oldp+1346,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s),64);
        bufp->chgQData(oldp+1348,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s),64);
        bufp->chgQData(oldp+1350,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1352,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s),64);
        bufp->chgQData(oldp+1354,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_s),64);
        bufp->chgQData(oldp+1356,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1358,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1360,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1362,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1364,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1366,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1368,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1370,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1372,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1374,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1376,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1378,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1380,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1382,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc),64);
        bufp->chgQData(oldp+1384,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc),64);
        bufp->chgQData(oldp+1386,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o),64);
        bufp->chgQData(oldp+1388,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc),64);
        bufp->chgQData(oldp+1390,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc),64);
        bufp->chgQData(oldp+1392,(((0x87ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o)) 
                                   | (0xffffffffffffff78ULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o))),64);
        bufp->chgQData(oldp+1394,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1396,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1398,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1400,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1402,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1404,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__f),64);
        bufp->chgQData(oldp+1406,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s),64);
        bufp->chgQData(oldp+1408,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s),64);
        bufp->chgQData(oldp+1410,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1412,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s),64);
        bufp->chgQData(oldp+1414,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_s),64);
        bufp->chgQData(oldp+1416,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1418,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1420,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1422,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1424,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1426,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1428,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1430,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1432,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1434,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1436,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1438,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1440,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1442,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc),64);
        bufp->chgQData(oldp+1444,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc),64);
        bufp->chgQData(oldp+1446,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o),64);
        bufp->chgQData(oldp+1448,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc),64);
        bufp->chgQData(oldp+1450,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc),64);
        bufp->chgQData(oldp+1452,(((0x78ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o)) 
                                   | (0xffffffffffffff87ULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o))),64);
        bufp->chgQData(oldp+1454,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1456,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1458,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1460,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1462,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1464,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__f),64);
        bufp->chgQData(oldp+1466,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s),64);
        bufp->chgQData(oldp+1468,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s),64);
        bufp->chgQData(oldp+1470,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1472,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s),64);
        bufp->chgQData(oldp+1474,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_s),64);
        bufp->chgQData(oldp+1476,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1478,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1480,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1482,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1484,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1486,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1488,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1490,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1492,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1494,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1496,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1498,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1500,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1502,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc),64);
        bufp->chgQData(oldp+1504,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc),64);
        bufp->chgQData(oldp+1506,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o),64);
        bufp->chgQData(oldp+1508,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc),64);
        bufp->chgQData(oldp+1510,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc),64);
        bufp->chgQData(oldp+1512,(((0x69ULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o)) 
                                   | (0xffffffffffffff96ULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o))),64);
        bufp->chgQData(oldp+1514,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1516,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1518,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1520,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1522,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1524,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__f),64);
        bufp->chgQData(oldp+1526,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s),64);
        bufp->chgQData(oldp+1528,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s),64);
        bufp->chgQData(oldp+1530,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1532,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s),64);
        bufp->chgQData(oldp+1534,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_s),64);
        bufp->chgQData(oldp+1536,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1538,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1540,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1542,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1544,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1546,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1548,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1550,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1552,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1554,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1556,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1558,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1560,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1562,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc),64);
        bufp->chgQData(oldp+1564,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc),64);
        bufp->chgQData(oldp+1566,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o),64);
        bufp->chgQData(oldp+1568,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc),64);
        bufp->chgQData(oldp+1570,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc),64);
        bufp->chgQData(oldp+1572,(((0x5aULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o)) 
                                   | (0xffffffffffffffa5ULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o))),64);
        bufp->chgQData(oldp+1574,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1576,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1578,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1580,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1582,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1584,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__f),64);
        bufp->chgQData(oldp+1586,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s),64);
        bufp->chgQData(oldp+1588,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s),64);
        bufp->chgQData(oldp+1590,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1592,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s),64);
        bufp->chgQData(oldp+1594,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_s),64);
        bufp->chgQData(oldp+1596,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1598,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1600,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1602,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1604,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1606,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1608,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1610,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1612,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1614,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1616,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1618,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1620,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc_xor_x3_rc),64);
        bufp->chgQData(oldp+1622,(((0x4bULL & (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o)) 
                                   | (0xffffffffffffffb4ULL 
                                      & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o))),64);
        bufp->chgQData(oldp+1624,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc_xor_x4_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc)),64);
        bufp->chgQData(oldp+1626,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x2_rc_xor_x1_rc)),64);
        bufp->chgQData(oldp+1628,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x2_rc_xor_x1_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc)),64);
        bufp->chgQData(oldp+1630,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc_xor_x3_rc)),64);
        bufp->chgQData(oldp+1632,(((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc_xor_x3_rc) 
                                   & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc_xor_x4_rc)),64);
        bufp->chgQData(oldp+1634,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__f),64);
        bufp->chgQData(oldp+1636,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s),64);
        bufp->chgQData(oldp+1638,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s),64);
        bufp->chgQData(oldp+1640,((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
        bufp->chgQData(oldp+1642,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s),64);
        bufp->chgQData(oldp+1644,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_s),64);
        bufp->chgQData(oldp+1646,((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                 >> 0x13U))),64);
        bufp->chgQData(oldp+1648,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                    << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                 >> 0x1cU))),64);
        bufp->chgQData(oldp+1650,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                         >> 0x3dU))))))),64);
        bufp->chgQData(oldp+1652,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                    << 0x19U) | (QData)((IData)(
                                                                (0x1ffffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                            >> 0x27U))))))),64);
        bufp->chgQData(oldp+1654,((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 1U))))),64);
        bufp->chgQData(oldp+1656,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))))) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (~ 
                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0 
                                                     >> 6U))))),64);
        bufp->chgQData(oldp+1658,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                 >> 0xaU))),64);
        bufp->chgQData(oldp+1660,((((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                    << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                 >> 0x11U))),64);
        bufp->chgQData(oldp+1662,((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_s 
                                                 >> 7U))),64);
        bufp->chgQData(oldp+1664,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_s 
                                    << 0x17U) | (QData)((IData)(
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_s 
                                                                            >> 0x29U))))))),64);
        bufp->chgQData(oldp+1666,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc_xor_x4_rc),64);
        bufp->chgQData(oldp+1668,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x2_rc_xor_x1_rc),64);
        bufp->chgQData(oldp+1670,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc_xor_x3_rc),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgWData(oldp+1672,(vlSelfRef.test_ascon_core__DOT__data_out),128);
        bufp->chgBit(oldp+1676,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
        bufp->chgWData(oldp+1677,(vlSelfRef.test_ascon_core__DOT__tag),128);
        bufp->chgQData(oldp+1681,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0),64);
        bufp->chgQData(oldp+1683,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1),64);
        bufp->chgQData(oldp+1685,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2),64);
        bufp->chgQData(oldp+1687,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3),64);
        bufp->chgQData(oldp+1689,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4),64);
        bufp->chgQData(oldp+1691,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM),64);
        bufp->chgQData(oldp+1693,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM),64);
        bufp->chgQData(oldp+1695,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM),64);
        bufp->chgQData(oldp+1697,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM),64);
        bufp->chgQData(oldp+1699,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM),64);
        bufp->chgQData(oldp+1701,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1703,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1705,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1707,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1709,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt),64);
        bufp->chgQData(oldp+1711,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash),64);
        bufp->chgQData(oldp+1713,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash),64);
        bufp->chgQData(oldp+1715,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash),64);
        bufp->chgQData(oldp+1717,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash),64);
        bufp->chgQData(oldp+1719,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash),64);
        bufp->chgWData(oldp+1721,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out),128);
        bufp->chgQData(oldp+1725,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out),64);
    }
    bufp->chgBit(oldp+1727,(vlSelfRef.test_ascon_core__DOT__clk));
    bufp->chgQData(oldp+1728,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12)),64);
    bufp->chgQData(oldp+1730,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12)),64);
    bufp->chgQData(oldp+1732,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
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
    bufp->chgQData(oldp+1734,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)),64);
    bufp->chgQData(oldp+1736,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)),64);
    bufp->chgQData(oldp+1738,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)),64);
    bufp->chgQData(oldp+1740,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)),64);
    bufp->chgQData(oldp+1742,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
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
    bufp->chgWData(oldp+1744,(__Vtemp_12),128);
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
