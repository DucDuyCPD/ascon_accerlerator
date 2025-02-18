// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_encrypt_decrypt.h for the primary calling header

#include "Vtest_ascon_encrypt_decrypt__pch.h"
#include "Vtest_ascon_encrypt_decrypt__Syms.h"
#include "Vtest_ascon_encrypt_decrypt___024root.h"

VL_INLINE_OPT VlCoroutine Vtest_ascon_encrypt_decrypt___024root___eval_initial__TOP__Vtiming__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__LENGTH;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__LENGTH = 0;
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__POSITION;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__POSITION = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA;
    VL_ZERO_W(128, __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA);
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__LENGTH;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__LENGTH = 0;
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__POSITION;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__POSITION = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA;
    VL_ZERO_W(128, __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA);
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__LENGTH;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__LENGTH = 0;
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__POSITION;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__POSITION = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA;
    VL_ZERO_W(128, __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA);
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__LENGTH;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__LENGTH = 0;
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__POSITION;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__POSITION = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA;
    VL_ZERO_W(128, __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA);
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__LENGTH;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__LENGTH = 0;
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__POSITION;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__POSITION = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA;
    VL_ZERO_W(128, __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA);
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__LENGTH;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__LENGTH = 0;
    IData/*31:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__POSITION;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__POSITION = 0;
    VlWide<4>/*127:0*/ __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA;
    VL_ZERO_W(128, __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA);
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         271);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__rst_n = 1U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_AE_AM = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         278);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("========initialization========\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\n",0,
                 64,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                      ^ ((((QData)((IData)((0x7ffffU 
                                            & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                           << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                        >> 0x13U)) 
                         ^ (((QData)((IData)((0xfffffffU 
                                              & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                             << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                          >> 0x1cU)))) 
                     ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[8U])))),
                 64,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                      ^ (((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                           << 3U) | (QData)((IData)(
                                                    (7U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                >> 0x3dU)))))) 
                         ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                             << 0x19U) | (QData)((IData)(
                                                         (0x1ffffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                     >> 0x27U)))))))) 
                     ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[6U])))),
                 64,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h) 
                      ^ ((((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                           << 0x3fU) | (0x7fffffffffffffffULL 
                                        & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                              >> 1U)))) 
                         ^ (((QData)((IData)((0x3fU 
                                              & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                             << 0x3aU) | (0x3ffffffffffffffULL 
                                          & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                >> 6U)))))) 
                     ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[4U])))),
                 64,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                      ^ ((((QData)((IData)((0x3ffU 
                                            & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                           << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                        >> 0xaU)) ^ 
                         (((QData)((IData)((0x1ffffU 
                                            & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                           << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                        >> 0x11U)))) 
                     ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[2U])))),
                 64,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                      ^ ((((QData)((IData)((0x7fU & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                           << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                        >> 7U)) ^ (
                                                   (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                    << 0x17U) 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                                >> 0x29U)))))))) 
                     ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[0U])))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length = 0x3eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U] = 0x7420796dU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U] = 0x20747365U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U] = 0x73696854U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U] = 0x20736920U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
        = ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
            ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                              >> 0x13U)) ^ (((QData)((IData)(
                                                             (0xfffffffU 
                                                              & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                             << 0x24U) 
                                            | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                               >> 0x1cU)))) 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[9U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[8U]))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
        = ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
            ^ (((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                 << 3U) | (QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                         >> 0x3dU)))))) 
               ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                   << 0x19U) | (QData)((IData)((0x1ffffffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                           >> 0x27U)))))))) 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[7U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[6U]))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM 
        = (((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h) 
            ^ ((((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                 << 0x3fU) | (0x7fffffffffffffffULL 
                              & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                    >> 1U)))) ^ (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                                  << 0x3aU) 
                                                 | (0x3ffffffffffffffULL 
                                                    & (~ 
                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                        >> 6U)))))) 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[5U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[4U]))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
        = ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
            ^ ((((QData)((IData)((0x3ffU & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                              >> 0xaU)) ^ (((QData)((IData)(
                                                            (0x1ffffU 
                                                             & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                            << 0x2fU) 
                                           | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                              >> 0x11U)))) 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[3U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[2U]))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM 
        = ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
            ^ ((((QData)((IData)((0x7fU & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                              >> 7U)) ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                          << 0x17U) 
                                         | (QData)((IData)(
                                                           (0x7fffffU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                       >> 0x29U)))))))) 
           ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[1U])) 
               << 0x20U) | (QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[0U]))));
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         296);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("==========AE_AM_LOOP==========\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\n",0,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM);
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA[0U] = 0x69737365U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA[1U] = 0x6120676eU;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA[2U] = 0x20726f66U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA[3U] = 0x636f7270U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__POSITION = 0x10U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__LENGTH = 0x3eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__LENGTH;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__POSITION;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA[0U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA[1U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA[2U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__0__DATA[3U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("==========AE_AM_LOOP==========\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\n",0,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM);
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA[0U] = 0x61642064U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA[1U] = 0x73206174U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA[2U] = 0x636f7373U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA[3U] = 0x65746169U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__POSITION = 0x20U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__LENGTH = 0x3eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__LENGTH;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__POSITION;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA[0U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA[1U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA[2U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__1__DATA[3U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("==========AE_AM_LOOP==========\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\n",0,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM);
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA[0U] = 0x6f736261U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA[1U] = 0x65746272U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA[2U] = 0x6e612070U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA[3U] = 0x2064U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__POSITION = 0x30U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__LENGTH = 0x3eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__LENGTH;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__POSITION;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[0U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA[0U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[1U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA[1U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[2U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA[2U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__data[3U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__AE_AM_LOOP__2__DATA[3U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("==========AE_AM_LOOP==========\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\n",0,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM);
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_AE_AM = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_encrypt_decrypt = 1U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__encrypt_decrypt_mode_sel = 1U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length = 0x3eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U] = 0x18ce73bfU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U] = 0x9b07659eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U] = 0xffbdc18U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U] = 0x9f054326U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         348);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=====ENCRYPT_DECRYPT_LOOP=====\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\nplaintext_ciphertext = %16x\n",0,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt,
                 128,vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout.data());
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA[0U] = 0xbc8ceca8U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA[1U] = 0xc799a614U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA[2U] = 0xcde5c93cU;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA[3U] = 0x8cccbaf0U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__POSITION = 0x10U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__LENGTH = 0x3eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__LENGTH;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__POSITION;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA[0U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA[1U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA[2U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__3__DATA[3U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         256);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=====ENCRYPT_DECRYPT_LOOP=====\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\nplaintext_ciphertext = %16x\n",0,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt,
                 128,vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout.data());
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA[0U] = 0x2b9c6ad2U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA[1U] = 0x175e00bfU;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA[2U] = 0xa1116999U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA[3U] = 0xfe1edd42U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__POSITION = 0x20U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__LENGTH = 0x3eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__LENGTH;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__POSITION;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA[0U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA[1U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA[2U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__4__DATA[3U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         256);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=====ENCRYPT_DECRYPT_LOOP=====\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\nplaintext_ciphertext = %16x\n",0,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt,
                 128,vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout.data());
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA[0U] = 0x5724dae8U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA[1U] = 0x3af7c516U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA[2U] = 0xbbc21032U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA[3U] = 0xb6e8U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__POSITION = 0x30U;
    __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__LENGTH = 0x3eU;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__LENGTH;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__POSITION;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA[0U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA[1U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA[2U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U] 
        = __Vtask_test_ascon_encrypt_decrypt__DOT__ENCRYPT_DECRYPT_LOOP__5__DATA[3U];
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         256);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=====ENCRYPT_DECRYPT_LOOP=====\nx0_o = %16x\nx1_o = %16x\nx2_o = %16x\nx3_o = %16x\nx4_o = %16x\nplaintext_ciphertext = %16x\n",0,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt,
                 64,vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt,
                 128,vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout.data());
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_encrypt_decrypt = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__encrypt_decrypt_mode_sel = 0U;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_final 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_final 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_final 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_final 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt;
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_final 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         370);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=========FINALIZATION=========\ntag = %16x\n",0,
                 128,vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag.data());
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../tb/test_ascon_encrypt_decrypt.sv", 
                                         375);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("../tb/test_ascon_encrypt_decrypt.sv", 375, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root___dump_triggers__act(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_ascon_encrypt_decrypt___024root___eval_triggers__act(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_encrypt_decrypt__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_encrypt_decrypt__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_encrypt_decrypt__DOT__clk__0 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_encrypt_decrypt__DOT__rst_n__0 
        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_encrypt_decrypt___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtest_ascon_encrypt_decrypt___024root___act_sequent__TOP__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);

void Vtest_ascon_encrypt_decrypt___024root___eval_act(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_ascon_encrypt_decrypt___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12));
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___act_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12));
    }
}

void Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);
void Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__1(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);
void Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__2(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__1(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);
void Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__3(Vtest_ascon_encrypt_decrypt___024root* vlSelf);
void Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__1(Vtest_ascon_encrypt_decrypt_ascon_permutation_p12* vlSelf);

void Vtest_ascon_encrypt_decrypt___024root___eval_nba(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12));
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12));
        Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__1((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__3(vlSelf);
        Vtest_ascon_encrypt_decrypt_ascon_permutation_p12___nba_sequent__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__1((&vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12));
    }
}

extern const VlWide<10>/*319:0*/ Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0;
extern const VlUnpacked<QData/*63:0*/, 8> Vtest_ascon_encrypt_decrypt__ConstPool__TABLE_hf251cb18_0;

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__1(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_87;
    VlWide<4>/*127:0*/ __Vtemp_134;
    VlWide<4>/*127:0*/ __Vtemp_136;
    // Body
    if (vlSelfRef.test_ascon_encrypt_decrypt__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))) {
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[0U] = 0U;
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[1U] = 0U;
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[2U] = 0U;
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[3U] = 0U;
        } else if ((1U & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))) {
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[0U] = 0U;
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[1U] = 0U;
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[2U] = 0U;
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[3U] = 0U;
        } else {
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[0U] 
                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[0U];
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[1U] 
                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[1U];
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[2U] 
                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[2U];
            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[3U] 
                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[3U];
        }
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag[0U] 
            = (IData)(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                        ^ ((((QData)((IData)((0x3ffU 
                                              & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                             << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                          >> 0xaU)) 
                           ^ (((QData)((IData)((0x1ffffU 
                                                & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                               << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                            >> 0x11U)))) 
                       ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[2U])))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag[1U] 
            = (IData)((((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                         ^ ((((QData)((IData)((0x3ffU 
                                               & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                              << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                           >> 0xaU)) 
                            ^ (((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                             >> 0x11U)))) 
                        ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[2U])))) 
                       >> 0x20U));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag[2U] 
            = (IData)(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                        ^ ((((QData)((IData)((0x7fU 
                                              & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                             << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                          >> 7U)) ^ 
                           ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                             << 0x17U) | (QData)((IData)(
                                                         (0x7fffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                     >> 0x29U)))))))) 
                       ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[0U])))));
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag[3U] 
            = (IData)((((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                         ^ ((((QData)((IData)((0x7fU 
                                               & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                              << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                           >> 7U)) 
                            ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                        >> 0x29U)))))))) 
                        ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[0U])))) 
                       >> 0x20U));
        if (vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_AE_AM) {
            if ((0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))) {
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM 
                    = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x0_p8;
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM 
                    = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x1_p8;
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM 
                    = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x3_p8;
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM 
                    = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x2_p8;
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM 
                    = ((0x10U < (vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length 
                                 - vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position))
                        ? vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x4_p8
                        : (0x8000000000000000ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x4_p8));
            } else {
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM 
                    = (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                       ^ ((((QData)((IData)((0x7ffffU 
                                             & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                            << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                         >> 0x13U)) 
                          ^ (((QData)((IData)((0xfffffffU 
                                               & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                              << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                           >> 0x1cU))));
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM 
                    = (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                       ^ (((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                            << 3U) | (QData)((IData)(
                                                     (7U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                 >> 0x3dU)))))) 
                          ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                              << 0x19U) | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                      >> 0x27U))))))));
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM 
                    = (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                       ^ ((((QData)((IData)((0x3ffU 
                                             & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                            << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                         >> 0xaU)) 
                          ^ (((QData)((IData)((0x1ffffU 
                                               & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                              << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                           >> 0x11U))));
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM 
                    = ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h) 
                       ^ ((((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                            << 0x3fU) | (0x7fffffffffffffffULL 
                                         & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                               >> 1U)))) 
                          ^ (((QData)((IData)((0x3fU 
                                               & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                              << 0x3aU) | (0x3ffffffffffffffULL 
                                           & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                 >> 6U))))));
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM 
                    = (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                       ^ ((((QData)((IData)((0x7fU 
                                             & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                            << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                         >> 7U)) ^ 
                          ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                            << 0x17U) | (QData)((IData)(
                                                        (0x7fffffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                    >> 0x29U))))))));
            }
        }
        if (vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_encrypt_decrypt) {
            if ((0x10U < (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                          - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt 
                    = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                       ^ ((((QData)((IData)((0x3ffU 
                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                            << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                         >> 0xaU)) 
                          ^ (((QData)((IData)((0x1ffffU 
                                               & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                              << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                           >> 0x11U))));
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt 
                    = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                       ^ ((((QData)((IData)((0x7fU 
                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                            << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                         >> 7U)) ^ 
                          ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                            << 0x17U) | (QData)((IData)(
                                                        (0x7fffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                    >> 0x29U))))))));
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt 
                    = ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h) 
                       ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                            << 0x3fU) | (0x7fffffffffffffffULL 
                                         & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                               >> 1U)))) 
                          ^ (((QData)((IData)((0x3fU 
                                               & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                              << 0x3aU) | (0x3ffffffffffffffULL 
                                           & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                 >> 6U))))));
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt 
                    = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                       ^ ((((QData)((IData)((0x7ffffU 
                                             & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                            << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                         >> 0x13U)) 
                          ^ (((QData)((IData)((0xfffffffU 
                                               & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                              << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                           >> 0x1cU))));
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt 
                    = (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                       ^ (((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                            << 3U) | (QData)((IData)(
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                 >> 0x3dU)))))) 
                          ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                              << 0x19U) | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                      >> 0x27U))))))));
                if (vlSelfRef.test_ascon_encrypt_decrypt__DOT__encrypt_decrypt_mode_sel) {
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                        = (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
                                   ^ (((QData)((IData)(
                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])))));
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                        = (IData)(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[0U])))) 
                                   >> 0x20U));
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                        = (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
                                   ^ (((QData)((IData)(
                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])))));
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] 
                        = (IData)(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain[2U])))) 
                                   >> 0x20U));
                } else {
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                        = (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s0);
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                        = (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s0 
                                   >> 0x20U));
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                        = (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1);
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] 
                        = (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1 
                                   >> 0x20U));
                }
            } else {
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt;
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt;
                vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt;
                if (vlSelfRef.test_ascon_encrypt_decrypt__DOT__encrypt_decrypt_mode_sel) {
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt;
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt;
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                        = (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last);
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                        = (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last 
                                   >> 0x20U));
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                        = (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last);
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] 
                        = (IData)((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last 
                                   >> 0x20U));
                    if (((((((((0U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)) 
                               | (1U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                              | (2U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                        - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                             | (3U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                            | (4U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                      - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                           | (5U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                     - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                          | (6U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                    - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                         | (7U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                   - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)))) {
                        if ((3U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                    - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_26[0U] = (0xffffffU 
                                              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]);
                            __Vtemp_26[1U] = 0U;
                        } else if ((4U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_26[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            __Vtemp_26[1U] = 0U;
                        } else if ((5U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_26[0U] = (IData)(
                                                     (0xffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))));
                            __Vtemp_26[1U] = (IData)(
                                                     ((0xffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))) 
                                                      >> 0x20U));
                        } else if ((6U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_26[0U] = (IData)(
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))));
                            __Vtemp_26[1U] = (IData)(
                                                     ((0xffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))) 
                                                      >> 0x20U));
                        } else {
                            __Vtemp_26[0U] = (IData)(
                                                     (0xffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))));
                            __Vtemp_26[1U] = (IData)(
                                                     ((0xffffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))) 
                                                      >> 0x20U));
                        }
                        if ((0U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                    - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((1U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = (1U & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]);
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((2U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = (0xffffU & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]);
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = __Vtemp_26[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = __Vtemp_26[1U];
                            if ((3U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                        - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                            } else if ((4U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                               - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                            } else if ((5U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                               - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                            } else {
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                            }
                        }
                    } else if (((((((((8U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                              - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)) 
                                      | (9U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                                - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                     | (0xaU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                                 - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                    | (0xbU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                                - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                   | (0xcU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                               - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                  | (0xdU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                              - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                 | (0xeU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                | (0xfU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                            - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)))) {
                        if ((8U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                    - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = (IData)((((QData)((IData)(
                                                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]))));
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = (IData)(((((QData)((IData)(
                                                             vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]))) 
                                           >> 0x20U));
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((9U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                                = (0xffU & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U]);
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((0xaU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                                = (0xffffU & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U]);
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((0xbU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                                = (0xffffffU & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U]);
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((0xcU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((0xdU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] 
                                = (0xffU & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U]);
                        } else if ((0xeU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] 
                                = (0xffffU & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U]);
                        } else {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] 
                                = (0xffffffU & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U]);
                        }
                    } else if ((0x10U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                          - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] 
                            = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U];
                    }
                } else {
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last;
                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last;
                    if ((3U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_87[0U] = (0xffffffU 
                                          & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]);
                        __Vtemp_87[1U] = 0U;
                    } else if ((4U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_87[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        __Vtemp_87[1U] = 0U;
                    } else if ((5U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_87[0U] = (IData)((0xffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))));
                        __Vtemp_87[1U] = (IData)(((0xffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))) 
                                                  >> 0x20U));
                    } else if ((6U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_87[0U] = (IData)((0xffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))));
                        __Vtemp_87[1U] = (IData)(((0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))) 
                                                  >> 0x20U));
                    } else {
                        __Vtemp_87[0U] = (IData)((0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))));
                        __Vtemp_87[1U] = (IData)(((0xffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U])))) 
                                                  >> 0x20U));
                    }
                    if ((8U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_134[0U] = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]))));
                        __Vtemp_134[1U] = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]))) 
                                                   >> 0x20U));
                    } else if ((9U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_134[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        __Vtemp_134[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                    } else if ((0xaU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_134[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        __Vtemp_134[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                    } else if ((0xbU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_134[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        __Vtemp_134[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                    } else if ((0xcU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_134[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        __Vtemp_134[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                    } else if ((0xdU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_134[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        __Vtemp_134[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                    } else if ((0xeU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                        __Vtemp_134[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        __Vtemp_134[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                    } else {
                        __Vtemp_134[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                        __Vtemp_134[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                    }
                    if (((((((((8U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)) 
                               | (9U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                              | (0xaU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                          - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                             | (0xbU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                            | (0xcU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                        - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                           | (0xdU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                          | (0xeU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                      - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                         | (0xfU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                     - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)))) {
                        if ((8U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                    - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_136[2U] = 0U;
                            __Vtemp_136[3U] = 0U;
                        } else if ((9U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_136[2U] = (0xffU 
                                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U]);
                            __Vtemp_136[3U] = 0U;
                        } else if ((0xaU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_136[2U] = (0xffffU 
                                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U]);
                            __Vtemp_136[3U] = 0U;
                        } else if ((0xbU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_136[2U] = (0xffffffU 
                                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U]);
                            __Vtemp_136[3U] = 0U;
                        } else if ((0xcU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_136[2U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                            __Vtemp_136[3U] = 0U;
                        } else if ((0xdU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_136[2U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                            __Vtemp_136[3U] = (0xffU 
                                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U]);
                        } else if ((0xeU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            __Vtemp_136[2U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                            __Vtemp_136[3U] = (0xffffU 
                                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U]);
                        } else {
                            __Vtemp_136[2U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                            __Vtemp_136[3U] = (0xffffffU 
                                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U]);
                        }
                    } else {
                        __Vtemp_136[2U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[2U];
                        __Vtemp_136[3U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[3U];
                    }
                    if (((((((((0U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)) 
                               | (1U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                              | (2U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                        - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                             | (3U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                       - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                            | (4U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                      - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                           | (5U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                     - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                          | (6U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                    - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                         | (7U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                   - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)))) {
                        if ((0U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                    - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((1U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = (1U & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]);
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else if ((2U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = (0xffffU & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U]);
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                        } else {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = __Vtemp_87[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = __Vtemp_87[1U];
                            if ((3U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                        - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                            } else if ((4U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                               - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                            } else if ((5U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                               - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) {
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                            } else {
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
                            }
                        }
                    } else {
                        if (((((((((8U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)) 
                                   | (9U == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                  | (0xaU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                              - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                 | (0xbU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                             - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                                | (0xcU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                            - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                               | (0xdU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                           - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                              | (0xeU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                          - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position))) 
                             | (0xfU == (vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length 
                                         - vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position)))) {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = __Vtemp_134[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = __Vtemp_134[1U];
                        } else {
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[0U];
                            vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] 
                                = vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last[1U];
                        }
                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] 
                            = __Vtemp_136[2U];
                        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] 
                            = __Vtemp_136[3U];
                    }
                }
            }
        }
    } else {
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[0U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[0U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[1U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[1U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[2U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[2U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[3U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[3U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[4U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[4U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[5U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[5U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[6U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[6U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[7U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[7U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[8U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[8U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[9U] 
            = Vtest_ascon_encrypt_decrypt__ConstPool__CONST_hab76c978_0[9U];
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag[0U] = 0U;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag[1U] = 0U;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag[2U] = 0U;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag[3U] = 0U;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[0U] = 0U;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[1U] = 0U;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[2U] = 0U;
        vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout[3U] = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type) 
                     << 1U) | (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__rst_n));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__IV 
        = Vtest_ascon_encrypt_decrypt__ConstPool__TABLE_hf251cb18_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__2(Vtest_ascon_encrypt_decrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[4U] 
        = (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
           ^ ((((QData)((IData)((0x7fU & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                             >> 7U)) ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                         << 0x17U) 
                                        | (QData)((IData)(
                                                          (0x7fffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                      >> 0x29U))))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[2U] 
        = ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h) 
           ^ ((((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                << 0x3fU) | (0x7fffffffffffffffULL 
                             & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                   >> 1U)))) ^ (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                                 << 0x3aU) 
                                                | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                       >> 6U))))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[3U] 
        = (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
           ^ ((((QData)((IData)((0x3ffU & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                             >> 0xaU)) ^ (((QData)((IData)(
                                                           (0x1ffffU 
                                                            & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                           << 0x2fU) 
                                          | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                             >> 0x11U))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[0U] 
        = (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
           ^ ((((QData)((IData)((0x7ffffU & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                             >> 0x13U)) ^ (((QData)((IData)(
                                                            (0xfffffffU 
                                                             & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                            << 0x24U) 
                                           | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                              >> 0x1cU))));
    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[1U] 
        = (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
           ^ (((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                << 3U) | (QData)((IData)((7U & (IData)(
                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                        >> 0x3dU)))))) 
              ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                  << 0x19U) | (QData)((IData)((0x1ffffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                          >> 0x27U))))))));
}
