// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_ascon_core__Syms.h"


VL_ATTR_COLD void Vtest_ascon_core___024root__trace_init_sub__TOP__0(Vtest_ascon_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_init_sub__TOP__0\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_ascon_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+604,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+24,0,"key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+28,0,"nonce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+32,0,"sel_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+33,0,"mode_sel_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"data_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"data_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+36,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+533,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+214,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"process_en_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"process_en_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"process_en_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"process_en_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"process_en_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+538,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+654,0,"CLOCK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1,0,"KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 127,0);
    tracep->declArray(c+5,0,"NONCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 127,0);
    tracep->declArray(c+9,0,"TAG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 127,0);
    tracep->declBus(c+13,0,"PLAINTEXT_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+14,0,"ASS_DATA_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+15,0,"CIPHERTEXT_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+16,0,"MESSAGE_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+17,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+655,0,"ASSOCIATED_DATA__Vstatic__out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+192,0,"ENCRYPT__Vstatic__out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+196,0,"DECRYPT__Vstatic__out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+200,0,"FINALIZATION__Vstatic__tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("ascon_core_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+604,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+28,0,"nonce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+32,0,"sel_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+33,0,"mode_sel_encrypt_decrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"data_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"data_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+36,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+533,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+40,0,"process_en_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"process_en_AD_AM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"process_en_encrypt_decrypt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"process_en_hash",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"process_en_final",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+538,0,"tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+537,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+659,0,"AEAD128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+660,0,"Hash256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+661,0,"XOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+662,0,"CXOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+542,0,"x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+544,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+546,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+548,0,"x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+550,0,"x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+552,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"err_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"err_process_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+224,0,"x0_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"x1_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+228,0,"x2_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+606,0,"x3_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+608,0,"x4_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+230,0,"x0_i_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+232,0,"x1_i_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x2_i_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_i_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+553,0,"x0_o_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+555,0,"x1_o_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+557,0,"x2_o_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+559,0,"x3_o_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+561,0,"x4_o_AD_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+240,0,"x0_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+242,0,"x1_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"x2_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"x3_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"x4_i_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+563,0,"x0_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+565,0,"x1_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+567,0,"x2_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+569,0,"x3_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+571,0,"x4_o_encrypt_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+154,0,"x0_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+156,0,"x1_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+158,0,"x2_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+160,0,"x3_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+162,0,"x4_i_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+164,0,"x0_i_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"x1_i_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+168,0,"x2_i_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+170,0,"x3_i_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+172,0,"x4_i_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+573,0,"x0_o_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+575,0,"x1_o_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+577,0,"x2_o_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+579,0,"x3_o_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+581,0,"x4_o_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+583,0,"encrypt_decrypt_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+587,0,"hash_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+610,0,"x0_i_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+612,0,"x1_i_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+614,0,"x2_i_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+616,0,"x3_i_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+618,0,"x4_i_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"x0_i_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x1_i_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"x2_i_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"x3_i_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"x4_i_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"x0_o_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+252,0,"x1_o_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+254,0,"x2_o_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+256,0,"x3_o_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+258,0,"x4_o_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+260,0,"x0_o_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+262,0,"x1_o_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+264,0,"x2_o_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+266,0,"x3_o_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+268,0,"x4_o_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+46,0,"x0_i_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+215,0,"x1_i_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+217,0,"x2_i_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+48,0,"x3_i_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+50,0,"x4_i_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+224,0,"x0_o_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"x1_o_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+228,0,"x2_o_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+270,0,"x3_o_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+272,0,"x4_o_init_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"x0_i_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"x1_i_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x2_i_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_i_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+102,0,"x0_o_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"x1_o_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"x2_o_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"x3_o_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+278,0,"x4_o_AD_AM_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"x0_i_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"x1_i_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x2_i_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_i_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"x0_o_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"x1_o_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"x2_o_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"x3_o_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"x4_o_AD_AM_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+120,0,"x0_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+122,0,"x1_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"x2_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"x3_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"x4_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+124,0,"x0_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+126,0,"x1_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+128,0,"x2_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"x3_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"x4_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+164,0,"x0_i_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"x1_i_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+168,0,"x2_i_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+170,0,"x3_i_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+172,0,"x4_i_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+280,0,"x0_o_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"x1_o_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"x2_o_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x3_o_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+140,0,"x4_o_hash_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+154,0,"x0_i_final_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+156,0,"x1_i_final_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+174,0,"x2_i_final_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+176,0,"x3_i_final_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+162,0,"x4_i_final_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"x3_o_final_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+144,0,"x4_o_final_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+178,0,"data_out_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+589,0,"tag_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+620,0,"x0_i_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+622,0,"x1_i_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+624,0,"x2_i_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+626,0,"x3_i_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+628,0,"x4_i_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+282,0,"x0_o_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+284,0,"x1_o_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+286,0,"x2_o_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+288,0,"x3_o_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+290,0,"x4_o_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+292,0,"done_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"en_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"en_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+630,0,"x0_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+632,0,"x1_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+634,0,"x2_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+636,0,"x3_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+638,0,"x4_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+182,0,"x0_mux_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+184,0,"x1_mux_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+186,0,"x2_mux_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+188,0,"x3_mux_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+190,0,"x4_mux_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ascon_AD_AM_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+604,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"process_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"sel_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"data_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"data_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+36,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+230,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+232,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+553,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+555,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+557,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+559,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+561,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"x0_i_AD_AM_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"x1_i_AD_AM_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x2_i_AD_AM_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_i_AD_AM_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i_AD_AM_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+102,0,"x0_o_AD_AM_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"x1_o_AD_AM_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"x2_o_AD_AM_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"x3_o_AD_AM_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+278,0,"x4_o_AD_AM_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"x0_i_AD_AM_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"x1_i_AD_AM_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x2_i_AD_AM_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_i_AD_AM_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i_AD_AM_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"x0_o_AD_AM_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"x1_o_AD_AM_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"x2_o_AD_AM_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"x3_o_AD_AM_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"x4_o_AD_AM_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+659,0,"AEAD128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+660,0,"Hash256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+661,0,"XOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+662,0,"CXOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+102,0,"x0_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"x1_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"x2_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"x3_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+278,0,"x4_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"x0_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"x1_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"x2_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"x3_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"x4_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+146,0,"x0_o_temp_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+148,0,"x1_o_temp_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+150,0,"x2_o_temp_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+152,0,"x3_o_temp_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+60,0,"x4_o_temp_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,0,"x0_o_temp_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+64,0,"x1_o_temp_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+66,0,"x2_o_temp_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+68,0,"x3_o_temp_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+70,0,"x4_o_temp_AM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+72,0,"x0_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+74,0,"x1_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+76,0,"x2_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+78,0,"x3_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+80,0,"x4_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+219,0,"length_minus_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascon_encrypt_decrypt_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+604,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"process_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"process_mode_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"text_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"text_position",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+36,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+240,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+242,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+583,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+563,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+565,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+567,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+569,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+571,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+120,0,"x0_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+122,0,"x1_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"x2_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"x3_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"x4_i_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+124,0,"x0_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+126,0,"x1_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+128,0,"x2_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"x3_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"x4_o_encrypt_decrypt_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+124,0,"x0_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+126,0,"x1_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+128,0,"x2_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"x3_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"x4_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+120,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+122,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+295,0,"data_out_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+82,0,"x0_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"x1_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"x2_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"x3_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+90,0,"x4_o_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+299,0,"x0_last_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+301,0,"x1_last_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+640,0,"data_out_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+220,0,"x0_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+222,0,"x1_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"x2_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"x3_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"x4_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+303,0,"data_out_last_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+305,0,"data_out_last_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascon_finalization_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+604,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"process_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+154,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+156,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+158,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+160,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+162,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+589,0,"tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+154,0,"x0_i_final_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+156,0,"x1_i_final_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+174,0,"x2_i_final_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+176,0,"x3_i_final_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+162,0,"x4_i_final_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"x3_o_final_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+144,0,"x4_o_final_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascon_hash_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+604,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"process_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+164,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+168,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+170,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+172,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+573,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+575,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+577,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+579,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+581,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+587,0,"hash_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+164,0,"x0_i_hash_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"x1_i_hash_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+168,0,"x2_i_hash_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+170,0,"x3_i_hash_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+172,0,"x4_i_hash_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+280,0,"x0_o_hash_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"x1_o_hash_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"x2_o_hash_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x3_o_hash_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+140,0,"x4_o_hash_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+280,0,"x0_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"x1_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"x2_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"x3_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+140,0,"x4_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascon_initialization_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"sel_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+24,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+28,0,"nonce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+224,0,"x0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"x1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+228,0,"x2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+606,0,"x3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+608,0,"x4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+46,0,"x0_i_init_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+215,0,"x1_i_init_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+217,0,"x2_i_init_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+48,0,"x3_i_init_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+50,0,"x4_i_init_p12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+224,0,"x0_o_init_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"x1_o_init_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+228,0,"x2_o_init_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+270,0,"x3_o_init_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+272,0,"x4_o_init_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+659,0,"AEAD128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+660,0,"Hash256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+661,0,"XOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+662,0,"CXOF128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+46,0,"IV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("S", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+307+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+52,0,"key_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+56,0,"nonce_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+52,0,"zeros_key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascon_permutation_multicycle_p4_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+604,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"en_p8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"en_p12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+620,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+622,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+624,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+626,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+628,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+282,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+284,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+286,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+288,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+290,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+292,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+593,0,"x0_reg_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+595,0,"x1_reg_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+597,0,"x2_reg_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+599,0,"x3_reg_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+601,0,"x4_reg_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+603,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+317+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+323+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+329+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+335+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+341+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+347,0,"x0_i_from_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+349,0,"x1_i_from_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+351,0,"x2_i_from_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+353,0,"x3_i_from_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+355,0,"x4_i_from_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+357,0,"x0_o_from_module",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+359,0,"x1_o_from_module",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+361,0,"x2_o_from_module",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+363,0,"x3_o_from_module",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+365,0,"x4_o_from_module",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+644,0,"x0_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+646,0,"x1_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+648,0,"x2_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+650,0,"x3_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+652,0,"x4_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+367,0,"rc_r0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+369,0,"rc_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+371,0,"rc_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+373,0,"rc_r3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+367,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+347,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+349,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+351,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+353,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+355,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+375,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+377,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+379,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+381,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+383,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+663,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+347,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+349,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+385,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+353,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+355,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+387,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+389,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+391,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+393,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+395,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+397,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+399,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+401,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+403,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+405,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+407,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+409,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+411,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+413,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+415,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+367,0,"rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+369,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+375,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+377,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+379,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+381,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+383,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+417,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+419,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+421,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+423,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+425,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+663,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+375,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+377,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+427,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+381,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+383,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+429,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+431,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+433,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+435,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+437,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+439,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+441,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+443,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+445,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+447,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+449,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+451,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+453,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+455,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+457,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+369,0,"rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+371,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+417,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+419,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+421,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+423,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+425,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+459,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+461,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+463,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+465,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+467,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+663,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+417,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+419,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+469,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+423,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+425,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+471,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+473,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+475,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+477,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+479,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+481,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+483,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+485,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+487,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+489,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+491,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+493,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+495,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+497,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+499,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+371,0,"rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+373,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+459,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+461,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+463,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+465,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+467,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+357,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+359,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+361,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+363,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+365,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+663,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+459,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+461,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+501,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+465,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+467,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+503,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+505,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+507,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+509,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+511,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+513,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+515,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+517,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+519,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+521,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+523,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+525,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+527,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+529,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+531,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+373,0,"rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+204,0,"encrypt_cycle_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+206,0,"decrypt_cycle_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+208,0,"hash_cycle_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declQuad(c+210,0,"start_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->declQuad(c+212,0,"end_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_init_top(Vtest_ascon_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_init_top\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_ascon_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_ascon_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_ascon_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_ascon_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_register(Vtest_ascon_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_register\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest_ascon_core___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_ascon_core___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_ascon_core___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_ascon_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_const_0_sub_0(Vtest_ascon_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_const_0\n"); );
    // Init
    Vtest_ascon_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_core___024root*>(voidSelf);
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_ascon_core___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_const_0_sub_0(Vtest_ascon_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_const_0_sub_0\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+654,(0x64U),32);
    bufp->fullWData(oldp+655,(vlSelfRef.test_ascon_core__DOT__ASSOCIATED_DATA__Vstatic__out),128);
    bufp->fullCData(oldp+659,(0U),2);
    bufp->fullCData(oldp+660,(1U),2);
    bufp->fullCData(oldp+661,(2U),2);
    bufp->fullCData(oldp+662,(3U),2);
    bufp->fullQData(oldp+663,(0xffffffffffffffffULL),64);
}

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_full_0_sub_0(Vtest_ascon_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_full_0\n"); );
    // Init
    Vtest_ascon_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_core___024root*>(voidSelf);
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_ascon_core___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_ascon_core___024root__trace_full_0_sub_0(Vtest_ascon_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root__trace_full_0_sub_0\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_12;
    // Body
    bufp->fullWData(oldp+1,(vlSelfRef.test_ascon_core__DOT__KEY),128);
    bufp->fullWData(oldp+5,(vlSelfRef.test_ascon_core__DOT__NONCE),128);
    bufp->fullWData(oldp+9,(vlSelfRef.test_ascon_core__DOT__TAG),128);
    bufp->fullIData(oldp+13,(vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH),32);
    bufp->fullIData(oldp+14,(vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH),32);
    bufp->fullIData(oldp+15,(vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH),32);
    bufp->fullIData(oldp+16,(vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH),32);
    bufp->fullIData(oldp+17,(vlSelfRef.test_ascon_core__DOT__count),32);
    bufp->fullIData(oldp+18,(vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+19,(vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+20,(vlSelfRef.test_ascon_core__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+21,(vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+22,(vlSelfRef.test_ascon_core__DOT__unnamedblk5__DOT__i),32);
    bufp->fullBit(oldp+23,(vlSelfRef.test_ascon_core__DOT__rst_n));
    bufp->fullWData(oldp+24,(vlSelfRef.test_ascon_core__DOT__key),128);
    bufp->fullWData(oldp+28,(vlSelfRef.test_ascon_core__DOT__nonce),128);
    bufp->fullCData(oldp+32,(vlSelfRef.test_ascon_core__DOT__sel_type),2);
    bufp->fullBit(oldp+33,(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt));
    bufp->fullIData(oldp+34,(vlSelfRef.test_ascon_core__DOT__data_length),32);
    bufp->fullIData(oldp+35,(vlSelfRef.test_ascon_core__DOT__data_position),32);
    bufp->fullWData(oldp+36,(vlSelfRef.test_ascon_core__DOT__data_in),128);
    bufp->fullBit(oldp+40,(vlSelfRef.test_ascon_core__DOT__process_en_init));
    bufp->fullBit(oldp+41,(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM));
    bufp->fullBit(oldp+42,(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt));
    bufp->fullBit(oldp+43,(vlSelfRef.test_ascon_core__DOT__process_en_hash));
    bufp->fullBit(oldp+44,(vlSelfRef.test_ascon_core__DOT__process_en_final));
    bufp->fullBit(oldp+45,((vlSelfRef.test_ascon_core__DOT__data_length 
                            < vlSelfRef.test_ascon_core__DOT__data_position)));
    bufp->fullQData(oldp+46,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                               ? 0x1000808c0001ULL : 
                              ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                ? 0x80100cc0002ULL : 
                               ((2U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                 ? 0x80000cc0003ULL
                                 : 0x80000cc0004ULL)))),64);
    bufp->fullQData(oldp+48,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                               ? (((QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__nonce[2U])))
                               : 0ULL)),64);
    bufp->fullQData(oldp+50,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
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
    bufp->fullWData(oldp+52,(__Vtemp_3),128);
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
    bufp->fullWData(oldp+56,(__Vtemp_6),128);
    bufp->fullQData(oldp+60,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8
                               : ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? (0x8000000000000000ULL 
                                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)
                                   : (0x8000000000000000ULL 
                                      ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8)))),64);
    bufp->fullQData(oldp+62,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8)),64);
    bufp->fullQData(oldp+64,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM)),64);
    bufp->fullQData(oldp+66,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM)),64);
    bufp->fullQData(oldp+68,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM)),64);
    bufp->fullQData(oldp+70,(((8U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM)),64);
    bufp->fullQData(oldp+72,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                               ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                       : 0ULL)) : (
                                                   (8U 
                                                    <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                                     : 0ULL)
                                                    : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8))),64);
    bufp->fullQData(oldp+74,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                               ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                       : 0ULL)) : (
                                                   (8U 
                                                    <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                                     : 0ULL)
                                                    : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM))),64);
    bufp->fullQData(oldp+76,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                               ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                       : 0ULL)) : (
                                                   (8U 
                                                    <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                                     : 0ULL)
                                                    : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM))),64);
    bufp->fullQData(oldp+78,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                               ? ((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                   : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                       ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                       : 0ULL)) : (
                                                   (8U 
                                                    <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                                                    ? 
                                                   ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                                     : 0ULL)
                                                    : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM))),64);
    bufp->fullQData(oldp+80,(((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
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
    bufp->fullQData(oldp+82,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp)),64);
    bufp->fullQData(oldp+84,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp)),64);
    bufp->fullQData(oldp+86,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt)),64);
    bufp->fullQData(oldp+88,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt)),64);
    bufp->fullQData(oldp+90,(((0x10U <= vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position)
                               ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8
                                   : 0ULL) : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt)),64);
    bufp->fullQData(oldp+92,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
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
    bufp->fullQData(oldp+94,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
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
    bufp->fullQData(oldp+96,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                               ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                               : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt
                                   : 0ULL))),64);
    bufp->fullQData(oldp+98,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                               ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                               : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                   ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt
                                   : 0ULL))),64);
    bufp->fullQData(oldp+100,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt
                                    : 0ULL))),64);
    bufp->fullQData(oldp+102,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+104,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+106,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+108,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+110,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+112,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+114,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+116,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+118,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+120,(((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                ? (((QData)((IData)(
                                                    vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__data_in[2U])))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3)),64);
    bufp->fullQData(oldp+122,(((IData)(vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt)
                                ? (((QData)((IData)(
                                                    vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__data_in[0U])))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5)),64);
    bufp->fullQData(oldp+124,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+126,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+128,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+130,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+132,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8
                                : 0ULL)),64);
    bufp->fullQData(oldp+134,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+136,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+138,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+140,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+142,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+144,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12
                                : 0ULL)),64);
    bufp->fullQData(oldp+146,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8
                                    : 0ULL))),64);
    bufp->fullQData(oldp+148,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8
                                    : 0ULL))),64);
    bufp->fullQData(oldp+150,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8
                                    : 0ULL))),64);
    bufp->fullQData(oldp+152,(((0U == vlSelfRef.test_ascon_core__DOT__data_length)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8
                                    : 0ULL))),64);
    bufp->fullQData(oldp+154,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                : 0ULL)),64);
    bufp->fullQData(oldp+156,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                : 0ULL)),64);
    bufp->fullQData(oldp+158,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                : 0ULL)),64);
    bufp->fullQData(oldp+160,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                : 0ULL)),64);
    bufp->fullQData(oldp+162,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                : 0ULL)),64);
    bufp->fullQData(oldp+164,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                : 0ULL)),64);
    bufp->fullQData(oldp+166,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                : 0ULL)),64);
    bufp->fullQData(oldp+168,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                : 0ULL)),64);
    bufp->fullQData(oldp+170,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                : 0ULL)),64);
    bufp->fullQData(oldp+172,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                : 0ULL)),64);
    bufp->fullQData(oldp+174,(((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                  ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)
                                  : 0xffffffffffffffffULL) 
                                & (((QData)((IData)(
                                                    vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                               | ((~ (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                  & ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                      : 0ULL)))),64);
    bufp->fullQData(oldp+176,(((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                  ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
                                  : 0xffffffffffffffffULL) 
                                & (((QData)((IData)(
                                                    vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                               | ((~ (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                       << 0x20U) | (QData)((IData)(
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
    bufp->fullWData(oldp+178,(__Vtemp_9),128);
    bufp->fullQData(oldp+182,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash
                                        : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)))),64);
    bufp->fullQData(oldp+184,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash
                                        : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)))),64);
    bufp->fullQData(oldp+186,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash
                                        : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)))),64);
    bufp->fullQData(oldp+188,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash
                                        : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)))),64);
    bufp->fullQData(oldp+190,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash
                                        : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4)))),64);
    bufp->fullWData(oldp+192,(vlSelfRef.test_ascon_core__DOT__ENCRYPT__Vstatic__out),128);
    bufp->fullWData(oldp+196,(vlSelfRef.test_ascon_core__DOT__DECRYPT__Vstatic__out),128);
    bufp->fullWData(oldp+200,(vlSelfRef.test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out),128);
    bufp->fullDouble(oldp+204,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__encrypt_cycle_use));
    bufp->fullDouble(oldp+206,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__decrypt_cycle_use));
    bufp->fullDouble(oldp+208,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__hash_cycle_use));
    bufp->fullQData(oldp+210,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__start_time),64);
    bufp->fullQData(oldp+212,(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__end_time),64);
    bufp->fullBit(oldp+214,(vlSelfRef.test_ascon_core__DOT__err));
    bufp->fullQData(oldp+215,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12),64);
    bufp->fullQData(oldp+217,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12),64);
    bufp->fullIData(oldp+219,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position),32);
    bufp->fullQData(oldp+220,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last),64);
    bufp->fullQData(oldp+222,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last),64);
    bufp->fullQData(oldp+224,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_init),64);
    bufp->fullQData(oldp+226,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_init),64);
    bufp->fullQData(oldp+228,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_init),64);
    bufp->fullQData(oldp+230,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM),64);
    bufp->fullQData(oldp+232,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM),64);
    bufp->fullQData(oldp+234,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM),64);
    bufp->fullQData(oldp+236,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM),64);
    bufp->fullQData(oldp+238,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM),64);
    bufp->fullQData(oldp+240,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+242,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+244,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+246,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+248,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt),64);
    bufp->fullQData(oldp+250,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12),64);
    bufp->fullQData(oldp+252,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12),64);
    bufp->fullQData(oldp+254,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12),64);
    bufp->fullQData(oldp+256,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12),64);
    bufp->fullQData(oldp+258,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12),64);
    bufp->fullQData(oldp+260,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8),64);
    bufp->fullQData(oldp+262,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8),64);
    bufp->fullQData(oldp+264,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8),64);
    bufp->fullQData(oldp+266,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8),64);
    bufp->fullQData(oldp+268,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8),64);
    bufp->fullQData(oldp+270,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12),64);
    bufp->fullQData(oldp+272,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12),64);
    bufp->fullQData(oldp+274,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8),64);
    bufp->fullQData(oldp+276,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8),64);
    bufp->fullQData(oldp+278,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8),64);
    bufp->fullQData(oldp+280,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12),64);
    bufp->fullQData(oldp+282,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p),64);
    bufp->fullQData(oldp+284,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p),64);
    bufp->fullQData(oldp+286,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p),64);
    bufp->fullQData(oldp+288,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p),64);
    bufp->fullQData(oldp+290,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p),64);
    bufp->fullBit(oldp+292,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p));
    bufp->fullBit(oldp+293,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8));
    bufp->fullBit(oldp+294,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12));
    bufp->fullWData(oldp+295,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last),128);
    bufp->fullQData(oldp+299,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp),64);
    bufp->fullQData(oldp+301,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp),64);
    bufp->fullQData(oldp+303,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0),64);
    bufp->fullQData(oldp+305,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1),64);
    bufp->fullQData(oldp+307,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0]),64);
    bufp->fullQData(oldp+309,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1]),64);
    bufp->fullQData(oldp+311,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2]),64);
    bufp->fullQData(oldp+313,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3]),64);
    bufp->fullQData(oldp+315,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4]),64);
    bufp->fullQData(oldp+317,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[0]),64);
    bufp->fullQData(oldp+319,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[1]),64);
    bufp->fullQData(oldp+321,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round[2]),64);
    bufp->fullQData(oldp+323,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[0]),64);
    bufp->fullQData(oldp+325,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[1]),64);
    bufp->fullQData(oldp+327,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round[2]),64);
    bufp->fullQData(oldp+329,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[0]),64);
    bufp->fullQData(oldp+331,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[1]),64);
    bufp->fullQData(oldp+333,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round[2]),64);
    bufp->fullQData(oldp+335,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[0]),64);
    bufp->fullQData(oldp+337,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[1]),64);
    bufp->fullQData(oldp+339,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round[2]),64);
    bufp->fullQData(oldp+341,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[0]),64);
    bufp->fullQData(oldp+343,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[1]),64);
    bufp->fullQData(oldp+345,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round[2]),64);
    bufp->fullQData(oldp+347,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg),64);
    bufp->fullQData(oldp+349,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg),64);
    bufp->fullQData(oldp+351,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg),64);
    bufp->fullQData(oldp+353,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg),64);
    bufp->fullQData(oldp+355,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg),64);
    bufp->fullQData(oldp+357,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                               ^ ((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                                 >> 0x13U)) 
                                  ^ (((QData)((IData)(
                                                      (0xfffffffU 
                                                       & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                      << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                                   >> 0x1cU))))),64);
    bufp->fullQData(oldp+359,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                               ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                  ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                      << 0x19U) | (QData)((IData)(
                                                                  (0x1ffffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                              >> 0x27U))))))))),64);
    bufp->fullQData(oldp+361,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                               ^ ((((QData)((IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                    << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                                 >> 1U)) 
                                  ^ (((QData)((IData)(
                                                      (0x3fU 
                                                       & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                      << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+363,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                               ^ ((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                                 >> 0xaU)) 
                                  ^ (((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                      << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                                   >> 0x11U))))),64);
    bufp->fullQData(oldp+365,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                               ^ ((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                 >> 7U)) 
                                  ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                      << 0x17U) | (QData)((IData)(
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                                              >> 0x29U))))))))),64);
    bufp->fullQData(oldp+367,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                                ? 0xf0ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                              ? 0xb4ULL
                                              : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                  ? 0x78ULL
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                   ? 0xb4ULL
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x78ULL
                                                    : 0ULL)))))),64);
    bufp->fullQData(oldp+369,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                                ? 0xe1ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                              ? 0xa5ULL
                                              : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                  ? 0x69ULL
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                   ? 0xa5ULL
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x69ULL
                                                    : 0ULL)))))),64);
    bufp->fullQData(oldp+371,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                                ? 0xd2ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                              ? 0x96ULL
                                              : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                  ? 0x5aULL
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                   ? 0x96ULL
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x5aULL
                                                    : 0ULL)))))),64);
    bufp->fullQData(oldp+373,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2)
                                ? 0xc3ULL : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4)
                                              ? 0x87ULL
                                              : ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5)
                                                  ? 0x4bULL
                                                  : 
                                                 ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6)
                                                   ? 0x87ULL
                                                   : 
                                                  ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7)
                                                    ? 0x4bULL
                                                    : 0ULL)))))),64);
    bufp->fullQData(oldp+375,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+377,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+379,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+381,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+383,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc),64);
    bufp->fullQData(oldp+385,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc),64);
    bufp->fullQData(oldp+387,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+389,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+391,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s),64);
    bufp->fullQData(oldp+393,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+395,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s),64);
    bufp->fullQData(oldp+397,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+399,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+401,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+403,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+405,((((QData)((IData)((1U 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s)))) 
                                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
                                             >> 1U))),64);
    bufp->fullQData(oldp+407,((((QData)((IData)((0x3fU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s)))) 
                                << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s 
                                             >> 6U))),64);
    bufp->fullQData(oldp+409,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+411,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+413,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                             >> 7U))),64);
    bufp->fullQData(oldp+415,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+417,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+419,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+421,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+423,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+425,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+427,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc),64);
    bufp->fullQData(oldp+429,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+431,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+433,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s),64);
    bufp->fullQData(oldp+435,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+437,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s),64);
    bufp->fullQData(oldp+439,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+441,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+443,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+445,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+447,((((QData)((IData)((1U 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s)))) 
                                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
                                             >> 1U))),64);
    bufp->fullQData(oldp+449,((((QData)((IData)((0x3fU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s)))) 
                                << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s 
                                             >> 6U))),64);
    bufp->fullQData(oldp+451,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+453,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+455,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                             >> 7U))),64);
    bufp->fullQData(oldp+457,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+459,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+461,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+463,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+465,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+467,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+469,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc),64);
    bufp->fullQData(oldp+471,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+473,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+475,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s),64);
    bufp->fullQData(oldp+477,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+479,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s),64);
    bufp->fullQData(oldp+481,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+483,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+485,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+487,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+489,((((QData)((IData)((1U 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s)))) 
                                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
                                             >> 1U))),64);
    bufp->fullQData(oldp+491,((((QData)((IData)((0x3fU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s)))) 
                                << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s 
                                             >> 6U))),64);
    bufp->fullQData(oldp+493,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+495,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+497,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                             >> 7U))),64);
    bufp->fullQData(oldp+499,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+501,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc),64);
    bufp->fullQData(oldp+503,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+505,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+507,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s),64);
    bufp->fullQData(oldp+509,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+511,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s),64);
    bufp->fullQData(oldp+513,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+515,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+517,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+519,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+521,((((QData)((IData)((1U 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                << 0x3fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                             >> 1U))),64);
    bufp->fullQData(oldp+523,((((QData)((IData)((0x3fU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s)))) 
                                << 0x3aU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s 
                                             >> 6U))),64);
    bufp->fullQData(oldp+525,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+527,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+529,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                             >> 7U))),64);
    bufp->fullQData(oldp+531,(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s 
                                                                        >> 0x29U))))))),64);
    bufp->fullWData(oldp+533,(vlSelfRef.test_ascon_core__DOT__data_out),128);
    bufp->fullBit(oldp+537,(vlSelfRef.test_ascon_core__DOT__done));
    bufp->fullWData(oldp+538,(vlSelfRef.test_ascon_core__DOT__tag),128);
    bufp->fullQData(oldp+542,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0),64);
    bufp->fullQData(oldp+544,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1),64);
    bufp->fullQData(oldp+546,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2),64);
    bufp->fullQData(oldp+548,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3),64);
    bufp->fullQData(oldp+550,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4),64);
    bufp->fullBit(oldp+552,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count));
    bufp->fullQData(oldp+553,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM),64);
    bufp->fullQData(oldp+555,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM),64);
    bufp->fullQData(oldp+557,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM),64);
    bufp->fullQData(oldp+559,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM),64);
    bufp->fullQData(oldp+561,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM),64);
    bufp->fullQData(oldp+563,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+565,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+567,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+569,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+571,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt),64);
    bufp->fullQData(oldp+573,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash),64);
    bufp->fullQData(oldp+575,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash),64);
    bufp->fullQData(oldp+577,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash),64);
    bufp->fullQData(oldp+579,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash),64);
    bufp->fullQData(oldp+581,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash),64);
    bufp->fullWData(oldp+583,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out),128);
    bufp->fullQData(oldp+587,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out),64);
    bufp->fullWData(oldp+589,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp),128);
    bufp->fullQData(oldp+593,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save),64);
    bufp->fullQData(oldp+595,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save),64);
    bufp->fullQData(oldp+597,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save),64);
    bufp->fullQData(oldp+599,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save),64);
    bufp->fullQData(oldp+601,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save),64);
    bufp->fullCData(oldp+603,(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state),2);
    bufp->fullBit(oldp+604,(vlSelfRef.test_ascon_core__DOT__clk));
    bufp->fullBit(oldp+605,((((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0) 
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
    bufp->fullQData(oldp+606,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12 
                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12)),64);
    bufp->fullQData(oldp+608,((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12 
                               ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12)),64);
    bufp->fullQData(oldp+610,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
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
    bufp->fullQData(oldp+612,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12
                                : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                        ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                            : 0ULL)
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                                : 0ULL)
                                            : 0ULL))))),64);
    bufp->fullQData(oldp+614,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
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
    bufp->fullQData(oldp+616,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
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
    bufp->fullQData(oldp+618,(((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
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
    bufp->fullQData(oldp+620,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
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
                                        : 0ULL)) : 
                               ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                 ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                     ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                         ? 0x1000808c0001ULL
                                         : ((1U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                             ? 0x80100cc0002ULL
                                             : ((2U 
                                                 == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                                 ? 0x80000cc0003ULL
                                                 : 0x80000cc0004ULL)))
                                     : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8
                                         : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                             ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                 ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                                 : 0ULL)
                                             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                 ? 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0
                                                  : 0ULL)
                                                 : 0ULL))))
                                 : 0ULL))),64);
    bufp->fullQData(oldp+622,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
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
                                        : 0ULL)) : 
                               ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                 ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12
                                     : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8
                                         : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                             ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                 ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                                 : 0ULL)
                                             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                 ? 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1
                                                  : 0ULL)
                                                 : 0ULL))))
                                 : 0ULL))),64);
    bufp->fullQData(oldp+624,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt
                                        : 0ULL)) : 
                               ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                 ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                     ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12
                                     : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                         ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM
                                         : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                             ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
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
                                             : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                 ? 
                                                ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2
                                                  : 0ULL)
                                                 : 0ULL))))
                                 : 0ULL))),64);
    bufp->fullQData(oldp+626,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt
                                        : 0ULL)) : 
                               ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                 ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                     ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                         ? (((QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__nonce[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__nonce[2U])))
                                         : 0ULL) : 
                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                          ? ((((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                                ? (~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)
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
                                          : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                              ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3
                                                  : 0ULL)
                                              : 0ULL))))
                                 : 0ULL))),64);
    bufp->fullQData(oldp+628,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p8)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt
                                        : 0ULL)) : 
                               ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__en_p12)
                                 ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_init)
                                     ? ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))
                                         ? (((QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__nonce[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__nonce[0U])))
                                         : 0ULL) : 
                                    ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                      ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM
                                      : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                          ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_final)
                                              ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                              : 0ULL)
                                          : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                              ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                                  ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4
                                                  : 0ULL)
                                              : 0ULL))))
                                 : 0ULL))),64);
    bufp->fullQData(oldp+630,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0)),64);
    bufp->fullQData(oldp+632,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1)),64);
    bufp->fullQData(oldp+634,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2)),64);
    bufp->fullQData(oldp+636,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
                                ? ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_AD_AM)
                                    ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM
                                    : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt)
                                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt
                                        : ((IData)(vlSelfRef.test_ascon_core__DOT__process_en_hash)
                                            ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash
                                            : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)))
                                : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3)),64);
    bufp->fullQData(oldp+638,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1)
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
    bufp->fullWData(oldp+640,(__Vtemp_12),128);
    bufp->fullQData(oldp+644,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save)),64);
    bufp->fullQData(oldp+646,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save)),64);
    bufp->fullQData(oldp+648,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save)),64);
    bufp->fullQData(oldp+650,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save)),64);
    bufp->fullQData(oldp+652,(((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__done_p)
                                ? 0ULL : vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save)),64);
}
