// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_ascon_encrypt_decrypt__Syms.h"


VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_ascon_encrypt_decrypt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3736,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+27,0,"key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+31,0,"nonce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+35,0,"sel_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+2868,0,"x0_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2870,0,"x1_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2872,0,"x2_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2874,0,"x3_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2876,0,"x4_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+49,0,"process_en_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"data_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"data_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+52,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+56,0,"x0_i_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+58,0,"x1_i_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"x2_i_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x3_i_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x4_i_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2878,0,"x0_o_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2880,0,"x1_o_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2882,0,"x2_o_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2884,0,"x3_o_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2886,0,"x4_o_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+66,0,"process_err_AE_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"plaintext_ciphertext_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"plaintext_ciphertext_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+69,0,"plaintext_ciphertext_datain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+73,0,"encrypt_decrypt_mode_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"process_en_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+75,0,"x0_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+77,0,"x1_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"x2_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"x3_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"x4_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2888,0,"x0_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2890,0,"x1_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2892,0,"x2_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2894,0,"x3_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2896,0,"x4_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+85,0,"process_err_plaintext_ciphertext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2898,0,"plaintext_ciphertext_dataout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+86,0,"x0_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"x1_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+90,0,"x2_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"x3_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x4_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+2902,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+3745,0,"A0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+3749,0,"A1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+3753,0,"A2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+3757,0,"A3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+3761,0,"C0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+3765,0,"C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+3769,0,"C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+3773,0,"C3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("ascon_encrypt_decrypt_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3736,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"process_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"process_mode_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"text_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"text_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+69,0,"data_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+75,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+77,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+2898,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+2888,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2890,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2892,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2894,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2896,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+85,0,"process_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2242,0,"x0_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2244,0,"x1_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2246,0,"x2_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2248,0,"x3_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2250,0,"x4_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2252,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2254,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+2256,0,"data_out_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+2260,0,"x0_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2262,0,"x1_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"x2_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"x3_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"x4_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ascon_p8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+2252,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2254,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2242,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2244,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2246,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2248,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2250,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3777,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3779,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3781,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3783,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3785,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3787,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3789,0,"rc6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3791,0,"rc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+2264+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+2278+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+2292+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+2306+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+2320+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3777,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2252,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2254,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2334,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2336,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2338,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2340,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2342,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2252,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2254,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2344,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2346,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3737,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3739,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2348,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3741,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2350,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3743,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2352,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2354,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2356,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2358,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2360,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2352,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2362,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2364,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2366,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2368,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2370,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2372,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2374,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2376,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2378,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2380,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3779,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2334,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2336,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2338,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2340,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2342,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2382,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2384,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2386,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2388,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2390,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2334,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2336,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2392,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2340,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2342,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2394,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2396,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2398,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2400,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2402,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2404,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2406,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2408,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2410,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2412,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2414,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2416,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2418,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2420,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2412,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2422,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2424,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2426,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2428,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2430,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2432,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2434,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2436,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2438,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2440,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3781,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2382,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2384,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2386,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2388,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2390,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2442,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2444,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2446,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2448,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2450,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2382,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2384,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2452,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2388,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2390,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2454,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2456,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2458,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2460,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2462,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2464,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2466,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2468,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2470,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2472,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2474,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2476,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2478,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2480,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2472,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2482,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2484,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2486,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2488,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2490,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2492,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2494,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2496,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2498,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2500,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3783,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2442,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2444,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2446,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2448,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2450,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2502,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2504,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2506,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2508,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2510,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2442,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2444,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2512,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2448,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2450,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2514,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2516,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2518,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2520,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2522,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2524,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2526,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2528,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2530,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2532,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2534,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2536,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2538,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2540,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2532,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2542,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2544,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2546,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2548,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2550,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2552,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2554,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2556,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2558,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2560,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3785,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2502,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2504,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2506,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2508,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2510,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2562,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2564,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2566,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2568,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2570,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2502,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2504,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2572,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2508,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2510,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2574,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2576,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2578,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2580,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2582,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2584,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2586,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2588,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2590,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2592,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2594,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2596,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2598,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2600,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2592,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2602,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2604,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2606,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2608,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2610,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2612,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2614,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2616,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2618,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2620,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3787,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2562,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2564,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2566,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2568,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2570,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2622,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2624,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2626,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2628,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2630,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2562,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2564,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2632,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2568,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2570,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2634,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2636,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2638,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2640,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2642,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2644,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2646,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2648,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2650,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2652,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2654,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2656,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2658,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2660,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2652,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2662,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2664,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2666,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2668,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2670,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2672,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2674,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2676,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2678,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2680,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3789,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2622,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2624,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2626,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2628,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2630,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2682,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2684,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2686,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2688,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2690,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2622,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2624,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2692,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2628,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2630,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2694,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2696,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2698,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2700,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2702,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2704,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2706,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2708,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2710,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2712,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2714,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2716,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2718,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2720,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2712,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2722,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2724,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2726,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2728,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2730,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2732,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2734,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2736,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2738,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2740,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3791,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2682,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2684,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2686,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2688,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2690,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2242,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2244,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2246,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2248,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2250,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2682,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2684,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2742,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2688,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2690,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2744,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2746,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2748,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2750,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2752,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2754,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2756,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2758,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2760,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2762,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2764,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2766,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2768,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2770,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2762,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2772,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2774,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2776,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2778,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2780,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2782,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2784,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2786,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2788,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2790,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ascon_finalization_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3736,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+27,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+86,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+90,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+2902,0,"tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+86,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2792,0,"x0_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"x1_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"x2_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2794,0,"x3_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2796,0,"x4_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ascon_p12", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ascon_initialization_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3736,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"sel_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+27,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+31,0,"nonce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+2868,0,"x0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2870,0,"x1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2872,0,"x2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2874,0,"x3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2876,0,"x4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+3795,0,"AEAD128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3796,0,"Hash256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3797,0,"XOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3798,0,"CXOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+2906,0,"IV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("S", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+2908+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+36,0,"key_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+40,0,"nonce_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("ascon_p12", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declArray(c+2918,0,"zeros_key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascon_process_associated_data_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3736,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"process_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"sel_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"data_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"data_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+52,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+56,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+58,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2878,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2880,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2882,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2884,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2886,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+66,0,"process_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3795,0,"AEAD128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3796,0,"Hash256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3797,0,"XOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3798,0,"CXOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+2798,0,"x0_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2800,0,"x1_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2802,0,"x2_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2804,0,"x3_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2806,0,"x4_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2808,0,"x0_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2810,0,"x1_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2812,0,"x2_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2814,0,"x3_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2816,0,"x4_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ascon_p12", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ascon_p8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+136,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2798,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2800,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2802,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2804,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2806,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3777,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3779,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3781,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3783,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3785,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3787,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3789,0,"rc6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3791,0,"rc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+140+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+154+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+168+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+182+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+196+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3777,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+210,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+212,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+214,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+216,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+218,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+220,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+222,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+224,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+228,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+230,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+232,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+230,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+240,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+242,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+252,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+254,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+256,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+258,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3779,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+210,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+212,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+214,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+216,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+218,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+260,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+262,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+264,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+266,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+268,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+210,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+212,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+270,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+216,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+218,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+272,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+278,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+280,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+282,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+284,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+286,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+288,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+290,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+292,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+294,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+296,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+298,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+290,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+300,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+302,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+304,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+306,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+308,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+310,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+312,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+314,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+316,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+318,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3781,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+260,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+262,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+264,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+266,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+268,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+320,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+322,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+324,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+326,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+328,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+260,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+262,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+330,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+266,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+268,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+332,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+334,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+336,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+338,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+340,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+342,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+344,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+346,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+348,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+350,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+352,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+354,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+356,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+358,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+350,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+360,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+362,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+364,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+366,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+368,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+370,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+372,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+374,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+376,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+378,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3783,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+320,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+322,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+324,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+326,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+328,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+380,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+382,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+384,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+386,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+388,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+320,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+322,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+390,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+326,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+328,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+392,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+394,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+396,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+398,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+400,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+402,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+404,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+406,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+408,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+412,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+414,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+416,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+418,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+420,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+422,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+424,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+426,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+428,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+430,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+432,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+434,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+436,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+438,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3785,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+380,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+382,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+384,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+386,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+388,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+440,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+442,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+444,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+446,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+448,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+380,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+382,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+450,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+386,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+388,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+452,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+454,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+456,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+458,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+460,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+462,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+464,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+466,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+468,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+470,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+472,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+474,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+476,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+478,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+470,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+480,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+482,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+484,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+486,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+488,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+490,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+492,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+494,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+496,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+498,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3787,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+440,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+442,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+444,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+446,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+448,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+500,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+502,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+504,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+506,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+508,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+440,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+442,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+510,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+446,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+448,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+512,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+514,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+516,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+518,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+520,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+522,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+524,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+526,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+528,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+530,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+532,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+534,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+536,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+538,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+530,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+540,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+542,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+544,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+546,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+548,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+550,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+552,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+554,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+556,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+558,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3789,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+500,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+502,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+504,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+506,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+508,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+560,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+562,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+566,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+568,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+500,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+502,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+570,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+506,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+508,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+572,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+574,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+576,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+578,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+580,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+582,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+584,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+586,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+588,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+590,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+592,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+594,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+596,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+598,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+590,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+600,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+602,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+604,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+606,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+608,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+610,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+612,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+614,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+616,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+618,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3791,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+560,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+562,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+566,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+568,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2798,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2800,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2802,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2804,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2806,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+560,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+562,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+620,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+566,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+568,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+622,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+624,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+626,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+628,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+630,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+632,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+634,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+636,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+638,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+640,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+642,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+644,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+646,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+648,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+640,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+650,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+652,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+654,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+656,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+658,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+660,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+662,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+664,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+666,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+668,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+2906,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+44,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2928,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2930,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2932,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2934,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2936,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3799,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3801,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3803,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3805,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3777,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3779,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3781,0,"rc6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3783,0,"rc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3785,0,"rc8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3787,0,"rc9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3789,0,"rc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3791,0,"rc11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+2938+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+2960+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+2982+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+3004+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+3026+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3799,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2906,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+44,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3048,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3050,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3052,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3054,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2906,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+46,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3056,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3058,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3060,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3062,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3064,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3066,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3068,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3070,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3064,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3072,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3074,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3076,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3078,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3080,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3082,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3084,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3086,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3801,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3048,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3050,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3052,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3054,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3088,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3090,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3092,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3094,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3096,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3048,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3050,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3052,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3054,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3098,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3100,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3102,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3104,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3106,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3108,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3110,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3112,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3114,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3116,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3118,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3120,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3122,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3124,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3116,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3126,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3128,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3130,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3132,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3134,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3136,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3138,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3140,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3142,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3144,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3789,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3146,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3148,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3150,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3152,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3154,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3156,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3158,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3160,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3162,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3164,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3146,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3148,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3166,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3152,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3154,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3168,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3170,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3172,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3174,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3176,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3178,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3180,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3182,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3186,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3188,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3190,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3192,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3194,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3186,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3196,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3198,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3200,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3202,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3204,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3206,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3208,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3210,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3212,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3214,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3791,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3156,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3158,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3160,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3162,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3164,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2928,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2930,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2932,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2934,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2936,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3156,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3158,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3216,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3162,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3164,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3218,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3220,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3222,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3224,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3226,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3228,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3230,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3232,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3236,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3238,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3240,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3242,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3244,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3236,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3246,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3248,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3250,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3252,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3254,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3256,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3258,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3260,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3262,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3264,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3803,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3088,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3090,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3092,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3094,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3096,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3266,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3268,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3270,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3272,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3274,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3088,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3090,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3276,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3094,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3096,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3278,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3280,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3282,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3284,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3286,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3288,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3290,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3292,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3294,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3296,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3298,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3300,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3302,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3304,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3296,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3306,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3308,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3310,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3312,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3314,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3316,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3318,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3320,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3322,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3324,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3805,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3266,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3268,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3270,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3272,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3274,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3326,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3328,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3330,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3332,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3334,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3266,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3268,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3336,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3272,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3274,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3338,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3340,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3342,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3344,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3346,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3348,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3350,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3352,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3354,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3356,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3358,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3360,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3362,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3364,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3356,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3366,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3368,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3370,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3372,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3374,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3376,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3378,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3380,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3382,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3384,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3777,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3326,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3328,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3330,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3332,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3334,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3386,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3388,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3390,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3392,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3394,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3326,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3328,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3396,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3332,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3334,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3398,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3400,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3402,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3404,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3406,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3408,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3410,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3412,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3414,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3416,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3418,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3420,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3422,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3424,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3416,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3426,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3428,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3430,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3432,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3434,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3436,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3438,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3440,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3442,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3444,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3779,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3386,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3388,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3390,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3392,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3394,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3446,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3448,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3450,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3452,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3454,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3386,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3388,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3456,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3392,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3394,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3458,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3460,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3462,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3464,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3466,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3468,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3470,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3472,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3474,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3476,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3478,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3480,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3482,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3484,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3476,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3486,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3488,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3490,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3492,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3494,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3496,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3498,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3500,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3502,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3504,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3781,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3446,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3448,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3450,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3452,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3454,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3506,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3508,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3510,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3512,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3514,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3446,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3448,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3516,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3452,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3454,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3518,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3520,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3522,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3524,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3526,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3528,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3530,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3532,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3534,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3536,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3538,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3540,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3542,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3544,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3536,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3546,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3548,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3550,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3552,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3554,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3556,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3558,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3560,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3562,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3564,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3783,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3506,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3508,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3510,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3512,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3514,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3566,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3568,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3570,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3572,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3574,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3506,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3508,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3576,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3512,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3514,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3578,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3580,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3582,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3584,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3586,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3588,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3590,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3592,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3594,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3596,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3598,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3600,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3602,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3604,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3596,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3606,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3608,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3610,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3612,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3614,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3616,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3618,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3620,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3622,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3624,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3785,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3566,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3568,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3570,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3572,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3574,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3626,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3628,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3630,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3632,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3634,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3566,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3568,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3636,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3572,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3574,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3638,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3640,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3642,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3644,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3646,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3648,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3650,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3652,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3654,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3656,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3658,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3660,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3662,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3664,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3656,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3666,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3668,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3670,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3672,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3674,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3676,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3678,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3680,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3682,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3684,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3787,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3626,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3628,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3630,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3632,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3634,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3146,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3148,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3150,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3152,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3154,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3626,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3628,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3686,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3632,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3634,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3688,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3690,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3692,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3694,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3696,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3698,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3700,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3702,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3704,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3706,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3708,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3710,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3712,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3714,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3706,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3716,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3718,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3720,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3722,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3724,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3726,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3728,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3730,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3732,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3734,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+136,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2808,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2810,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2812,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2814,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2816,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3799,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3801,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3803,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3805,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3777,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3779,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3781,0,"rc6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3783,0,"rc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3785,0,"rc8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3787,0,"rc9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3789,0,"rc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3791,0,"rc11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+670+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+692+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+714+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+736+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+758+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3799,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+780,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+782,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+784,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+786,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+788,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+102,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+790,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+792,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+794,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+796,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+120,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+798,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+122,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+800,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+802,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+804,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+806,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+808,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+800,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+810,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+812,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+814,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+816,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+818,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+820,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+822,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+824,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+826,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+828,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3801,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+780,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+782,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+784,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+786,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+788,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+830,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+832,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+834,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+836,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+838,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+780,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+782,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+840,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+786,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+788,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+842,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+844,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+846,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+848,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+850,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+852,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+854,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+856,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+858,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+860,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+862,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+864,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+866,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+868,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+860,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+870,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+872,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+874,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+876,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+878,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+880,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+882,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+884,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+886,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+888,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3789,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+890,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+892,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+894,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+896,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+898,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+900,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+902,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+904,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+906,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+908,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+890,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+892,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+910,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+896,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+898,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+912,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+914,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+916,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+918,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+920,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+922,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+924,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+926,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+928,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+930,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+932,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+934,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+936,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+938,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+930,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+940,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+942,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+944,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+946,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+948,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+950,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+952,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+954,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+956,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+958,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3791,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+900,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+902,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+904,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+906,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+908,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2808,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2810,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2812,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2814,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2816,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+900,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+902,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+960,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+906,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+908,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+962,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+964,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+966,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+968,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+970,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+972,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+974,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2818,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+976,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2820,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2822,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2824,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2826,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2828,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2820,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2830,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2832,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2834,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2836,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2838,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2840,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2842,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2844,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2846,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2848,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3803,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+830,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+832,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+834,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+836,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+838,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+978,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+980,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+982,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+984,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+986,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+830,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+832,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+988,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+836,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+838,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+990,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+992,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+994,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+996,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+998,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1000,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1002,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1004,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1006,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1008,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1010,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1012,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1014,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1016,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1008,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1018,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1020,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1022,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1024,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1026,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1028,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1030,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1032,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1034,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1036,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3805,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+978,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+980,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+982,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+984,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+986,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1038,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1040,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1042,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1044,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1046,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+978,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+980,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1048,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+984,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+986,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1050,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1052,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1054,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1056,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1058,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1060,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1062,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1064,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1066,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1068,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1070,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1072,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1074,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1076,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1068,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1078,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1080,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1082,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1084,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1086,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1088,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1090,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1092,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1094,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1096,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3777,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1038,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1040,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1042,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1044,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1046,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1098,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1100,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1102,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1104,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1106,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1038,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1040,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1108,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1044,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1046,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1110,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1112,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1114,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1116,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1118,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1120,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1122,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1124,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1126,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1128,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1130,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1132,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1134,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1136,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1128,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1138,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1140,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1142,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1144,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1146,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1148,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1150,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1152,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1154,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1156,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3779,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1098,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1100,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1102,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1104,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1106,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1158,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1160,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1162,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1164,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1166,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1098,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1100,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1168,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1104,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1106,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1170,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1172,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1174,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1176,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1178,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1180,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1182,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1184,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1186,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1188,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1190,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1192,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1194,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1196,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1188,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1198,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1200,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1202,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1204,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1206,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1208,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1210,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1212,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1214,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1216,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3781,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1158,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1160,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1162,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1164,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1166,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1218,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1220,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1222,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1224,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1226,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1158,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1160,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1228,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1164,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1166,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1230,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1232,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1234,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1236,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1238,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1240,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1242,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1244,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1246,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1248,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1250,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1252,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1254,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1256,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1248,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1258,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1260,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1262,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1264,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1266,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1268,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1270,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1272,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1274,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1276,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3783,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1218,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1220,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1222,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1224,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1226,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1278,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1280,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1282,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1284,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1286,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1218,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1220,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1288,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1224,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1226,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1290,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1292,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1294,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1296,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1298,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1300,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1302,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1304,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1306,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1308,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1310,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1312,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1314,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1316,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1308,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1318,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1320,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1322,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1324,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1326,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1328,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1330,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1332,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1334,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1336,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3785,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1278,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1280,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1282,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1284,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1286,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1338,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1340,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1342,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1344,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1346,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1278,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1280,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1348,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1284,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1286,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1350,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1352,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1354,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1356,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1358,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1360,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1362,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1364,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1366,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1368,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1370,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1372,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1374,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1376,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1368,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1378,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1380,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1382,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1386,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1388,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1390,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1392,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1394,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1396,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3787,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1338,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1340,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1342,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1344,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1346,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+890,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+892,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+894,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+896,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+898,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1338,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1340,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1398,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1344,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1346,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1400,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1402,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1404,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1406,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1408,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1410,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1412,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1414,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1418,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1420,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1422,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1424,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1426,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1418,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1428,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1430,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1432,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1434,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1436,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1438,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1440,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1442,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1444,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1446,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+86,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2792,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2794,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2796,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3799,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3801,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3803,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3805,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3777,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3779,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3781,0,"rc6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3783,0,"rc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3785,0,"rc8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3787,0,"rc9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3789,0,"rc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3791,0,"rc11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+1448+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+1470+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+1492+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+1514+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+1536+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3799,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1558,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1560,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1562,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1564,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1566,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+124,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+126,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1568,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1570,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1572,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1574,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+128,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1576,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1578,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1580,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1582,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1584,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1586,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1588,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1580,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1590,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1592,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1594,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1596,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1598,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1600,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1602,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1604,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1606,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1608,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3801,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1558,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1560,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1562,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1564,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1566,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1610,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1612,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1614,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1616,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1618,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1558,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1560,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1620,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1564,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1566,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1622,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1624,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1626,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1628,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1630,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1632,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1634,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1636,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1638,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1640,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1642,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1644,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1646,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1648,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1640,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1650,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1652,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1654,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1656,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1658,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1660,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1662,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1664,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1666,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1668,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3789,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1670,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1672,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1674,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1676,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1678,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1680,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1682,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1684,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1686,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1688,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1670,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1672,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1690,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1676,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1678,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1692,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1694,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1696,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1698,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1700,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1702,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1704,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1706,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1708,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1710,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1712,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1714,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1716,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1718,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1710,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1720,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1722,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1724,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1726,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1728,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1730,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1732,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1734,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1736,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1738,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3791,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1680,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1682,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1684,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1686,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1688,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2792,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2794,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2796,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1680,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1682,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1740,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1686,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1688,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1742,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1744,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1746,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1748,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1750,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1752,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1754,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1756,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1758,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2850,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2852,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1760,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1762,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2854,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2850,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2856,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2858,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1764,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1766,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1768,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1770,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2860,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2862,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2864,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2866,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3803,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1610,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1612,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1614,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1616,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1618,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1772,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1774,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1776,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1778,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1780,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1610,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1612,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1782,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1616,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1618,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1784,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1786,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1788,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1790,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1792,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1794,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1796,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1798,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1800,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1802,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1804,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1806,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1808,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1810,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1802,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1812,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1814,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1816,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1818,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1820,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1822,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1824,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1826,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1828,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1830,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3805,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1772,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1774,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1776,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1778,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1780,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1832,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1834,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1836,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1838,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1840,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1772,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1774,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1842,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1778,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1780,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1844,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1846,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1850,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1852,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1854,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1856,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1858,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1860,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1862,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1864,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1866,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1868,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1870,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1862,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1872,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1874,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1876,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1878,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1880,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1882,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1884,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1886,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1888,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1890,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3777,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1832,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1834,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1836,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1838,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1840,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1892,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1894,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1896,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1898,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1900,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1832,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1834,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1902,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1838,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1840,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1904,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1906,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1908,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1910,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1912,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1914,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1916,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1918,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1920,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1922,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1924,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1926,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1928,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1930,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1922,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1932,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1934,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1936,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1938,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1940,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1942,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1944,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1946,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1948,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1950,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3779,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1892,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1894,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1896,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1898,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1900,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1952,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1954,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1956,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1958,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1960,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1892,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1894,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1962,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1898,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1900,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1964,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1966,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1968,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1970,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1972,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1974,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1976,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1978,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1980,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1982,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1984,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1986,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1988,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1990,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1982,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1992,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1994,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1996,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1998,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2000,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2002,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2004,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2006,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2008,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2010,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3781,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1952,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1954,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1956,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1958,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1960,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2012,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2014,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2016,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2018,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2020,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1952,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1954,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2022,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1958,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1960,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2024,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2026,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2028,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2030,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2032,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2034,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2036,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2038,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2040,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2042,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2044,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2046,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2048,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2050,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2042,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2052,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2054,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2056,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2058,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2060,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2062,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2064,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2066,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2068,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2070,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3783,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2012,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2014,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2016,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2018,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2020,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2072,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2074,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2076,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2078,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2080,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2012,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2014,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2082,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2018,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2020,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2084,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2086,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2088,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2090,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2092,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2094,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2096,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2098,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2100,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2102,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2104,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2106,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2108,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2110,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2102,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2112,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2114,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2116,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2118,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2120,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2122,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2124,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2126,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2128,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2130,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3785,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2072,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2074,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2076,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2078,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2080,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2132,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2134,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2136,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2138,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2140,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2072,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2074,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2142,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2078,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2080,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2144,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2146,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2148,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2150,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2152,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2154,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2156,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2158,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2160,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2162,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2164,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2166,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2168,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2170,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2162,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2172,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2174,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2176,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2178,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2180,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2182,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2184,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2186,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2188,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2190,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3787,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2132,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2134,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2136,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2138,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2140,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1670,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1672,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1674,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1676,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1678,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3793,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2132,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2134,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2192,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2138,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2140,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2194,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2196,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2198,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2200,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2202,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2204,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2206,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2208,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2210,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2212,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2214,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2216,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2218,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2220,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2212,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2222,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2224,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2226,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2228,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2230,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2232,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2234,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2236,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2238,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+2240,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_init_top(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_ascon_encrypt_decrypt___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_ascon_encrypt_decrypt___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_ascon_encrypt_decrypt___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_register(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest_ascon_encrypt_decrypt___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_ascon_encrypt_decrypt___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_ascon_encrypt_decrypt___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_ascon_encrypt_decrypt___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_const_0_sub_0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_const_0\n"); );
    // Init
    Vtest_ascon_encrypt_decrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_encrypt_decrypt___024root*>(voidSelf);
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_ascon_encrypt_decrypt___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_const_0_sub_0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    __Vtemp_1[0U] = 0x7420796dU;
    __Vtemp_1[1U] = 0x20747365U;
    __Vtemp_1[2U] = 0x73696854U;
    __Vtemp_1[3U] = 0x20736920U;
    bufp->fullWData(oldp+3745,(__Vtemp_1),128);
    __Vtemp_2[0U] = 0x69737365U;
    __Vtemp_2[1U] = 0x6120676eU;
    __Vtemp_2[2U] = 0x20726f66U;
    __Vtemp_2[3U] = 0x636f7270U;
    bufp->fullWData(oldp+3749,(__Vtemp_2),128);
    __Vtemp_3[0U] = 0x61642064U;
    __Vtemp_3[1U] = 0x73206174U;
    __Vtemp_3[2U] = 0x636f7373U;
    __Vtemp_3[3U] = 0x65746169U;
    bufp->fullWData(oldp+3753,(__Vtemp_3),128);
    __Vtemp_4[0U] = 0x6f736261U;
    __Vtemp_4[1U] = 0x65746272U;
    __Vtemp_4[2U] = 0x6e612070U;
    __Vtemp_4[3U] = 0x2064U;
    bufp->fullWData(oldp+3757,(__Vtemp_4),128);
    __Vtemp_5[0U] = 0x18ce73bfU;
    __Vtemp_5[1U] = 0x9b07659eU;
    __Vtemp_5[2U] = 0xffbdc18U;
    __Vtemp_5[3U] = 0x9f054326U;
    bufp->fullWData(oldp+3761,(__Vtemp_5),128);
    __Vtemp_6[0U] = 0xbc8ceca8U;
    __Vtemp_6[1U] = 0xc799a614U;
    __Vtemp_6[2U] = 0xcde5c93cU;
    __Vtemp_6[3U] = 0x8cccbaf0U;
    bufp->fullWData(oldp+3765,(__Vtemp_6),128);
    __Vtemp_7[0U] = 0x2b9c6ad2U;
    __Vtemp_7[1U] = 0x175e00bfU;
    __Vtemp_7[2U] = 0xa1116999U;
    __Vtemp_7[3U] = 0xfe1edd42U;
    bufp->fullWData(oldp+3769,(__Vtemp_7),128);
    __Vtemp_8[0U] = 0x5724dae8U;
    __Vtemp_8[1U] = 0x3af7c516U;
    __Vtemp_8[2U] = 0xbbc21032U;
    __Vtemp_8[3U] = 0xb6e8U;
    bufp->fullWData(oldp+3773,(__Vtemp_8),128);
    bufp->fullQData(oldp+3777,(0xb4ULL),64);
    bufp->fullQData(oldp+3779,(0xa5ULL),64);
    bufp->fullQData(oldp+3781,(0x96ULL),64);
    bufp->fullQData(oldp+3783,(0x87ULL),64);
    bufp->fullQData(oldp+3785,(0x78ULL),64);
    bufp->fullQData(oldp+3787,(0x69ULL),64);
    bufp->fullQData(oldp+3789,(0x5aULL),64);
    bufp->fullQData(oldp+3791,(0x4bULL),64);
    bufp->fullQData(oldp+3793,(0xffffffffffffffffULL),64);
    bufp->fullCData(oldp+3795,(0U),2);
    bufp->fullCData(oldp+3796,(1U),2);
    bufp->fullCData(oldp+3797,(2U),2);
    bufp->fullCData(oldp+3798,(3U),2);
    bufp->fullQData(oldp+3799,(0xf0ULL),64);
    bufp->fullQData(oldp+3801,(0xe1ULL),64);
    bufp->fullQData(oldp+3803,(0xd2ULL),64);
    bufp->fullQData(oldp+3805,(0xc3ULL),64);
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_full_0_sub_0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_full_0\n"); );
    // Init
    Vtest_ascon_encrypt_decrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_encrypt_decrypt___024root*>(voidSelf);
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_ascon_encrypt_decrypt___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_ascon_encrypt_decrypt___024root__trace_full_0_sub_0(Vtest_ascon_encrypt_decrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_encrypt_decrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_encrypt_decrypt___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    bufp->fullQData(oldp+1,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i),64);
    bufp->fullQData(oldp+3,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i),64);
    bufp->fullQData(oldp+5,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x4_i),64);
    bufp->fullQData(oldp+7,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+9,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i) 
                             & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+11,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                              & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i)),64);
    bufp->fullQData(oldp+13,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i) 
                              & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+15,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i 
                              ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i))),64);
    bufp->fullQData(oldp+17,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__h),64);
    bufp->fullQData(oldp+19,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__h)),64);
    bufp->fullQData(oldp+21,((((QData)((IData)((1U 
                                                & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                               << 0x3fU) | (0x7fffffffffffffffULL 
                                            & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+23,((((QData)((IData)((0x3fU 
                                                & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                               << 0x3aU) | (0x3ffffffffffffffULL 
                                            & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+25,((0xe1ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r0__x2_o)),64);
    bufp->fullWData(oldp+27,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key),128);
    bufp->fullWData(oldp+31,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce),128);
    bufp->fullCData(oldp+35,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type),2);
    if ((0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))) {
        __Vtemp_3[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[0U];
        __Vtemp_3[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[1U];
        __Vtemp_3[2U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[2U];
        __Vtemp_3[3U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[3U];
    } else {
        __Vtemp_3[0U] = 0U;
        __Vtemp_3[1U] = 0U;
        __Vtemp_3[2U] = 0U;
        __Vtemp_3[3U] = 0U;
    }
    bufp->fullWData(oldp+36,(__Vtemp_3),128);
    if ((0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))) {
        __Vtemp_6[0U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[0U];
        __Vtemp_6[1U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[1U];
        __Vtemp_6[2U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[2U];
        __Vtemp_6[3U] = vlSelfRef.test_ascon_encrypt_decrypt__DOT__nonce[3U];
    } else {
        __Vtemp_6[0U] = 0U;
        __Vtemp_6[1U] = 0U;
        __Vtemp_6[2U] = 0U;
        __Vtemp_6[3U] = 0U;
    }
    bufp->fullWData(oldp+40,(__Vtemp_6),128);
    bufp->fullQData(oldp+44,(((0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))
                               ? (((QData)((IData)(
                                                   vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[0U])))
                               : 0ULL)),64);
    bufp->fullQData(oldp+46,((0xf0ULL ^ ((0U == (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__sel_type))
                                          ? (((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[0U])))
                                          : 0ULL))),64);
    bufp->fullBit(oldp+48,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__rst_n));
    bufp->fullBit(oldp+49,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_AE_AM));
    bufp->fullIData(oldp+50,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length),32);
    bufp->fullIData(oldp+51,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position),32);
    bufp->fullWData(oldp+52,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__data),128);
    bufp->fullQData(oldp+56,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_AE_AM),64);
    bufp->fullQData(oldp+58,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_AE_AM),64);
    bufp->fullQData(oldp+60,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM),64);
    bufp->fullQData(oldp+62,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM),64);
    bufp->fullQData(oldp+64,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_AE_AM),64);
    bufp->fullBit(oldp+66,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_position 
                            > vlSelfRef.test_ascon_encrypt_decrypt__DOT__data_length)));
    bufp->fullIData(oldp+67,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length),32);
    bufp->fullIData(oldp+68,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position),32);
    bufp->fullWData(oldp+69,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_datain),128);
    bufp->fullBit(oldp+73,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__encrypt_decrypt_mode_sel));
    bufp->fullBit(oldp+74,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__process_en_encrypt_decrypt));
    bufp->fullQData(oldp+75,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+77,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+79,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+81,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+83,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_encrypt_decrypt),64);
    bufp->fullBit(oldp+85,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_position 
                            > vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_length)));
    bufp->fullQData(oldp+86,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_i_final),64);
    bufp->fullQData(oldp+88,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_final),64);
    bufp->fullQData(oldp+90,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_final),64);
    bufp->fullQData(oldp+92,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_final),64);
    bufp->fullQData(oldp+94,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_i_final),64);
    bufp->fullQData(oldp+96,((0xb4ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_encrypt_decrypt)),64);
    bufp->fullQData(oldp+98,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_final 
                              ^ (((QData)((IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[2U]))))),64);
    bufp->fullQData(oldp+100,((0xb4ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM)),64);
    bufp->fullQData(oldp+102,((0xf0ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_AE_AM)),64);
    bufp->fullQData(oldp+104,((0xf0ULL ^ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_i_final 
                                          ^ (((QData)((IData)(
                                                              vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_encrypt_decrypt__DOT__key[2U])))))),64);
    bufp->fullQData(oldp+106,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+108,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM)),64);
    bufp->fullQData(oldp+110,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+112,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM))),64);
    bufp->fullQData(oldp+114,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+116,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM)),64);
    bufp->fullQData(oldp+118,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+120,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM))),64);
    bufp->fullQData(oldp+122,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_AE_AM 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+124,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_final)),64);
    bufp->fullQData(oldp+126,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_final) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+128,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_i_final 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3))),64);
    bufp->fullQData(oldp+130,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3),64);
    bufp->fullQData(oldp+132,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                               ^ (((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                  ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                      << 0x19U) | (QData)((IData)(
                                                                  (0x1ffffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                              >> 0x27U))))))))),64);
    bufp->fullQData(oldp+134,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h) 
                               ^ ((((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                    << 0x3fU) | (0x7fffffffffffffffULL 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                     >> 1U)))) 
                                  ^ (((QData)((IData)(
                                                      (0x3fU 
                                                       & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                      << 0x3aU) | (0x3ffffffffffffffULL 
                                                   & (~ 
                                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                       >> 6U))))))),64);
    bufp->fullQData(oldp+136,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s0),64);
    bufp->fullQData(oldp+138,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1),64);
    bufp->fullQData(oldp+140,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[0]),64);
    bufp->fullQData(oldp+142,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[1]),64);
    bufp->fullQData(oldp+144,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[2]),64);
    bufp->fullQData(oldp+146,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[3]),64);
    bufp->fullQData(oldp+148,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[4]),64);
    bufp->fullQData(oldp+150,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[5]),64);
    bufp->fullQData(oldp+152,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x0_round[6]),64);
    bufp->fullQData(oldp+154,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[0]),64);
    bufp->fullQData(oldp+156,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[1]),64);
    bufp->fullQData(oldp+158,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[2]),64);
    bufp->fullQData(oldp+160,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[3]),64);
    bufp->fullQData(oldp+162,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[4]),64);
    bufp->fullQData(oldp+164,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[5]),64);
    bufp->fullQData(oldp+166,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x1_round[6]),64);
    bufp->fullQData(oldp+168,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[0]),64);
    bufp->fullQData(oldp+170,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[1]),64);
    bufp->fullQData(oldp+172,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[2]),64);
    bufp->fullQData(oldp+174,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[3]),64);
    bufp->fullQData(oldp+176,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[4]),64);
    bufp->fullQData(oldp+178,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[5]),64);
    bufp->fullQData(oldp+180,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x2_round[6]),64);
    bufp->fullQData(oldp+182,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[0]),64);
    bufp->fullQData(oldp+184,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[1]),64);
    bufp->fullQData(oldp+186,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[2]),64);
    bufp->fullQData(oldp+188,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[3]),64);
    bufp->fullQData(oldp+190,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[4]),64);
    bufp->fullQData(oldp+192,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[5]),64);
    bufp->fullQData(oldp+194,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x3_round[6]),64);
    bufp->fullQData(oldp+196,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[0]),64);
    bufp->fullQData(oldp+198,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[1]),64);
    bufp->fullQData(oldp+200,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[2]),64);
    bufp->fullQData(oldp+202,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[3]),64);
    bufp->fullQData(oldp+204,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[4]),64);
    bufp->fullQData(oldp+206,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[5]),64);
    bufp->fullQData(oldp+208,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__x4_round[6]),64);
    bufp->fullQData(oldp+210,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+212,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+214,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+216,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+218,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc),64);
    bufp->fullQData(oldp+220,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1)),64);
    bufp->fullQData(oldp+222,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+224,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+226,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__f),64);
    bufp->fullQData(oldp+228,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h),64);
    bufp->fullQData(oldp+230,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j),64);
    bufp->fullQData(oldp+232,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+234,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+236,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h)),64);
    bufp->fullQData(oldp+238,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+240,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+242,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+244,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+246,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+248,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+250,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+252,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+254,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+256,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+258,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+260,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+262,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+264,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+266,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+268,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+270,((0xa5ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o)),64);
    bufp->fullQData(oldp+272,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+274,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+276,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+278,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+280,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+282,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__f),64);
    bufp->fullQData(oldp+284,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+286,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h),64);
    bufp->fullQData(oldp+288,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+290,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j),64);
    bufp->fullQData(oldp+292,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+294,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+296,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h)),64);
    bufp->fullQData(oldp+298,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+300,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+302,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+304,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+306,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+308,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+310,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+312,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+314,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+316,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+318,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+320,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+322,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+324,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+326,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+328,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+330,((0x96ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+332,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+334,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+336,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+338,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+340,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+342,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__f),64);
    bufp->fullQData(oldp+344,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+346,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h),64);
    bufp->fullQData(oldp+348,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+350,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j),64);
    bufp->fullQData(oldp+352,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+354,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+356,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h)),64);
    bufp->fullQData(oldp+358,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+360,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+362,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+364,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+366,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+368,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+370,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+372,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+374,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+376,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+378,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+380,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+382,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+384,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+386,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+388,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+390,((0x87ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+392,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+394,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+396,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+398,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+400,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+402,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__f),64);
    bufp->fullQData(oldp+404,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+406,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h),64);
    bufp->fullQData(oldp+408,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+410,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j),64);
    bufp->fullQData(oldp+412,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+414,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+416,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h)),64);
    bufp->fullQData(oldp+418,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+420,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+422,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+424,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+426,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+428,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+430,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+432,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+434,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+436,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+438,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+440,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+442,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+444,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+446,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+448,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+450,((0x78ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+452,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+454,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+456,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+458,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+460,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+462,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__f),64);
    bufp->fullQData(oldp+464,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+466,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h),64);
    bufp->fullQData(oldp+468,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+470,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j),64);
    bufp->fullQData(oldp+472,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+474,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+476,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h)),64);
    bufp->fullQData(oldp+478,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+480,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+482,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+484,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+486,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+488,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+490,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+492,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+494,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+496,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+498,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+500,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc),64);
    bufp->fullQData(oldp+502,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc),64);
    bufp->fullQData(oldp+504,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o),64);
    bufp->fullQData(oldp+506,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc),64);
    bufp->fullQData(oldp+508,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc),64);
    bufp->fullQData(oldp+510,((0x69ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+512,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+514,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+516,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+518,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+520,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+522,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__f),64);
    bufp->fullQData(oldp+524,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+526,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h),64);
    bufp->fullQData(oldp+528,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+530,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j),64);
    bufp->fullQData(oldp+532,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+534,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+536,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h)),64);
    bufp->fullQData(oldp+538,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+540,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+542,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+544,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+546,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+548,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+550,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+552,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+554,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+556,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+558,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+560,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc),64);
    bufp->fullQData(oldp+562,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc),64);
    bufp->fullQData(oldp+564,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o),64);
    bufp->fullQData(oldp+566,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc),64);
    bufp->fullQData(oldp+568,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc),64);
    bufp->fullQData(oldp+570,((0x5aULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o)),64);
    bufp->fullQData(oldp+572,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc)),64);
    bufp->fullQData(oldp+574,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+576,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc)),64);
    bufp->fullQData(oldp+578,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+580,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+582,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__f),64);
    bufp->fullQData(oldp+584,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc))),64);
    bufp->fullQData(oldp+586,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h),64);
    bufp->fullQData(oldp+588,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+590,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j),64);
    bufp->fullQData(oldp+592,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s),64);
    bufp->fullQData(oldp+594,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s),64);
    bufp->fullQData(oldp+596,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h)),64);
    bufp->fullQData(oldp+598,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s),64);
    bufp->fullQData(oldp+600,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+602,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+604,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+606,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+608,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+610,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+612,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+614,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+616,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+618,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+620,((0x4bULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o)),64);
    bufp->fullQData(oldp+622,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc)),64);
    bufp->fullQData(oldp+624,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+626,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc)),64);
    bufp->fullQData(oldp+628,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+630,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+632,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__f),64);
    bufp->fullQData(oldp+634,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc))),64);
    bufp->fullQData(oldp+636,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h),64);
    bufp->fullQData(oldp+638,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+640,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j),64);
    bufp->fullQData(oldp+642,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s),64);
    bufp->fullQData(oldp+644,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s),64);
    bufp->fullQData(oldp+646,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h)),64);
    bufp->fullQData(oldp+648,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s),64);
    bufp->fullQData(oldp+650,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+652,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+654,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+656,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+658,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+660,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+662,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+664,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+666,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+668,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+670,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[0]),64);
    bufp->fullQData(oldp+672,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[1]),64);
    bufp->fullQData(oldp+674,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[2]),64);
    bufp->fullQData(oldp+676,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[3]),64);
    bufp->fullQData(oldp+678,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[4]),64);
    bufp->fullQData(oldp+680,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[5]),64);
    bufp->fullQData(oldp+682,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[6]),64);
    bufp->fullQData(oldp+684,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[7]),64);
    bufp->fullQData(oldp+686,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[8]),64);
    bufp->fullQData(oldp+688,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[9]),64);
    bufp->fullQData(oldp+690,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x0_round[10]),64);
    bufp->fullQData(oldp+692,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[0]),64);
    bufp->fullQData(oldp+694,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[1]),64);
    bufp->fullQData(oldp+696,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[2]),64);
    bufp->fullQData(oldp+698,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[3]),64);
    bufp->fullQData(oldp+700,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[4]),64);
    bufp->fullQData(oldp+702,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[5]),64);
    bufp->fullQData(oldp+704,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[6]),64);
    bufp->fullQData(oldp+706,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[7]),64);
    bufp->fullQData(oldp+708,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[8]),64);
    bufp->fullQData(oldp+710,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[9]),64);
    bufp->fullQData(oldp+712,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x1_round[10]),64);
    bufp->fullQData(oldp+714,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[0]),64);
    bufp->fullQData(oldp+716,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[1]),64);
    bufp->fullQData(oldp+718,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[2]),64);
    bufp->fullQData(oldp+720,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[3]),64);
    bufp->fullQData(oldp+722,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[4]),64);
    bufp->fullQData(oldp+724,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[5]),64);
    bufp->fullQData(oldp+726,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[6]),64);
    bufp->fullQData(oldp+728,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[7]),64);
    bufp->fullQData(oldp+730,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[8]),64);
    bufp->fullQData(oldp+732,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[9]),64);
    bufp->fullQData(oldp+734,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x2_round[10]),64);
    bufp->fullQData(oldp+736,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[0]),64);
    bufp->fullQData(oldp+738,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[1]),64);
    bufp->fullQData(oldp+740,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[2]),64);
    bufp->fullQData(oldp+742,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[3]),64);
    bufp->fullQData(oldp+744,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[4]),64);
    bufp->fullQData(oldp+746,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[5]),64);
    bufp->fullQData(oldp+748,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[6]),64);
    bufp->fullQData(oldp+750,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[7]),64);
    bufp->fullQData(oldp+752,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[8]),64);
    bufp->fullQData(oldp+754,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[9]),64);
    bufp->fullQData(oldp+756,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x3_round[10]),64);
    bufp->fullQData(oldp+758,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[0]),64);
    bufp->fullQData(oldp+760,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[1]),64);
    bufp->fullQData(oldp+762,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[2]),64);
    bufp->fullQData(oldp+764,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[3]),64);
    bufp->fullQData(oldp+766,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[4]),64);
    bufp->fullQData(oldp+768,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[5]),64);
    bufp->fullQData(oldp+770,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[6]),64);
    bufp->fullQData(oldp+772,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[7]),64);
    bufp->fullQData(oldp+774,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[8]),64);
    bufp->fullQData(oldp+776,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[9]),64);
    bufp->fullQData(oldp+778,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__x4_round[10]),64);
    bufp->fullQData(oldp+780,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+782,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+784,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+786,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+788,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x4_rc),64);
    bufp->fullQData(oldp+790,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1)),64);
    bufp->fullQData(oldp+792,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__s1) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+794,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+796,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__f),64);
    bufp->fullQData(oldp+798,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__h),64);
    bufp->fullQData(oldp+800,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__j),64);
    bufp->fullQData(oldp+802,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+804,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+806,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__h)),64);
    bufp->fullQData(oldp+808,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+810,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+812,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+814,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+816,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+818,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+820,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+822,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+824,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+826,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__j)))) 
                                << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+828,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+830,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+832,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+834,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+836,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+838,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+840,((0xe1ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r0__x2_o)),64);
    bufp->fullQData(oldp+842,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+844,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+846,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+848,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+850,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+852,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__f),64);
    bufp->fullQData(oldp+854,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+856,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__h),64);
    bufp->fullQData(oldp+858,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+860,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__j),64);
    bufp->fullQData(oldp+862,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+864,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+866,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__h)),64);
    bufp->fullQData(oldp+868,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+870,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+872,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+874,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+876,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+878,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+880,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+882,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+884,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+886,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__j)))) 
                                << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+888,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+890,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_rc),64);
    bufp->fullQData(oldp+892,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc),64);
    bufp->fullQData(oldp+894,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r9__x2_o),64);
    bufp->fullQData(oldp+896,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc),64);
    bufp->fullQData(oldp+898,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x4_rc),64);
    bufp->fullQData(oldp+900,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_rc),64);
    bufp->fullQData(oldp+902,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc),64);
    bufp->fullQData(oldp+904,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r10__x2_o),64);
    bufp->fullQData(oldp+906,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc),64);
    bufp->fullQData(oldp+908,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x4_rc),64);
    bufp->fullQData(oldp+910,((0x5aULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r9__x2_o)),64);
    bufp->fullQData(oldp+912,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc)),64);
    bufp->fullQData(oldp+914,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+916,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc)),64);
    bufp->fullQData(oldp+918,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+920,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+922,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__f),64);
    bufp->fullQData(oldp+924,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc))),64);
    bufp->fullQData(oldp+926,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__h),64);
    bufp->fullQData(oldp+928,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+930,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__j),64);
    bufp->fullQData(oldp+932,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s),64);
    bufp->fullQData(oldp+934,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s),64);
    bufp->fullQData(oldp+936,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__h)),64);
    bufp->fullQData(oldp+938,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s),64);
    bufp->fullQData(oldp+940,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+942,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+944,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+946,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+948,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+950,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+952,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+954,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+956,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__j)))) 
                                << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+958,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+960,((0x4bULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r10__x2_o)),64);
    bufp->fullQData(oldp+962,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc)),64);
    bufp->fullQData(oldp+964,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+966,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc)),64);
    bufp->fullQData(oldp+968,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+970,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+972,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__f),64);
    bufp->fullQData(oldp+974,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc))),64);
    bufp->fullQData(oldp+976,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc 
                               ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+978,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+980,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+982,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+984,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+986,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+988,((0xd2ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+990,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+992,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+994,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+996,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+998,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1000,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__f),64);
    bufp->fullQData(oldp+1002,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1004,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__h),64);
    bufp->fullQData(oldp+1006,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1008,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__j),64);
    bufp->fullQData(oldp+1010,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+1012,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+1014,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__h)),64);
    bufp->fullQData(oldp+1016,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+1018,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1020,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1022,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1024,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1026,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1028,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1030,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1032,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1034,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1036,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1038,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+1040,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+1042,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+1044,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+1046,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+1048,((0xc3ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+1050,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1052,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1054,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1056,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1058,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1060,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__f),64);
    bufp->fullQData(oldp+1062,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1064,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__h),64);
    bufp->fullQData(oldp+1066,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1068,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__j),64);
    bufp->fullQData(oldp+1070,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+1072,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+1074,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__h)),64);
    bufp->fullQData(oldp+1076,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+1078,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1080,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1082,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1084,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1086,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1088,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1090,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1092,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1094,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1096,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1098,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+1100,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+1102,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+1104,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+1106,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+1108,((0xb4ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+1110,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1112,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1114,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1116,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1118,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1120,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__f),64);
    bufp->fullQData(oldp+1122,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1124,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__h),64);
    bufp->fullQData(oldp+1126,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1128,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__j),64);
    bufp->fullQData(oldp+1130,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+1132,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+1134,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__h)),64);
    bufp->fullQData(oldp+1136,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+1138,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1140,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1142,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1144,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1146,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1148,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1150,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1152,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1154,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1156,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1158,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_rc),64);
    bufp->fullQData(oldp+1160,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc),64);
    bufp->fullQData(oldp+1162,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r5__x2_o),64);
    bufp->fullQData(oldp+1164,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc),64);
    bufp->fullQData(oldp+1166,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x4_rc),64);
    bufp->fullQData(oldp+1168,((0xa5ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+1170,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1172,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1174,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1176,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1178,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1180,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__f),64);
    bufp->fullQData(oldp+1182,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1184,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__h),64);
    bufp->fullQData(oldp+1186,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1188,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__j),64);
    bufp->fullQData(oldp+1190,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+1192,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+1194,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__h)),64);
    bufp->fullQData(oldp+1196,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+1198,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1200,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1202,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1204,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1206,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1208,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1210,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1212,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1214,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1216,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1218,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_rc),64);
    bufp->fullQData(oldp+1220,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc),64);
    bufp->fullQData(oldp+1222,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r6__x2_o),64);
    bufp->fullQData(oldp+1224,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc),64);
    bufp->fullQData(oldp+1226,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x4_rc),64);
    bufp->fullQData(oldp+1228,((0x96ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r5__x2_o)),64);
    bufp->fullQData(oldp+1230,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1232,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1234,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1236,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1238,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1240,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__f),64);
    bufp->fullQData(oldp+1242,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1244,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__h),64);
    bufp->fullQData(oldp+1246,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1248,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__j),64);
    bufp->fullQData(oldp+1250,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s),64);
    bufp->fullQData(oldp+1252,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s),64);
    bufp->fullQData(oldp+1254,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__h)),64);
    bufp->fullQData(oldp+1256,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s),64);
    bufp->fullQData(oldp+1258,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1260,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1262,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1264,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1266,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1268,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1270,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1272,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1274,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1276,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1278,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_rc),64);
    bufp->fullQData(oldp+1280,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc),64);
    bufp->fullQData(oldp+1282,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r7__x2_o),64);
    bufp->fullQData(oldp+1284,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc),64);
    bufp->fullQData(oldp+1286,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x4_rc),64);
    bufp->fullQData(oldp+1288,((0x87ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r6__x2_o)),64);
    bufp->fullQData(oldp+1290,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1292,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1294,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1296,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1298,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1300,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__f),64);
    bufp->fullQData(oldp+1302,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1304,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__h),64);
    bufp->fullQData(oldp+1306,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1308,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__j),64);
    bufp->fullQData(oldp+1310,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s),64);
    bufp->fullQData(oldp+1312,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s),64);
    bufp->fullQData(oldp+1314,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__h)),64);
    bufp->fullQData(oldp+1316,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s),64);
    bufp->fullQData(oldp+1318,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1320,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1322,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1324,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1326,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1328,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1330,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1332,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1334,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1336,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1338,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_rc),64);
    bufp->fullQData(oldp+1340,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc),64);
    bufp->fullQData(oldp+1342,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r8__x2_o),64);
    bufp->fullQData(oldp+1344,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc),64);
    bufp->fullQData(oldp+1346,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x4_rc),64);
    bufp->fullQData(oldp+1348,((0x78ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r7__x2_o)),64);
    bufp->fullQData(oldp+1350,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1352,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1354,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1356,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1358,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1360,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__f),64);
    bufp->fullQData(oldp+1362,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1364,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__h),64);
    bufp->fullQData(oldp+1366,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1368,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__j),64);
    bufp->fullQData(oldp+1370,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s),64);
    bufp->fullQData(oldp+1372,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s),64);
    bufp->fullQData(oldp+1374,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__h)),64);
    bufp->fullQData(oldp+1376,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s),64);
    bufp->fullQData(oldp+1378,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1380,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1382,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1384,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1386,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1388,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1390,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1392,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1394,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1396,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1398,((0x69ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vcellout__r8__x2_o)),64);
    bufp->fullQData(oldp+1400,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1402,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1404,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1406,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1408,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1410,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__f),64);
    bufp->fullQData(oldp+1412,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1414,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__h),64);
    bufp->fullQData(oldp+1416,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1418,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__j),64);
    bufp->fullQData(oldp+1420,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s),64);
    bufp->fullQData(oldp+1422,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s),64);
    bufp->fullQData(oldp+1424,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__h)),64);
    bufp->fullQData(oldp+1426,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s),64);
    bufp->fullQData(oldp+1428,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1430,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1432,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1434,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1436,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1438,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1440,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1442,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1444,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1446,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1448,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[0]),64);
    bufp->fullQData(oldp+1450,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[1]),64);
    bufp->fullQData(oldp+1452,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[2]),64);
    bufp->fullQData(oldp+1454,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[3]),64);
    bufp->fullQData(oldp+1456,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[4]),64);
    bufp->fullQData(oldp+1458,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[5]),64);
    bufp->fullQData(oldp+1460,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[6]),64);
    bufp->fullQData(oldp+1462,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[7]),64);
    bufp->fullQData(oldp+1464,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[8]),64);
    bufp->fullQData(oldp+1466,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[9]),64);
    bufp->fullQData(oldp+1468,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x0_round[10]),64);
    bufp->fullQData(oldp+1470,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[0]),64);
    bufp->fullQData(oldp+1472,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[1]),64);
    bufp->fullQData(oldp+1474,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[2]),64);
    bufp->fullQData(oldp+1476,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[3]),64);
    bufp->fullQData(oldp+1478,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[4]),64);
    bufp->fullQData(oldp+1480,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[5]),64);
    bufp->fullQData(oldp+1482,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[6]),64);
    bufp->fullQData(oldp+1484,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[7]),64);
    bufp->fullQData(oldp+1486,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[8]),64);
    bufp->fullQData(oldp+1488,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[9]),64);
    bufp->fullQData(oldp+1490,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x1_round[10]),64);
    bufp->fullQData(oldp+1492,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[0]),64);
    bufp->fullQData(oldp+1494,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[1]),64);
    bufp->fullQData(oldp+1496,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[2]),64);
    bufp->fullQData(oldp+1498,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[3]),64);
    bufp->fullQData(oldp+1500,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[4]),64);
    bufp->fullQData(oldp+1502,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[5]),64);
    bufp->fullQData(oldp+1504,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[6]),64);
    bufp->fullQData(oldp+1506,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[7]),64);
    bufp->fullQData(oldp+1508,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[8]),64);
    bufp->fullQData(oldp+1510,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[9]),64);
    bufp->fullQData(oldp+1512,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x2_round[10]),64);
    bufp->fullQData(oldp+1514,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[0]),64);
    bufp->fullQData(oldp+1516,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[1]),64);
    bufp->fullQData(oldp+1518,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[2]),64);
    bufp->fullQData(oldp+1520,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[3]),64);
    bufp->fullQData(oldp+1522,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[4]),64);
    bufp->fullQData(oldp+1524,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[5]),64);
    bufp->fullQData(oldp+1526,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[6]),64);
    bufp->fullQData(oldp+1528,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[7]),64);
    bufp->fullQData(oldp+1530,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[8]),64);
    bufp->fullQData(oldp+1532,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[9]),64);
    bufp->fullQData(oldp+1534,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x3_round[10]),64);
    bufp->fullQData(oldp+1536,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[0]),64);
    bufp->fullQData(oldp+1538,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[1]),64);
    bufp->fullQData(oldp+1540,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[2]),64);
    bufp->fullQData(oldp+1542,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[3]),64);
    bufp->fullQData(oldp+1544,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[4]),64);
    bufp->fullQData(oldp+1546,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[5]),64);
    bufp->fullQData(oldp+1548,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[6]),64);
    bufp->fullQData(oldp+1550,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[7]),64);
    bufp->fullQData(oldp+1552,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[8]),64);
    bufp->fullQData(oldp+1554,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[9]),64);
    bufp->fullQData(oldp+1556,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__x4_round[10]),64);
    bufp->fullQData(oldp+1558,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+1560,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+1562,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+1564,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+1566,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x4_rc),64);
    bufp->fullQData(oldp+1568,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3)),64);
    bufp->fullQData(oldp+1570,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1572,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1574,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__f),64);
    bufp->fullQData(oldp+1576,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__h),64);
    bufp->fullQData(oldp+1578,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__s3 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1580,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__j),64);
    bufp->fullQData(oldp+1582,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+1584,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+1586,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__h)),64);
    bufp->fullQData(oldp+1588,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+1590,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1592,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1594,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1596,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1598,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1600,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1602,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1604,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1606,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1608,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1610,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+1612,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+1614,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+1616,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+1618,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+1620,((0xe1ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r0__x2_o)),64);
    bufp->fullQData(oldp+1622,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1624,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1626,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1628,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1630,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1632,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__f),64);
    bufp->fullQData(oldp+1634,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1636,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__h),64);
    bufp->fullQData(oldp+1638,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1640,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__j),64);
    bufp->fullQData(oldp+1642,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+1644,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+1646,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__h)),64);
    bufp->fullQData(oldp+1648,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+1650,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1652,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1654,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1656,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1658,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1660,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1662,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1664,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1666,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1668,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1670,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_rc),64);
    bufp->fullQData(oldp+1672,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc),64);
    bufp->fullQData(oldp+1674,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r9__x2_o),64);
    bufp->fullQData(oldp+1676,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc),64);
    bufp->fullQData(oldp+1678,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x4_rc),64);
    bufp->fullQData(oldp+1680,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_rc),64);
    bufp->fullQData(oldp+1682,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc),64);
    bufp->fullQData(oldp+1684,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r10__x2_o),64);
    bufp->fullQData(oldp+1686,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc),64);
    bufp->fullQData(oldp+1688,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x4_rc),64);
    bufp->fullQData(oldp+1690,((0x5aULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r9__x2_o)),64);
    bufp->fullQData(oldp+1692,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1694,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1696,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1698,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1700,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1702,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__f),64);
    bufp->fullQData(oldp+1704,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1706,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__h),64);
    bufp->fullQData(oldp+1708,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1710,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__j),64);
    bufp->fullQData(oldp+1712,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s),64);
    bufp->fullQData(oldp+1714,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s),64);
    bufp->fullQData(oldp+1716,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__h)),64);
    bufp->fullQData(oldp+1718,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s),64);
    bufp->fullQData(oldp+1720,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1722,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1724,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1726,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1728,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1730,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1732,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1734,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1736,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1738,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1740,((0x4bULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r10__x2_o)),64);
    bufp->fullQData(oldp+1742,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1744,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1746,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1748,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1750,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1752,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__f),64);
    bufp->fullQData(oldp+1754,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1756,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h),64);
    bufp->fullQData(oldp+1758,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1760,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s),64);
    bufp->fullQData(oldp+1762,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h)),64);
    bufp->fullQData(oldp+1764,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1766,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1768,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1770,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1772,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+1774,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+1776,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+1778,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+1780,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+1782,((0xd2ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+1784,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1786,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1788,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1790,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1792,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1794,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__f),64);
    bufp->fullQData(oldp+1796,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1798,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__h),64);
    bufp->fullQData(oldp+1800,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1802,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__j),64);
    bufp->fullQData(oldp+1804,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+1806,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+1808,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__h)),64);
    bufp->fullQData(oldp+1810,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+1812,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1814,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1816,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1818,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1820,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1822,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1824,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1826,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1828,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1830,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1832,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+1834,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+1836,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+1838,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+1840,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+1842,((0xc3ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+1844,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1846,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1848,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1850,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1852,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1854,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__f),64);
    bufp->fullQData(oldp+1856,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1858,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__h),64);
    bufp->fullQData(oldp+1860,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1862,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__j),64);
    bufp->fullQData(oldp+1864,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+1866,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+1868,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__h)),64);
    bufp->fullQData(oldp+1870,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+1872,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1874,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1876,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1878,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1880,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1882,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1884,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1886,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1888,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1890,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1892,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+1894,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+1896,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+1898,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+1900,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+1902,((0xb4ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+1904,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1906,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1908,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1910,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1912,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1914,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__f),64);
    bufp->fullQData(oldp+1916,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1918,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__h),64);
    bufp->fullQData(oldp+1920,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1922,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__j),64);
    bufp->fullQData(oldp+1924,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+1926,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+1928,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__h)),64);
    bufp->fullQData(oldp+1930,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+1932,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1934,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1936,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1938,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1940,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1942,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1944,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1946,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1948,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1950,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1952,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_rc),64);
    bufp->fullQData(oldp+1954,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc),64);
    bufp->fullQData(oldp+1956,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r5__x2_o),64);
    bufp->fullQData(oldp+1958,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc),64);
    bufp->fullQData(oldp+1960,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x4_rc),64);
    bufp->fullQData(oldp+1962,((0xa5ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+1964,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1966,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1968,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1970,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1972,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1974,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__f),64);
    bufp->fullQData(oldp+1976,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1978,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__h),64);
    bufp->fullQData(oldp+1980,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1982,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__j),64);
    bufp->fullQData(oldp+1984,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+1986,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+1988,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__h)),64);
    bufp->fullQData(oldp+1990,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+1992,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1994,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1996,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1998,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2000,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2002,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2004,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2006,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2008,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2010,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2012,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_rc),64);
    bufp->fullQData(oldp+2014,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc),64);
    bufp->fullQData(oldp+2016,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r6__x2_o),64);
    bufp->fullQData(oldp+2018,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc),64);
    bufp->fullQData(oldp+2020,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x4_rc),64);
    bufp->fullQData(oldp+2022,((0x96ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r5__x2_o)),64);
    bufp->fullQData(oldp+2024,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2026,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2028,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2030,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2032,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2034,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__f),64);
    bufp->fullQData(oldp+2036,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2038,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__h),64);
    bufp->fullQData(oldp+2040,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2042,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__j),64);
    bufp->fullQData(oldp+2044,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s),64);
    bufp->fullQData(oldp+2046,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s),64);
    bufp->fullQData(oldp+2048,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__h)),64);
    bufp->fullQData(oldp+2050,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s),64);
    bufp->fullQData(oldp+2052,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2054,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2056,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2058,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2060,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2062,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2064,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2066,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2068,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2070,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2072,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_rc),64);
    bufp->fullQData(oldp+2074,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc),64);
    bufp->fullQData(oldp+2076,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r7__x2_o),64);
    bufp->fullQData(oldp+2078,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc),64);
    bufp->fullQData(oldp+2080,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x4_rc),64);
    bufp->fullQData(oldp+2082,((0x87ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r6__x2_o)),64);
    bufp->fullQData(oldp+2084,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2086,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2088,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2090,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2092,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2094,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__f),64);
    bufp->fullQData(oldp+2096,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2098,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__h),64);
    bufp->fullQData(oldp+2100,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2102,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__j),64);
    bufp->fullQData(oldp+2104,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s),64);
    bufp->fullQData(oldp+2106,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s),64);
    bufp->fullQData(oldp+2108,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__h)),64);
    bufp->fullQData(oldp+2110,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s),64);
    bufp->fullQData(oldp+2112,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2114,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2116,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2118,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2120,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2122,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2124,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2126,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2128,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2130,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2132,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_rc),64);
    bufp->fullQData(oldp+2134,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc),64);
    bufp->fullQData(oldp+2136,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r8__x2_o),64);
    bufp->fullQData(oldp+2138,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc),64);
    bufp->fullQData(oldp+2140,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x4_rc),64);
    bufp->fullQData(oldp+2142,((0x78ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r7__x2_o)),64);
    bufp->fullQData(oldp+2144,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2146,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2148,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2150,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2152,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2154,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__f),64);
    bufp->fullQData(oldp+2156,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2158,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__h),64);
    bufp->fullQData(oldp+2160,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2162,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__j),64);
    bufp->fullQData(oldp+2164,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s),64);
    bufp->fullQData(oldp+2166,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s),64);
    bufp->fullQData(oldp+2168,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__h)),64);
    bufp->fullQData(oldp+2170,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s),64);
    bufp->fullQData(oldp+2172,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2174,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2176,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2178,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2180,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2182,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2184,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2186,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2188,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2190,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2192,((0x69ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vcellout__r8__x2_o)),64);
    bufp->fullQData(oldp+2194,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2196,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2198,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2200,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2202,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2204,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__f),64);
    bufp->fullQData(oldp+2206,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2208,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__h),64);
    bufp->fullQData(oldp+2210,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2212,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__j),64);
    bufp->fullQData(oldp+2214,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s),64);
    bufp->fullQData(oldp+2216,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s),64);
    bufp->fullQData(oldp+2218,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__h)),64);
    bufp->fullQData(oldp+2220,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s),64);
    bufp->fullQData(oldp+2222,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2224,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2226,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2228,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2230,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2232,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2234,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2236,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2238,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2240,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2242,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                ^ ((((QData)((IData)(
                                                     (0x7ffffU 
                                                      & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                     << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                                  >> 0x13U)) 
                                   ^ (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                       >> 0x1cU))))),64);
    bufp->fullQData(oldp+2244,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
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
                                                                               >> 0x27U))))))))),64);
    bufp->fullQData(oldp+2246,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h) 
                                ^ ((((QData)((IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                     << 0x3fU) | (0x7fffffffffffffffULL 
                                                  & (~ 
                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                      >> 1U)))) 
                                   ^ (((QData)((IData)(
                                                       (0x3fU 
                                                        & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                       << 0x3aU) | 
                                      (0x3ffffffffffffffULL 
                                       & (~ (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                             >> 6U))))))),64);
    bufp->fullQData(oldp+2248,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                ^ ((((QData)((IData)(
                                                     (0x3ffU 
                                                      & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                     << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                                  >> 0xaU)) 
                                   ^ (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                       >> 0x11U))))),64);
    bufp->fullQData(oldp+2250,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                ^ ((((QData)((IData)(
                                                     (0x7fU 
                                                      & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                                     << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                  >> 7U)) 
                                   ^ ((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                       << 0x17U) | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                               >> 0x29U))))))))),64);
    bufp->fullQData(oldp+2252,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s0),64);
    bufp->fullQData(oldp+2254,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1),64);
    bufp->fullWData(oldp+2256,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__data_out_last),128);
    bufp->fullQData(oldp+2260,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x0_last),64);
    bufp->fullQData(oldp+2262,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__x1_last),64);
    bufp->fullQData(oldp+2264,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[0]),64);
    bufp->fullQData(oldp+2266,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[1]),64);
    bufp->fullQData(oldp+2268,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[2]),64);
    bufp->fullQData(oldp+2270,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[3]),64);
    bufp->fullQData(oldp+2272,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[4]),64);
    bufp->fullQData(oldp+2274,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[5]),64);
    bufp->fullQData(oldp+2276,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x0_round[6]),64);
    bufp->fullQData(oldp+2278,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[0]),64);
    bufp->fullQData(oldp+2280,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[1]),64);
    bufp->fullQData(oldp+2282,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[2]),64);
    bufp->fullQData(oldp+2284,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[3]),64);
    bufp->fullQData(oldp+2286,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[4]),64);
    bufp->fullQData(oldp+2288,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[5]),64);
    bufp->fullQData(oldp+2290,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x1_round[6]),64);
    bufp->fullQData(oldp+2292,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[0]),64);
    bufp->fullQData(oldp+2294,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[1]),64);
    bufp->fullQData(oldp+2296,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[2]),64);
    bufp->fullQData(oldp+2298,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[3]),64);
    bufp->fullQData(oldp+2300,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[4]),64);
    bufp->fullQData(oldp+2302,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[5]),64);
    bufp->fullQData(oldp+2304,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x2_round[6]),64);
    bufp->fullQData(oldp+2306,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[0]),64);
    bufp->fullQData(oldp+2308,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[1]),64);
    bufp->fullQData(oldp+2310,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[2]),64);
    bufp->fullQData(oldp+2312,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[3]),64);
    bufp->fullQData(oldp+2314,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[4]),64);
    bufp->fullQData(oldp+2316,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[5]),64);
    bufp->fullQData(oldp+2318,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x3_round[6]),64);
    bufp->fullQData(oldp+2320,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[0]),64);
    bufp->fullQData(oldp+2322,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[1]),64);
    bufp->fullQData(oldp+2324,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[2]),64);
    bufp->fullQData(oldp+2326,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[3]),64);
    bufp->fullQData(oldp+2328,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[4]),64);
    bufp->fullQData(oldp+2330,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[5]),64);
    bufp->fullQData(oldp+2332,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__x4_round[6]),64);
    bufp->fullQData(oldp+2334,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+2336,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+2338,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+2340,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+2342,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x4_rc),64);
    bufp->fullQData(oldp+2344,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1)),64);
    bufp->fullQData(oldp+2346,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2348,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__f),64);
    bufp->fullQData(oldp+2350,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h),64);
    bufp->fullQData(oldp+2352,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j),64);
    bufp->fullQData(oldp+2354,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+2356,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+2358,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h)),64);
    bufp->fullQData(oldp+2360,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+2362,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2364,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2366,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2368,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2370,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2372,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2374,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2376,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2378,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2380,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2382,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+2384,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+2386,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+2388,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+2390,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+2392,((0xa5ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r0__x2_o)),64);
    bufp->fullQData(oldp+2394,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2396,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2398,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2400,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2402,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2404,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__f),64);
    bufp->fullQData(oldp+2406,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2408,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h),64);
    bufp->fullQData(oldp+2410,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2412,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j),64);
    bufp->fullQData(oldp+2414,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+2416,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+2418,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h)),64);
    bufp->fullQData(oldp+2420,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+2422,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2424,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2426,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2428,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2430,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2432,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2434,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2436,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2438,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2440,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r1__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2442,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+2444,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+2446,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+2448,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+2450,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+2452,((0x96ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+2454,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2456,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2458,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2460,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2462,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2464,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__f),64);
    bufp->fullQData(oldp+2466,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2468,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h),64);
    bufp->fullQData(oldp+2470,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2472,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j),64);
    bufp->fullQData(oldp+2474,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+2476,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+2478,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h)),64);
    bufp->fullQData(oldp+2480,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+2482,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2484,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2486,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2488,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2490,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2492,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2494,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2496,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2498,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2500,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r2__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2502,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+2504,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+2506,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+2508,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+2510,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+2512,((0x87ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+2514,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2516,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2518,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2520,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2522,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2524,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__f),64);
    bufp->fullQData(oldp+2526,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2528,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h),64);
    bufp->fullQData(oldp+2530,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2532,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j),64);
    bufp->fullQData(oldp+2534,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+2536,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+2538,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h)),64);
    bufp->fullQData(oldp+2540,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+2542,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2544,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2546,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2548,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2550,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2552,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2554,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2556,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2558,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2560,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r3__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2562,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+2564,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+2566,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+2568,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+2570,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+2572,((0x78ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+2574,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2576,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2578,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2580,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2582,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2584,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__f),64);
    bufp->fullQData(oldp+2586,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2588,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h),64);
    bufp->fullQData(oldp+2590,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2592,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j),64);
    bufp->fullQData(oldp+2594,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+2596,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+2598,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h)),64);
    bufp->fullQData(oldp+2600,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+2602,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2604,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2606,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2608,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2610,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2612,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2614,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2616,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2618,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2620,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r4__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2622,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_rc),64);
    bufp->fullQData(oldp+2624,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc),64);
    bufp->fullQData(oldp+2626,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o),64);
    bufp->fullQData(oldp+2628,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc),64);
    bufp->fullQData(oldp+2630,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x4_rc),64);
    bufp->fullQData(oldp+2632,((0x69ULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+2634,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2636,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2638,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2640,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2642,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2644,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__f),64);
    bufp->fullQData(oldp+2646,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2648,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h),64);
    bufp->fullQData(oldp+2650,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2652,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j),64);
    bufp->fullQData(oldp+2654,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+2656,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+2658,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h)),64);
    bufp->fullQData(oldp+2660,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+2662,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2664,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2666,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2668,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2670,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2672,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2674,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2676,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2678,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2680,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r5__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2682,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_rc),64);
    bufp->fullQData(oldp+2684,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc),64);
    bufp->fullQData(oldp+2686,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o),64);
    bufp->fullQData(oldp+2688,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc),64);
    bufp->fullQData(oldp+2690,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x4_rc),64);
    bufp->fullQData(oldp+2692,((0x5aULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r5__x2_o)),64);
    bufp->fullQData(oldp+2694,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2696,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2698,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2700,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2702,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2704,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__f),64);
    bufp->fullQData(oldp+2706,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2708,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h),64);
    bufp->fullQData(oldp+2710,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2712,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j),64);
    bufp->fullQData(oldp+2714,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s),64);
    bufp->fullQData(oldp+2716,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s),64);
    bufp->fullQData(oldp+2718,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h)),64);
    bufp->fullQData(oldp+2720,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s),64);
    bufp->fullQData(oldp+2722,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2724,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2726,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2728,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2730,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2732,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2734,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2736,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2738,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2740,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r6__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2742,((0x4bULL ^ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT____Vcellout__r6__x2_o)),64);
    bufp->fullQData(oldp+2744,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc)),64);
    bufp->fullQData(oldp+2746,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+2748,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc)),64);
    bufp->fullQData(oldp+2750,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+2752,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+2754,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__f),64);
    bufp->fullQData(oldp+2756,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc))),64);
    bufp->fullQData(oldp+2758,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h),64);
    bufp->fullQData(oldp+2760,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+2762,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j),64);
    bufp->fullQData(oldp+2764,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s),64);
    bufp->fullQData(oldp+2766,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s),64);
    bufp->fullQData(oldp+2768,((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h)),64);
    bufp->fullQData(oldp+2770,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s),64);
    bufp->fullQData(oldp+2772,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2774,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2776,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2778,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2780,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2782,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2784,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2786,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2788,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2790,(((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2792,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                ^ ((((QData)((IData)(
                                                     (0x7ffffU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                     << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                  >> 0x13U)) 
                                   ^ (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                       >> 0x1cU))))),64);
    bufp->fullQData(oldp+2794,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                ^ ((((QData)((IData)(
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                     << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                  >> 0xaU)) 
                                   ^ (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0x11U))))),64);
    bufp->fullQData(oldp+2796,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                ^ ((((QData)((IData)(
                                                     (0x7fU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                     << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                  >> 7U)) 
                                   ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                       << 0x17U) | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                               >> 0x29U))))))))),64);
    bufp->fullQData(oldp+2798,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x0_p8),64);
    bufp->fullQData(oldp+2800,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x1_p8),64);
    bufp->fullQData(oldp+2802,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x2_p8),64);
    bufp->fullQData(oldp+2804,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x3_p8),64);
    bufp->fullQData(oldp+2806,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__x4_p8),64);
    bufp->fullQData(oldp+2808,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                ^ ((((QData)((IData)(
                                                     (0x7ffffU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                     << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                  >> 0x13U)) 
                                   ^ (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                       >> 0x1cU))))),64);
    bufp->fullQData(oldp+2810,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
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
                                                                               >> 0x27U))))))))),64);
    bufp->fullQData(oldp+2812,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h) 
                                ^ ((((QData)((IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                     << 0x3fU) | (0x7fffffffffffffffULL 
                                                  & (~ 
                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                      >> 1U)))) 
                                   ^ (((QData)((IData)(
                                                       (0x3fU 
                                                        & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                       << 0x3aU) | 
                                      (0x3ffffffffffffffULL 
                                       & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                             >> 6U))))))),64);
    bufp->fullQData(oldp+2814,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                ^ ((((QData)((IData)(
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                     << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                  >> 0xaU)) 
                                   ^ (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0x11U))))),64);
    bufp->fullQData(oldp+2816,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                ^ ((((QData)((IData)(
                                                     (0x7fU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                     << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                  >> 7U)) 
                                   ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                       << 0x17U) | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                               >> 0x29U))))))))),64);
    bufp->fullQData(oldp+2818,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h),64);
    bufp->fullQData(oldp+2820,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j),64);
    bufp->fullQData(oldp+2822,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s),64);
    bufp->fullQData(oldp+2824,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s),64);
    bufp->fullQData(oldp+2826,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h)),64);
    bufp->fullQData(oldp+2828,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s),64);
    bufp->fullQData(oldp+2830,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2832,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2834,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+2836,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+2838,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+2840,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+2842,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2844,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2846,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2848,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2850,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j),64);
    bufp->fullQData(oldp+2852,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s),64);
    bufp->fullQData(oldp+2854,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s),64);
    bufp->fullQData(oldp+2856,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+2858,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+2860,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+2862,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+2864,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+2866,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+2868,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                 ^ ((((QData)((IData)(
                                                      (0x7ffffU 
                                                       & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                      << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                   >> 0x13U)) 
                                    ^ (((QData)((IData)(
                                                        (0xfffffffU 
                                                         & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                        << 0x24U) | 
                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                        >> 0x1cU)))) 
                                ^ (((QData)((IData)(
                                                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[8U]))))),64);
    bufp->fullQData(oldp+2870,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
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
                                ^ (((QData)((IData)(
                                                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[6U]))))),64);
    bufp->fullQData(oldp+2872,((((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h) 
                                 ^ ((((QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                      << 0x3fU) | (0x7fffffffffffffffULL 
                                                   & (~ 
                                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                       >> 1U)))) 
                                    ^ (((QData)((IData)(
                                                        (0x3fU 
                                                         & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                        << 0x3aU) | 
                                       (0x3ffffffffffffffULL 
                                        & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                              >> 6U)))))) 
                                ^ (((QData)((IData)(
                                                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[4U]))))),64);
    bufp->fullQData(oldp+2874,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                 ^ ((((QData)((IData)(
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                      << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                   >> 0xaU)) 
                                    ^ (((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                        << 0x2fU) | 
                                       (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                        >> 0x11U)))) 
                                ^ (((QData)((IData)(
                                                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[2U]))))),64);
    bufp->fullQData(oldp+2876,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                 ^ ((((QData)((IData)(
                                                      (0x7fU 
                                                       & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                      << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                   >> 7U)) 
                                    ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                        << 0x17U) | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                                >> 0x29U)))))))) 
                                ^ (((QData)((IData)(
                                                    vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key[0U]))))),64);
    bufp->fullQData(oldp+2878,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_AE_AM),64);
    bufp->fullQData(oldp+2880,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_AE_AM),64);
    bufp->fullQData(oldp+2882,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_AE_AM),64);
    bufp->fullQData(oldp+2884,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_AE_AM),64);
    bufp->fullQData(oldp+2886,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_AE_AM),64);
    bufp->fullQData(oldp+2888,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x0_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+2890,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x1_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+2892,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x2_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+2894,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+2896,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__x4_o_encrypt_decrypt),64);
    bufp->fullWData(oldp+2898,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__plaintext_ciphertext_dataout),128);
    bufp->fullWData(oldp+2902,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__tag),128);
    bufp->fullQData(oldp+2906,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__IV),64);
    bufp->fullQData(oldp+2908,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[0]),64);
    bufp->fullQData(oldp+2910,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[1]),64);
    bufp->fullQData(oldp+2912,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[2]),64);
    bufp->fullQData(oldp+2914,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[3]),64);
    bufp->fullQData(oldp+2916,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__S[4]),64);
    bufp->fullWData(oldp+2918,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__zeros_key),320);
    bufp->fullQData(oldp+2928,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                ^ ((((QData)((IData)(
                                                     (0x7ffffU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                     << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                                  >> 0x13U)) 
                                   ^ (((QData)((IData)(
                                                       (0xfffffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                       << 0x24U) | 
                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                       >> 0x1cU))))),64);
    bufp->fullQData(oldp+2930,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
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
                                                                               >> 0x27U))))))))),64);
    bufp->fullQData(oldp+2932,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h) 
                                ^ ((((QData)((IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                     << 0x3fU) | (0x7fffffffffffffffULL 
                                                  & (~ 
                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                      >> 1U)))) 
                                   ^ (((QData)((IData)(
                                                       (0x3fU 
                                                        & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                       << 0x3aU) | 
                                      (0x3ffffffffffffffULL 
                                       & (~ (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                             >> 6U))))))),64);
    bufp->fullQData(oldp+2934,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                ^ ((((QData)((IData)(
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                     << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                  >> 0xaU)) 
                                   ^ (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                       << 0x2fU) | 
                                      (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                       >> 0x11U))))),64);
    bufp->fullQData(oldp+2936,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                ^ ((((QData)((IData)(
                                                     (0x7fU 
                                                      & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                     << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                  >> 7U)) 
                                   ^ ((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                       << 0x17U) | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                               >> 0x29U))))))))),64);
    bufp->fullQData(oldp+2938,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[0]),64);
    bufp->fullQData(oldp+2940,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[1]),64);
    bufp->fullQData(oldp+2942,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[2]),64);
    bufp->fullQData(oldp+2944,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[3]),64);
    bufp->fullQData(oldp+2946,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[4]),64);
    bufp->fullQData(oldp+2948,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[5]),64);
    bufp->fullQData(oldp+2950,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[6]),64);
    bufp->fullQData(oldp+2952,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[7]),64);
    bufp->fullQData(oldp+2954,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[8]),64);
    bufp->fullQData(oldp+2956,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[9]),64);
    bufp->fullQData(oldp+2958,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x0_round[10]),64);
    bufp->fullQData(oldp+2960,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[0]),64);
    bufp->fullQData(oldp+2962,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[1]),64);
    bufp->fullQData(oldp+2964,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[2]),64);
    bufp->fullQData(oldp+2966,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[3]),64);
    bufp->fullQData(oldp+2968,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[4]),64);
    bufp->fullQData(oldp+2970,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[5]),64);
    bufp->fullQData(oldp+2972,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[6]),64);
    bufp->fullQData(oldp+2974,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[7]),64);
    bufp->fullQData(oldp+2976,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[8]),64);
    bufp->fullQData(oldp+2978,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[9]),64);
    bufp->fullQData(oldp+2980,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x1_round[10]),64);
    bufp->fullQData(oldp+2982,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[0]),64);
    bufp->fullQData(oldp+2984,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[1]),64);
    bufp->fullQData(oldp+2986,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[2]),64);
    bufp->fullQData(oldp+2988,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[3]),64);
    bufp->fullQData(oldp+2990,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[4]),64);
    bufp->fullQData(oldp+2992,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[5]),64);
    bufp->fullQData(oldp+2994,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[6]),64);
    bufp->fullQData(oldp+2996,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[7]),64);
    bufp->fullQData(oldp+2998,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[8]),64);
    bufp->fullQData(oldp+3000,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[9]),64);
    bufp->fullQData(oldp+3002,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x2_round[10]),64);
    bufp->fullQData(oldp+3004,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[0]),64);
    bufp->fullQData(oldp+3006,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[1]),64);
    bufp->fullQData(oldp+3008,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[2]),64);
    bufp->fullQData(oldp+3010,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[3]),64);
    bufp->fullQData(oldp+3012,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[4]),64);
    bufp->fullQData(oldp+3014,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[5]),64);
    bufp->fullQData(oldp+3016,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[6]),64);
    bufp->fullQData(oldp+3018,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[7]),64);
    bufp->fullQData(oldp+3020,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[8]),64);
    bufp->fullQData(oldp+3022,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[9]),64);
    bufp->fullQData(oldp+3024,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x3_round[10]),64);
    bufp->fullQData(oldp+3026,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[0]),64);
    bufp->fullQData(oldp+3028,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[1]),64);
    bufp->fullQData(oldp+3030,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[2]),64);
    bufp->fullQData(oldp+3032,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[3]),64);
    bufp->fullQData(oldp+3034,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[4]),64);
    bufp->fullQData(oldp+3036,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[5]),64);
    bufp->fullQData(oldp+3038,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[6]),64);
    bufp->fullQData(oldp+3040,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[7]),64);
    bufp->fullQData(oldp+3042,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[8]),64);
    bufp->fullQData(oldp+3044,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[9]),64);
    bufp->fullQData(oldp+3046,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__x4_round[10]),64);
    bufp->fullQData(oldp+3048,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+3050,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+3052,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+3054,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x4_rc),64);
    bufp->fullQData(oldp+3056,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x1_i)),64);
    bufp->fullQData(oldp+3058,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3060,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__f),64);
    bufp->fullQData(oldp+3062,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT____Vcellinp__ascon_p12__x3_i 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3064,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__j),64);
    bufp->fullQData(oldp+3066,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+3068,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+3070,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+3072,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3074,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3076,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3078,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3080,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3082,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3084,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3086,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r0__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3088,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+3090,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+3092,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+3094,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+3096,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+3098,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3100,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3102,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3104,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3106,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3108,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__f),64);
    bufp->fullQData(oldp+3110,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3112,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__h),64);
    bufp->fullQData(oldp+3114,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3116,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__j),64);
    bufp->fullQData(oldp+3118,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+3120,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+3122,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__h)),64);
    bufp->fullQData(oldp+3124,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+3126,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3128,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3130,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3132,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3134,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3136,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3138,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3140,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3142,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3144,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r1__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3146,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_rc),64);
    bufp->fullQData(oldp+3148,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc),64);
    bufp->fullQData(oldp+3150,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r9__x2_o),64);
    bufp->fullQData(oldp+3152,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc),64);
    bufp->fullQData(oldp+3154,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x4_rc),64);
    bufp->fullQData(oldp+3156,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_rc),64);
    bufp->fullQData(oldp+3158,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc),64);
    bufp->fullQData(oldp+3160,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r10__x2_o),64);
    bufp->fullQData(oldp+3162,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc),64);
    bufp->fullQData(oldp+3164,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x4_rc),64);
    bufp->fullQData(oldp+3166,((0x5aULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r9__x2_o)),64);
    bufp->fullQData(oldp+3168,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3170,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3172,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3174,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3176,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3178,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__f),64);
    bufp->fullQData(oldp+3180,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3182,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__h),64);
    bufp->fullQData(oldp+3184,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3186,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__j),64);
    bufp->fullQData(oldp+3188,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s),64);
    bufp->fullQData(oldp+3190,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s),64);
    bufp->fullQData(oldp+3192,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__h)),64);
    bufp->fullQData(oldp+3194,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s),64);
    bufp->fullQData(oldp+3196,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3198,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3200,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3202,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3204,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3206,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3208,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3210,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3212,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3214,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r10__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3216,((0x4bULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r10__x2_o)),64);
    bufp->fullQData(oldp+3218,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3220,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3222,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3224,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3226,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3228,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__f),64);
    bufp->fullQData(oldp+3230,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3232,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h),64);
    bufp->fullQData(oldp+3234,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3236,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j),64);
    bufp->fullQData(oldp+3238,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s),64);
    bufp->fullQData(oldp+3240,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s),64);
    bufp->fullQData(oldp+3242,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h)),64);
    bufp->fullQData(oldp+3244,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s),64);
    bufp->fullQData(oldp+3246,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3248,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3250,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3252,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3254,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3256,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3258,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3260,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3262,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3264,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3266,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+3268,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+3270,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+3272,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+3274,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+3276,((0xd2ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+3278,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3280,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3282,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3284,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3286,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3288,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__f),64);
    bufp->fullQData(oldp+3290,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3292,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__h),64);
    bufp->fullQData(oldp+3294,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3296,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__j),64);
    bufp->fullQData(oldp+3298,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+3300,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+3302,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__h)),64);
    bufp->fullQData(oldp+3304,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+3306,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3308,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3310,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3312,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3314,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3316,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3318,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3320,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3322,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3324,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r2__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3326,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+3328,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+3330,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+3332,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+3334,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+3336,((0xc3ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+3338,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3340,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3342,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3344,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3346,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3348,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__f),64);
    bufp->fullQData(oldp+3350,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3352,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__h),64);
    bufp->fullQData(oldp+3354,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3356,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__j),64);
    bufp->fullQData(oldp+3358,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+3360,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+3362,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__h)),64);
    bufp->fullQData(oldp+3364,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+3366,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3368,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3370,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3372,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3374,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3376,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3378,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3380,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3382,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3384,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r3__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3386,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+3388,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+3390,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+3392,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+3394,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+3396,((0xb4ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+3398,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3400,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3402,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3404,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3406,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3408,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__f),64);
    bufp->fullQData(oldp+3410,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3412,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__h),64);
    bufp->fullQData(oldp+3414,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3416,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__j),64);
    bufp->fullQData(oldp+3418,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+3420,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+3422,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__h)),64);
    bufp->fullQData(oldp+3424,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+3426,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3428,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3430,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3432,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3434,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3436,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3438,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3440,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3442,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3444,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r4__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3446,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_rc),64);
    bufp->fullQData(oldp+3448,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc),64);
    bufp->fullQData(oldp+3450,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r5__x2_o),64);
    bufp->fullQData(oldp+3452,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc),64);
    bufp->fullQData(oldp+3454,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x4_rc),64);
    bufp->fullQData(oldp+3456,((0xa5ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+3458,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3460,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3462,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3464,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3466,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3468,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__f),64);
    bufp->fullQData(oldp+3470,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3472,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__h),64);
    bufp->fullQData(oldp+3474,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3476,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__j),64);
    bufp->fullQData(oldp+3478,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+3480,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+3482,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__h)),64);
    bufp->fullQData(oldp+3484,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+3486,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3488,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3490,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3492,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3494,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3496,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3498,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3500,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3502,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3504,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r5__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3506,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_rc),64);
    bufp->fullQData(oldp+3508,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc),64);
    bufp->fullQData(oldp+3510,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r6__x2_o),64);
    bufp->fullQData(oldp+3512,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc),64);
    bufp->fullQData(oldp+3514,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x4_rc),64);
    bufp->fullQData(oldp+3516,((0x96ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r5__x2_o)),64);
    bufp->fullQData(oldp+3518,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3520,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3522,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3524,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3526,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3528,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__f),64);
    bufp->fullQData(oldp+3530,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3532,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__h),64);
    bufp->fullQData(oldp+3534,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3536,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__j),64);
    bufp->fullQData(oldp+3538,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s),64);
    bufp->fullQData(oldp+3540,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s),64);
    bufp->fullQData(oldp+3542,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__h)),64);
    bufp->fullQData(oldp+3544,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s),64);
    bufp->fullQData(oldp+3546,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3548,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3550,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3552,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3554,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3556,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3558,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3560,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3562,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3564,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r6__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3566,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_rc),64);
    bufp->fullQData(oldp+3568,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc),64);
    bufp->fullQData(oldp+3570,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r7__x2_o),64);
    bufp->fullQData(oldp+3572,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc),64);
    bufp->fullQData(oldp+3574,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x4_rc),64);
    bufp->fullQData(oldp+3576,((0x87ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r6__x2_o)),64);
    bufp->fullQData(oldp+3578,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3580,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3582,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3584,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3586,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3588,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__f),64);
    bufp->fullQData(oldp+3590,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3592,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__h),64);
    bufp->fullQData(oldp+3594,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3596,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__j),64);
    bufp->fullQData(oldp+3598,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s),64);
    bufp->fullQData(oldp+3600,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s),64);
    bufp->fullQData(oldp+3602,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__h)),64);
    bufp->fullQData(oldp+3604,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s),64);
    bufp->fullQData(oldp+3606,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3608,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3610,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3612,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3614,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3616,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3618,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3620,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3622,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3624,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r7__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3626,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_rc),64);
    bufp->fullQData(oldp+3628,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc),64);
    bufp->fullQData(oldp+3630,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r8__x2_o),64);
    bufp->fullQData(oldp+3632,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc),64);
    bufp->fullQData(oldp+3634,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x4_rc),64);
    bufp->fullQData(oldp+3636,((0x78ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r7__x2_o)),64);
    bufp->fullQData(oldp+3638,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3640,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3642,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3644,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3646,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3648,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__f),64);
    bufp->fullQData(oldp+3650,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3652,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__h),64);
    bufp->fullQData(oldp+3654,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3656,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__j),64);
    bufp->fullQData(oldp+3658,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s),64);
    bufp->fullQData(oldp+3660,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s),64);
    bufp->fullQData(oldp+3662,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__h)),64);
    bufp->fullQData(oldp+3664,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s),64);
    bufp->fullQData(oldp+3666,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3668,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3670,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3672,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3674,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3676,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3678,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3680,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3682,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3684,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r8__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+3686,((0x69ULL ^ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vcellout__r8__x2_o)),64);
    bufp->fullQData(oldp+3688,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc)),64);
    bufp->fullQData(oldp+3690,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+3692,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc)),64);
    bufp->fullQData(oldp+3694,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+3696,(((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3698,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__f),64);
    bufp->fullQData(oldp+3700,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc))),64);
    bufp->fullQData(oldp+3702,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__h),64);
    bufp->fullQData(oldp+3704,((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_rc 
                                ^ ((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+3706,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__j),64);
    bufp->fullQData(oldp+3708,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s),64);
    bufp->fullQData(oldp+3710,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s),64);
    bufp->fullQData(oldp+3712,((~ vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__h)),64);
    bufp->fullQData(oldp+3714,(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s),64);
    bufp->fullQData(oldp+3716,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+3718,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s)))) 
                                 << 0x24U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+3720,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+3722,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+3724,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+3726,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+3728,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                 << 0x36U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+3730,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+3732,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__j)))) 
                                 << 0x39U) | (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+3734,(((vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__PVT__r9__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullBit(oldp+3736,(vlSelfRef.test_ascon_encrypt_decrypt__DOT__clk));
    bufp->fullQData(oldp+3737,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt)),64);
    bufp->fullQData(oldp+3739,(((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+3741,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__s1 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt))),64);
    bufp->fullQData(oldp+3743,((vlSelfRef.test_ascon_encrypt_decrypt__DOT__x3_i_encrypt_decrypt 
                                ^ ((~ vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_encrypt_decrypt__DOT__ascon_encrypt_decrypt_dut__DOT__ascon_p8__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
}
