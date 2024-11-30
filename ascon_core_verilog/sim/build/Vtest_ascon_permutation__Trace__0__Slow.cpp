// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_ascon_permutation__Syms.h"


VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_init_sub__TOP__0(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_ascon_permutation", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+90,0,"x0_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"x1_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x2_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"x3_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"x4_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"x0_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+102,0,"x1_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"x2_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"x3_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"x4_p8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"x0_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"x1_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"x2_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"x3_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"x4_p12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1822,0,"rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11,0,"x0_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"x1_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"x2_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"x3_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"x4_cmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("calculate_permutation__Vstatic__x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+21+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("calculate_permutation__Vstatic__T", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+31+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+41,0,"calculate_permutation__Vstatic__x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+43,0,"calculate_permutation__Vstatic__x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+45,0,"calculate_permutation__Vstatic__x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+47,0,"calculate_permutation__Vstatic__x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+49,0,"calculate_permutation__Vstatic__x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+51,0,"calculate_permutation__Vstatic__x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+53,0,"calculate_permutation__Vstatic__x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+55,0,"calculate_permutation__Vstatic__x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+57,0,"calculate_permutation__Vstatic__x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+59,0,"calculate_permutation__Vstatic__x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+61,0,"calculate_permutation__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+62,0,"calculate_permutation__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("ascon_p12_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1824,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1826,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1828,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1830,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1832,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1834,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1836,0,"rc6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1838,0,"rc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1840,0,"rc8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1842,0,"rc9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1844,0,"rc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1846,0,"rc11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+120+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+142+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+164+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+186+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+208+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1824,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+230,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+232,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+63,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+70,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+72,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+74,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+240,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+242,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+76,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+252,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+254,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+256,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+258,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+260,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+262,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+264,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+266,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+268,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+270,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+272,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+278,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1826,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+230,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+232,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+280,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+282,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+284,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+286,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+288,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+230,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+232,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+290,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+292,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+294,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+296,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+298,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+300,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+302,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+304,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+306,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+308,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+310,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+312,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+314,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+316,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+318,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+310,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+320,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+322,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+324,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+326,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+328,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+330,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+332,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+334,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+336,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+338,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1844,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+340,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+342,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+344,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+346,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+348,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+350,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+352,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+354,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+356,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+358,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+340,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+342,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+360,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+346,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+348,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+362,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+364,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+366,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+368,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+370,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+372,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+374,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+376,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+378,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+380,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+382,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+384,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+386,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+388,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+380,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+390,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+392,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+394,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+396,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+398,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+400,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+402,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+404,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+406,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+408,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1846,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+350,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+352,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+354,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+356,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+358,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+350,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+352,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+410,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+356,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+358,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+412,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+414,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+416,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+418,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+420,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+422,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+424,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+426,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+428,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+430,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+432,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+434,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+436,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+438,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+430,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+440,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+442,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+444,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+446,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+448,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+450,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+452,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+454,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+456,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+458,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1828,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+280,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+282,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+284,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+286,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+288,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+460,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+462,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+464,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+466,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+468,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+280,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+282,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+470,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+286,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+288,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+472,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+474,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+476,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+478,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+480,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+482,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+484,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+486,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+488,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+490,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+492,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+494,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+496,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+498,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+490,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+500,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+502,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+504,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+506,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+508,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+510,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+512,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+514,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+516,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+518,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1830,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+460,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+462,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+464,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+466,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+468,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+520,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+522,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+524,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+526,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+528,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+460,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+462,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+530,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+466,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+468,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+532,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+534,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+536,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+538,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+540,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+542,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+544,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+546,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+548,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+550,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+552,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+554,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+556,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+558,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+550,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+560,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+562,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+566,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+568,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+570,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+572,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+574,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+576,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+578,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1832,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+520,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+522,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+524,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+526,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+528,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+580,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+582,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+584,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+586,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+588,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+520,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+522,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+590,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+526,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+528,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+592,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+594,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+596,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+598,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+600,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+602,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+604,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+606,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+608,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+610,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+612,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+614,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+616,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+618,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+610,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+620,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+622,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+624,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+626,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+628,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+630,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+632,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+634,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+636,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+638,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1834,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+580,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+582,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+584,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+586,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+588,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+640,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+642,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+644,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+646,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+648,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+580,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+582,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+650,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+586,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+588,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+652,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+654,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+656,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+658,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+660,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+662,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+664,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+666,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+668,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+670,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+672,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+674,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+676,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+678,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+670,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+680,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+682,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+684,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+686,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+688,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+690,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+692,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+694,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+696,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+698,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1836,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+640,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+642,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+644,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+646,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+648,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+700,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+702,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+704,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+706,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+708,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+640,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+642,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+710,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+646,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+648,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+712,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+714,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+716,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+718,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+720,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+722,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+724,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+726,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+728,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+730,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+732,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+734,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+736,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+738,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+730,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+740,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+742,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+744,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+746,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+748,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+750,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+752,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+754,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+756,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+758,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1838,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+700,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+702,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+704,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+706,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+708,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+760,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+762,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+764,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+766,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+768,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+700,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+702,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+770,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+706,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+708,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+772,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+774,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+776,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+778,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+780,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+782,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+784,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+786,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+788,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+790,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+792,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+794,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+796,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+798,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+790,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+800,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+802,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+804,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+806,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+808,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+810,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+812,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+814,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+816,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+818,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1840,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+760,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+762,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+764,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+766,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+768,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+820,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+822,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+824,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+826,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+828,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+760,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+762,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+830,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+766,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+768,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+832,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+834,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+836,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+838,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+840,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+842,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+844,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+846,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+848,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+850,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+852,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+854,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+856,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+858,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+850,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+860,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+862,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+864,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+866,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+868,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+870,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+872,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+874,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+876,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+878,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1842,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+820,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+822,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+824,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+826,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+828,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+340,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+342,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+344,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+346,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+348,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+820,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+822,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+880,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+826,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+828,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+882,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+884,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+886,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+888,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+890,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+892,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+894,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+896,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+898,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+900,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+902,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+904,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+906,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+908,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+900,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+910,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+912,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+914,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+916,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+918,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+920,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+922,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+924,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+926,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+928,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ascon_p6_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+90,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1836,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1838,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1840,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1842,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1844,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1846,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+930+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+940+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+950+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+960+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+970+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1836,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+980,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+982,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+984,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+986,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+65,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+70,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+78,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+80,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+240,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+242,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+988,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+82,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+990,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+992,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+994,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+996,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+998,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1000,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1002,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1004,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1006,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1008,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1010,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1012,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1014,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+278,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1838,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+980,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+982,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+984,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+986,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1016,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1018,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1020,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1022,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1024,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+980,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+982,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1026,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+986,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1028,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1030,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1032,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1034,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1036,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1038,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1040,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1042,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1044,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1046,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1048,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1050,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1052,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1054,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1046,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1056,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1058,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1060,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1062,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1064,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1066,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1068,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1070,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1072,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1074,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1840,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1016,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1018,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1020,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1022,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1024,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1076,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1078,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1080,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1082,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1084,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1016,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1018,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1086,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1022,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1024,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1088,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1090,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1092,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1094,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1096,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1098,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1100,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1102,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1104,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1106,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1108,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1110,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1112,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1114,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1106,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1116,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1118,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1120,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1122,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1124,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1126,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1128,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1130,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1132,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1134,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1842,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1076,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1078,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1080,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1082,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1084,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1136,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1138,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1140,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1142,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1144,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1076,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1078,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1146,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1082,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1084,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1148,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1150,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1152,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1154,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1156,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1158,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1160,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1162,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1164,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1166,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1168,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1170,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1172,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1174,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1166,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1176,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1178,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1180,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1182,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1184,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1186,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1188,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1190,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1192,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1194,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1844,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1136,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1138,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1140,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1142,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1144,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1196,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1198,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1200,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1202,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1204,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1136,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1138,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1206,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1142,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1144,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1208,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1210,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1212,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1214,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1216,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1218,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1220,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1222,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1224,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1226,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1228,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1230,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1232,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1234,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1226,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1236,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1238,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1240,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1242,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1244,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1246,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1248,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1250,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1252,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1254,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1846,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1196,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1198,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1200,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1202,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1204,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+90,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+92,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1196,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1198,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1256,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1202,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1204,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1258,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1260,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1262,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1264,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1266,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1268,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1270,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1272,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1274,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1276,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1278,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1280,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1282,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1284,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1276,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1286,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1288,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1290,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1292,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1294,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1296,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1298,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1300,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1302,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1304,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ascon_p8_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+102,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1832,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1834,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1836,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1838,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1840,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1842,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1844,0,"rc6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1846,0,"rc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+1306+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+1320+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+1334+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+1348+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+1362+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1832,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1376,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1378,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1380,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1382,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+67,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+70,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+240,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+242,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1386,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1388,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1390,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1392,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1394,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1396,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1398,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1400,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1402,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1404,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1406,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1408,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1410,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+278,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1834,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1376,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1378,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1380,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1382,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1412,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1414,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1416,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1418,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1420,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1376,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1378,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1422,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1382,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1424,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1426,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1428,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1430,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1432,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1434,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1436,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1438,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1440,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1442,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1444,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1446,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1448,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1450,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1442,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1452,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1454,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1456,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1458,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1460,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1462,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1464,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1466,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1468,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1470,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1836,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1412,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1414,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1416,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1418,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1420,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1472,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1474,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1476,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1478,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1480,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1412,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1414,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1482,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1418,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1420,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1484,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1486,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1488,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1490,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1492,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1494,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1496,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1498,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1500,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1502,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1504,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1506,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1508,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1510,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1502,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1512,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1514,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1516,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1518,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1520,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1522,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1524,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1526,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1528,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1530,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1838,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1472,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1474,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1476,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1478,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1480,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1532,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1534,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1536,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1538,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1540,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1472,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1474,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1542,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1478,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1480,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1544,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1546,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1548,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1550,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1552,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1554,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1556,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1558,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1560,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1562,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1564,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1566,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1568,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1570,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1562,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1572,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1574,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1576,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1578,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1580,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1582,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1584,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1586,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1588,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1590,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1840,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1532,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1534,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1536,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1538,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1540,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1592,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1594,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1596,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1598,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1600,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1532,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1534,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1602,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1538,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1540,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1604,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1606,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1608,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1610,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1612,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1614,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1616,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1618,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1620,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1622,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1624,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1626,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1628,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1630,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1622,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1632,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1634,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1636,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1638,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1640,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1642,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1644,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1646,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1648,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1650,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1842,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1592,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1594,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1596,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1598,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1600,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1652,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1654,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1656,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1658,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1660,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1592,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1594,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1662,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1598,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1600,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1664,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1666,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1668,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1670,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1672,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1674,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1676,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1678,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1680,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1682,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1684,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1686,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1688,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1690,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1682,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1692,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1694,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1696,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1698,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1700,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1702,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1704,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1706,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1708,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1710,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1844,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1652,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1654,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1656,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1658,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1660,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1712,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1714,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1716,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1718,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1720,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1652,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1654,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1722,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1658,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1660,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1724,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1726,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1728,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1730,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1732,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1734,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1736,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1738,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1740,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1742,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1744,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1746,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1748,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1750,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1742,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1752,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1754,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1756,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1758,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1760,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1762,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1764,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1766,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1768,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1770,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1846,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1712,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1714,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1716,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1718,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1720,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+102,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1848,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1712,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1714,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1772,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1718,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1720,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1774,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1776,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1778,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1780,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1782,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1784,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1786,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1788,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1790,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1792,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1794,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1796,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1798,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1800,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1792,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1802,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1804,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1806,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1808,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1810,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1812,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1814,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1816,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1818,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1820,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_init_top(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_ascon_permutation___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_ascon_permutation___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_ascon_permutation___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_register(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtest_ascon_permutation___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtest_ascon_permutation___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtest_ascon_permutation___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtest_ascon_permutation___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_const_0_sub_0(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_const_0\n"); );
    // Init
    Vtest_ascon_permutation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_permutation___024root*>(voidSelf);
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_ascon_permutation___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_const_0_sub_0(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1822,(vlSelfRef.test_ascon_permutation__DOT__rc),64);
    bufp->fullQData(oldp+1824,(0xf0ULL),64);
    bufp->fullQData(oldp+1826,(0xe1ULL),64);
    bufp->fullQData(oldp+1828,(0xd2ULL),64);
    bufp->fullQData(oldp+1830,(0xc3ULL),64);
    bufp->fullQData(oldp+1832,(0xb4ULL),64);
    bufp->fullQData(oldp+1834,(0xa5ULL),64);
    bufp->fullQData(oldp+1836,(0x96ULL),64);
    bufp->fullQData(oldp+1838,(0x87ULL),64);
    bufp->fullQData(oldp+1840,(0x78ULL),64);
    bufp->fullQData(oldp+1842,(0x69ULL),64);
    bufp->fullQData(oldp+1844,(0x5aULL),64);
    bufp->fullQData(oldp+1846,(0x4bULL),64);
    bufp->fullQData(oldp+1848,(0xffffffffffffffffULL),64);
}

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_full_0_sub_0(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_full_0\n"); );
    // Init
    Vtest_ascon_permutation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_ascon_permutation___024root*>(voidSelf);
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_ascon_permutation___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_ascon_permutation___024root__trace_full_0_sub_0(Vtest_ascon_permutation___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_permutation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_permutation___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelfRef.test_ascon_permutation__DOT__x0_i),64);
    bufp->fullQData(oldp+3,(vlSelfRef.test_ascon_permutation__DOT__x1_i),64);
    bufp->fullQData(oldp+5,(vlSelfRef.test_ascon_permutation__DOT__x2_i),64);
    bufp->fullQData(oldp+7,(vlSelfRef.test_ascon_permutation__DOT__x3_i),64);
    bufp->fullQData(oldp+9,(vlSelfRef.test_ascon_permutation__DOT__x4_i),64);
    bufp->fullQData(oldp+11,(vlSelfRef.test_ascon_permutation__DOT__x0_cmp),64);
    bufp->fullQData(oldp+13,(vlSelfRef.test_ascon_permutation__DOT__x1_cmp),64);
    bufp->fullQData(oldp+15,(vlSelfRef.test_ascon_permutation__DOT__x2_cmp),64);
    bufp->fullQData(oldp+17,(vlSelfRef.test_ascon_permutation__DOT__x3_cmp),64);
    bufp->fullQData(oldp+19,(vlSelfRef.test_ascon_permutation__DOT__x4_cmp),64);
    bufp->fullQData(oldp+21,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[0]),64);
    bufp->fullQData(oldp+23,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[1]),64);
    bufp->fullQData(oldp+25,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[2]),64);
    bufp->fullQData(oldp+27,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[3]),64);
    bufp->fullQData(oldp+29,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x[4]),64);
    bufp->fullQData(oldp+31,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[0]),64);
    bufp->fullQData(oldp+33,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[1]),64);
    bufp->fullQData(oldp+35,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[2]),64);
    bufp->fullQData(oldp+37,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[3]),64);
    bufp->fullQData(oldp+39,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__T[4]),64);
    bufp->fullQData(oldp+41,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr19),64);
    bufp->fullQData(oldp+43,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x0_sr28),64);
    bufp->fullQData(oldp+45,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr61),64);
    bufp->fullQData(oldp+47,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x1_sr39),64);
    bufp->fullQData(oldp+49,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr1),64);
    bufp->fullQData(oldp+51,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x2_sr6),64);
    bufp->fullQData(oldp+53,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr10),64);
    bufp->fullQData(oldp+55,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x3_sr17),64);
    bufp->fullQData(oldp+57,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr7),64);
    bufp->fullQData(oldp+59,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__x4_sr41),64);
    bufp->fullIData(oldp+61,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__r),32);
    bufp->fullIData(oldp+62,(vlSelfRef.test_ascon_permutation__DOT__calculate_permutation__Vstatic__i),32);
    bufp->fullQData(oldp+63,((0xf0ULL ^ vlSelfRef.test_ascon_permutation__DOT__x2_i)),64);
    bufp->fullQData(oldp+65,((0x96ULL ^ vlSelfRef.test_ascon_permutation__DOT__x2_i)),64);
    bufp->fullQData(oldp+67,((0xb4ULL ^ vlSelfRef.test_ascon_permutation__DOT__x2_i)),64);
    bufp->fullIData(oldp+69,(vlSelfRef.test_ascon_permutation__DOT__unnamedblk1__DOT__i),32);
    bufp->fullQData(oldp+70,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                              & vlSelfRef.test_ascon_permutation__DOT__x1_i)),64);
    bufp->fullQData(oldp+72,(((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
                              & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+74,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                              & vlSelfRef.test_ascon_permutation__DOT__x3_i)),64);
    bufp->fullQData(oldp+76,((vlSelfRef.test_ascon_permutation__DOT__x1_i 
                              ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_permutation__DOT__x3_i))),64);
    bufp->fullQData(oldp+78,(((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
                              & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+80,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                              & vlSelfRef.test_ascon_permutation__DOT__x3_i)),64);
    bufp->fullQData(oldp+82,((vlSelfRef.test_ascon_permutation__DOT__x1_i 
                              ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_permutation__DOT__x3_i))),64);
    bufp->fullQData(oldp+84,(((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
                              & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+86,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                              & vlSelfRef.test_ascon_permutation__DOT__x3_i)),64);
    bufp->fullQData(oldp+88,((vlSelfRef.test_ascon_permutation__DOT__x1_i 
                              ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                 & vlSelfRef.test_ascon_permutation__DOT__x3_i))),64);
    bufp->fullQData(oldp+90,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                              ^ ((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                                >> 0x13U)) 
                                 ^ (((QData)((IData)(
                                                     (0xfffffffU 
                                                      & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                     << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                                  >> 0x1cU))))),64);
    bufp->fullQData(oldp+92,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
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
    bufp->fullQData(oldp+94,(((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
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
                                     << 0x3aU) | (0x3ffffffffffffffULL 
                                                  & (~ 
                                                     ((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                                       >> 6U) 
                                                      ^ 
                                                      ((~ 
                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                                         >> 6U)) 
                                                       & (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2 
                                                          >> 6U))))))))),64);
    bufp->fullQData(oldp+96,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                              ^ ((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                                >> 0xaU)) 
                                 ^ (((QData)((IData)(
                                                     (0x1ffffU 
                                                      & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                     << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                                  >> 0x11U))))),64);
    bufp->fullQData(oldp+98,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
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
    bufp->fullQData(oldp+100,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                               ^ ((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                                 >> 0x13U)) 
                                  ^ (((QData)((IData)(
                                                      (0xfffffffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                      << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                                   >> 0x1cU))))),64);
    bufp->fullQData(oldp+102,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                               ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                  ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                      << 0x19U) | (QData)((IData)(
                                                                  (0x1ffffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                              >> 0x27U))))))))),64);
    bufp->fullQData(oldp+104,(((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))) 
                               ^ ((((QData)((IData)(
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
                                                         >> 1U)))))) 
                                  ^ (((QData)((IData)(
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
                                                           >> 6U))))))))),64);
    bufp->fullQData(oldp+106,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                               ^ ((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                                 >> 0xaU)) 
                                  ^ (((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                      << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                                   >> 0x11U))))),64);
    bufp->fullQData(oldp+108,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                               ^ ((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                 >> 7U)) 
                                  ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                      << 0x17U) | (QData)((IData)(
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                                              >> 0x29U))))))))),64);
    bufp->fullQData(oldp+110,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                               ^ ((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                    << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                                 >> 0x13U)) 
                                  ^ (((QData)((IData)(
                                                      (0xfffffffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                      << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                                   >> 0x1cU))))),64);
    bufp->fullQData(oldp+112,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                               ^ (((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                    << 3U) | (QData)((IData)(
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                         >> 0x3dU)))))) 
                                  ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                      << 0x19U) | (QData)((IData)(
                                                                  (0x1ffffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                              >> 0x27U))))))))),64);
    bufp->fullQData(oldp+114,(((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))) 
                               ^ ((((QData)((IData)(
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
                                                         >> 1U)))))) 
                                  ^ (((QData)((IData)(
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
                                                           >> 6U))))))))),64);
    bufp->fullQData(oldp+116,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                               ^ ((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                    << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                                 >> 0xaU)) 
                                  ^ (((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                      << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                                   >> 0x11U))))),64);
    bufp->fullQData(oldp+118,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                               ^ ((((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j)))) 
                                    << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                 >> 7U)) 
                                  ^ ((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                      << 0x17U) | (QData)((IData)(
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                                              >> 0x29U))))))))),64);
    bufp->fullQData(oldp+120,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[0]),64);
    bufp->fullQData(oldp+122,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[1]),64);
    bufp->fullQData(oldp+124,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[2]),64);
    bufp->fullQData(oldp+126,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[3]),64);
    bufp->fullQData(oldp+128,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[4]),64);
    bufp->fullQData(oldp+130,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[5]),64);
    bufp->fullQData(oldp+132,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[6]),64);
    bufp->fullQData(oldp+134,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[7]),64);
    bufp->fullQData(oldp+136,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[8]),64);
    bufp->fullQData(oldp+138,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[9]),64);
    bufp->fullQData(oldp+140,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x0_round[10]),64);
    bufp->fullQData(oldp+142,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[0]),64);
    bufp->fullQData(oldp+144,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[1]),64);
    bufp->fullQData(oldp+146,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[2]),64);
    bufp->fullQData(oldp+148,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[3]),64);
    bufp->fullQData(oldp+150,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[4]),64);
    bufp->fullQData(oldp+152,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[5]),64);
    bufp->fullQData(oldp+154,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[6]),64);
    bufp->fullQData(oldp+156,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[7]),64);
    bufp->fullQData(oldp+158,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[8]),64);
    bufp->fullQData(oldp+160,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[9]),64);
    bufp->fullQData(oldp+162,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x1_round[10]),64);
    bufp->fullQData(oldp+164,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[0]),64);
    bufp->fullQData(oldp+166,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[1]),64);
    bufp->fullQData(oldp+168,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[2]),64);
    bufp->fullQData(oldp+170,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[3]),64);
    bufp->fullQData(oldp+172,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[4]),64);
    bufp->fullQData(oldp+174,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[5]),64);
    bufp->fullQData(oldp+176,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[6]),64);
    bufp->fullQData(oldp+178,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[7]),64);
    bufp->fullQData(oldp+180,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[8]),64);
    bufp->fullQData(oldp+182,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[9]),64);
    bufp->fullQData(oldp+184,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x2_round[10]),64);
    bufp->fullQData(oldp+186,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[0]),64);
    bufp->fullQData(oldp+188,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[1]),64);
    bufp->fullQData(oldp+190,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[2]),64);
    bufp->fullQData(oldp+192,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[3]),64);
    bufp->fullQData(oldp+194,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[4]),64);
    bufp->fullQData(oldp+196,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[5]),64);
    bufp->fullQData(oldp+198,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[6]),64);
    bufp->fullQData(oldp+200,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[7]),64);
    bufp->fullQData(oldp+202,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[8]),64);
    bufp->fullQData(oldp+204,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[9]),64);
    bufp->fullQData(oldp+206,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x3_round[10]),64);
    bufp->fullQData(oldp+208,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[0]),64);
    bufp->fullQData(oldp+210,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[1]),64);
    bufp->fullQData(oldp+212,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[2]),64);
    bufp->fullQData(oldp+214,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[3]),64);
    bufp->fullQData(oldp+216,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[4]),64);
    bufp->fullQData(oldp+218,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[5]),64);
    bufp->fullQData(oldp+220,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[6]),64);
    bufp->fullQData(oldp+222,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[7]),64);
    bufp->fullQData(oldp+224,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[8]),64);
    bufp->fullQData(oldp+226,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[9]),64);
    bufp->fullQData(oldp+228,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__x4_round[10]),64);
    bufp->fullQData(oldp+230,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+232,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+234,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+236,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+238,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x4_rc),64);
    bufp->fullQData(oldp+240,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__d),64);
    bufp->fullQData(oldp+242,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+244,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__f),64);
    bufp->fullQData(oldp+246,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h),64);
    bufp->fullQData(oldp+248,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__i),64);
    bufp->fullQData(oldp+250,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j),64);
    bufp->fullQData(oldp+252,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+254,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+256,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h)),64);
    bufp->fullQData(oldp+258,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+260,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+262,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+264,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+266,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+268,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+270,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+272,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+274,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+276,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+278,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r0__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+280,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+282,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+284,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+286,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+288,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+290,((0xe1ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r0__x2_o)),64);
    bufp->fullQData(oldp+292,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+294,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+296,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+298,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+300,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+302,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__f),64);
    bufp->fullQData(oldp+304,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+306,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h),64);
    bufp->fullQData(oldp+308,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+310,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j),64);
    bufp->fullQData(oldp+312,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+314,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+316,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h)),64);
    bufp->fullQData(oldp+318,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+320,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+322,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+324,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+326,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+328,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+330,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+332,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+334,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+336,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+338,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r1__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+340,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_rc),64);
    bufp->fullQData(oldp+342,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc),64);
    bufp->fullQData(oldp+344,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r9__x2_o),64);
    bufp->fullQData(oldp+346,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc),64);
    bufp->fullQData(oldp+348,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x4_rc),64);
    bufp->fullQData(oldp+350,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_rc),64);
    bufp->fullQData(oldp+352,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc),64);
    bufp->fullQData(oldp+354,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r10__x2_o),64);
    bufp->fullQData(oldp+356,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc),64);
    bufp->fullQData(oldp+358,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x4_rc),64);
    bufp->fullQData(oldp+360,((0x5aULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r9__x2_o)),64);
    bufp->fullQData(oldp+362,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc)),64);
    bufp->fullQData(oldp+364,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+366,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc)),64);
    bufp->fullQData(oldp+368,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+370,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+372,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__f),64);
    bufp->fullQData(oldp+374,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc))),64);
    bufp->fullQData(oldp+376,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h),64);
    bufp->fullQData(oldp+378,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+380,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j),64);
    bufp->fullQData(oldp+382,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s),64);
    bufp->fullQData(oldp+384,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s),64);
    bufp->fullQData(oldp+386,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h)),64);
    bufp->fullQData(oldp+388,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s),64);
    bufp->fullQData(oldp+390,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+392,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+394,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+396,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+398,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+400,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+402,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+404,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+406,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+408,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r10__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+410,((0x4bULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r10__x2_o)),64);
    bufp->fullQData(oldp+412,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc)),64);
    bufp->fullQData(oldp+414,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+416,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)),64);
    bufp->fullQData(oldp+418,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+420,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+422,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__f),64);
    bufp->fullQData(oldp+424,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc))),64);
    bufp->fullQData(oldp+426,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))),64);
    bufp->fullQData(oldp+428,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+430,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j),64);
    bufp->fullQData(oldp+432,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s),64);
    bufp->fullQData(oldp+434,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s),64);
    bufp->fullQData(oldp+436,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)))),64);
    bufp->fullQData(oldp+438,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s),64);
    bufp->fullQData(oldp+440,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+442,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+444,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+446,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+448,((((QData)((IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                     ^ 
                                                     ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                      & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 1U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                      >> 1U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 1U))))))),64);
    bufp->fullQData(oldp+450,((((QData)((IData)((0x3fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                     ^ 
                                                     ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc)) 
                                                      & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 6U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_rc 
                                                      >> 6U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 6U))))))),64);
    bufp->fullQData(oldp+452,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+454,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+456,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+458,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r11__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+460,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+462,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+464,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+466,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+468,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+470,((0xd2ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+472,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+474,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+476,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+478,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+480,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+482,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__f),64);
    bufp->fullQData(oldp+484,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+486,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h),64);
    bufp->fullQData(oldp+488,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+490,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j),64);
    bufp->fullQData(oldp+492,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+494,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+496,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h)),64);
    bufp->fullQData(oldp+498,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+500,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+502,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+504,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+506,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+508,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+510,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+512,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+514,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+516,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+518,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r2__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+520,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+522,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+524,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+526,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+528,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+530,((0xc3ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+532,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+534,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+536,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+538,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+540,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+542,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__f),64);
    bufp->fullQData(oldp+544,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+546,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h),64);
    bufp->fullQData(oldp+548,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+550,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j),64);
    bufp->fullQData(oldp+552,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+554,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+556,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h)),64);
    bufp->fullQData(oldp+558,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+560,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+562,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+564,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+566,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+568,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+570,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+572,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+574,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+576,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+578,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r3__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+580,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+582,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+584,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+586,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+588,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+590,((0xb4ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+592,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+594,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+596,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+598,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+600,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+602,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__f),64);
    bufp->fullQData(oldp+604,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+606,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h),64);
    bufp->fullQData(oldp+608,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+610,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j),64);
    bufp->fullQData(oldp+612,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+614,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+616,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h)),64);
    bufp->fullQData(oldp+618,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+620,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+622,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+624,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+626,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+628,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+630,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+632,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+634,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+636,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+638,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r4__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+640,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_rc),64);
    bufp->fullQData(oldp+642,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc),64);
    bufp->fullQData(oldp+644,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r5__x2_o),64);
    bufp->fullQData(oldp+646,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc),64);
    bufp->fullQData(oldp+648,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x4_rc),64);
    bufp->fullQData(oldp+650,((0xa5ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+652,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+654,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+656,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+658,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+660,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+662,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__f),64);
    bufp->fullQData(oldp+664,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+666,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h),64);
    bufp->fullQData(oldp+668,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+670,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j),64);
    bufp->fullQData(oldp+672,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+674,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+676,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h)),64);
    bufp->fullQData(oldp+678,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+680,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+682,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+684,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+686,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+688,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+690,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+692,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+694,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+696,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+698,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r5__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+700,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_rc),64);
    bufp->fullQData(oldp+702,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc),64);
    bufp->fullQData(oldp+704,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r6__x2_o),64);
    bufp->fullQData(oldp+706,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc),64);
    bufp->fullQData(oldp+708,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x4_rc),64);
    bufp->fullQData(oldp+710,((0x96ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r5__x2_o)),64);
    bufp->fullQData(oldp+712,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc)),64);
    bufp->fullQData(oldp+714,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+716,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc)),64);
    bufp->fullQData(oldp+718,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+720,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+722,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__f),64);
    bufp->fullQData(oldp+724,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc))),64);
    bufp->fullQData(oldp+726,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h),64);
    bufp->fullQData(oldp+728,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+730,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j),64);
    bufp->fullQData(oldp+732,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s),64);
    bufp->fullQData(oldp+734,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s),64);
    bufp->fullQData(oldp+736,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h)),64);
    bufp->fullQData(oldp+738,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s),64);
    bufp->fullQData(oldp+740,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+742,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+744,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+746,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+748,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+750,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+752,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+754,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+756,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+758,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r6__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+760,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_rc),64);
    bufp->fullQData(oldp+762,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc),64);
    bufp->fullQData(oldp+764,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r7__x2_o),64);
    bufp->fullQData(oldp+766,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc),64);
    bufp->fullQData(oldp+768,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x4_rc),64);
    bufp->fullQData(oldp+770,((0x87ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r6__x2_o)),64);
    bufp->fullQData(oldp+772,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc)),64);
    bufp->fullQData(oldp+774,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+776,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc)),64);
    bufp->fullQData(oldp+778,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+780,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+782,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__f),64);
    bufp->fullQData(oldp+784,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc))),64);
    bufp->fullQData(oldp+786,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h),64);
    bufp->fullQData(oldp+788,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+790,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j),64);
    bufp->fullQData(oldp+792,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s),64);
    bufp->fullQData(oldp+794,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s),64);
    bufp->fullQData(oldp+796,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h)),64);
    bufp->fullQData(oldp+798,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s),64);
    bufp->fullQData(oldp+800,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+802,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+804,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+806,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+808,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+810,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+812,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+814,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+816,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+818,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r7__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+820,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_rc),64);
    bufp->fullQData(oldp+822,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc),64);
    bufp->fullQData(oldp+824,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r8__x2_o),64);
    bufp->fullQData(oldp+826,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc),64);
    bufp->fullQData(oldp+828,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x4_rc),64);
    bufp->fullQData(oldp+830,((0x78ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r7__x2_o)),64);
    bufp->fullQData(oldp+832,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc)),64);
    bufp->fullQData(oldp+834,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+836,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc)),64);
    bufp->fullQData(oldp+838,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+840,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+842,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__f),64);
    bufp->fullQData(oldp+844,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc))),64);
    bufp->fullQData(oldp+846,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h),64);
    bufp->fullQData(oldp+848,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+850,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j),64);
    bufp->fullQData(oldp+852,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s),64);
    bufp->fullQData(oldp+854,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s),64);
    bufp->fullQData(oldp+856,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h)),64);
    bufp->fullQData(oldp+858,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s),64);
    bufp->fullQData(oldp+860,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+862,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+864,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+866,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+868,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+870,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+872,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+874,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+876,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+878,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r8__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+880,((0x69ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT____Vcellout__r8__x2_o)),64);
    bufp->fullQData(oldp+882,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc)),64);
    bufp->fullQData(oldp+884,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+886,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc)),64);
    bufp->fullQData(oldp+888,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+890,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+892,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__f),64);
    bufp->fullQData(oldp+894,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc))),64);
    bufp->fullQData(oldp+896,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h),64);
    bufp->fullQData(oldp+898,((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+900,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j),64);
    bufp->fullQData(oldp+902,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s),64);
    bufp->fullQData(oldp+904,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s),64);
    bufp->fullQData(oldp+906,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h)),64);
    bufp->fullQData(oldp+908,(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s),64);
    bufp->fullQData(oldp+910,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+912,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+914,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+916,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+918,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+920,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+922,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+924,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+926,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+928,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p12_dut__DOT__r9__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+930,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[0]),64);
    bufp->fullQData(oldp+932,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[1]),64);
    bufp->fullQData(oldp+934,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[2]),64);
    bufp->fullQData(oldp+936,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[3]),64);
    bufp->fullQData(oldp+938,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x0_round[4]),64);
    bufp->fullQData(oldp+940,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[0]),64);
    bufp->fullQData(oldp+942,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[1]),64);
    bufp->fullQData(oldp+944,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[2]),64);
    bufp->fullQData(oldp+946,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[3]),64);
    bufp->fullQData(oldp+948,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x1_round[4]),64);
    bufp->fullQData(oldp+950,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[0]),64);
    bufp->fullQData(oldp+952,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[1]),64);
    bufp->fullQData(oldp+954,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[2]),64);
    bufp->fullQData(oldp+956,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[3]),64);
    bufp->fullQData(oldp+958,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x2_round[4]),64);
    bufp->fullQData(oldp+960,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[0]),64);
    bufp->fullQData(oldp+962,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[1]),64);
    bufp->fullQData(oldp+964,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[2]),64);
    bufp->fullQData(oldp+966,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[3]),64);
    bufp->fullQData(oldp+968,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x3_round[4]),64);
    bufp->fullQData(oldp+970,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[0]),64);
    bufp->fullQData(oldp+972,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[1]),64);
    bufp->fullQData(oldp+974,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[2]),64);
    bufp->fullQData(oldp+976,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[3]),64);
    bufp->fullQData(oldp+978,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__x4_round[4]),64);
    bufp->fullQData(oldp+980,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+982,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+984,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+986,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+988,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__f),64);
    bufp->fullQData(oldp+990,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h),64);
    bufp->fullQData(oldp+992,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+994,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+996,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h)),64);
    bufp->fullQData(oldp+998,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+1000,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1002,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1004,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1006,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1008,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1010,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1012,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1014,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r0__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1016,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+1018,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+1020,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+1022,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+1024,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+1026,((0x87ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r0__x2_o)),64);
    bufp->fullQData(oldp+1028,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1030,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1032,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1034,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1036,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1038,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__f),64);
    bufp->fullQData(oldp+1040,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1042,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h),64);
    bufp->fullQData(oldp+1044,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1046,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j),64);
    bufp->fullQData(oldp+1048,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+1050,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+1052,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h)),64);
    bufp->fullQData(oldp+1054,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+1056,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1058,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1060,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1062,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1064,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1066,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1068,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1070,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1072,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1074,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r1__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1076,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+1078,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+1080,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+1082,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+1084,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+1086,((0x78ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+1088,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1090,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1092,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1094,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1096,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1098,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__f),64);
    bufp->fullQData(oldp+1100,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1102,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h),64);
    bufp->fullQData(oldp+1104,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1106,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j),64);
    bufp->fullQData(oldp+1108,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+1110,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+1112,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h)),64);
    bufp->fullQData(oldp+1114,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+1116,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1118,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1120,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1122,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1124,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1126,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1128,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1130,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1132,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1134,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r2__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1136,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+1138,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+1140,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+1142,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+1144,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+1146,((0x69ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+1148,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1150,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1152,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1154,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1156,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1158,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__f),64);
    bufp->fullQData(oldp+1160,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1162,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h),64);
    bufp->fullQData(oldp+1164,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1166,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j),64);
    bufp->fullQData(oldp+1168,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+1170,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+1172,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h)),64);
    bufp->fullQData(oldp+1174,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+1176,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1178,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1180,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1182,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1184,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1186,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1188,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1190,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1192,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1194,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r3__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1196,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+1198,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+1200,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+1202,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+1204,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+1206,((0x5aULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+1208,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1210,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1212,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1214,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1216,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1218,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__f),64);
    bufp->fullQData(oldp+1220,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1222,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h),64);
    bufp->fullQData(oldp+1224,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1226,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j),64);
    bufp->fullQData(oldp+1228,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+1230,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+1232,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h)),64);
    bufp->fullQData(oldp+1234,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+1236,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1238,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1240,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1242,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1244,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1246,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1248,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1250,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1252,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1254,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r4__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1256,((0x4bULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT____Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+1258,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1260,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1262,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1264,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1266,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1268,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__f),64);
    bufp->fullQData(oldp+1270,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1272,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2))),64);
    bufp->fullQData(oldp+1274,((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1276,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j),64);
    bufp->fullQData(oldp+1278,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+1280,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+1282,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_rc) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)))),64);
    bufp->fullQData(oldp+1284,(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+1286,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1288,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1290,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1292,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1294,((((QData)((IData)((1U 
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
    bufp->fullQData(oldp+1296,((((QData)((IData)((0x3fU 
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
    bufp->fullQData(oldp+1298,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1300,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1302,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1304,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p6_dut__DOT__r5__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1306,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[0]),64);
    bufp->fullQData(oldp+1308,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[1]),64);
    bufp->fullQData(oldp+1310,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[2]),64);
    bufp->fullQData(oldp+1312,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[3]),64);
    bufp->fullQData(oldp+1314,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[4]),64);
    bufp->fullQData(oldp+1316,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[5]),64);
    bufp->fullQData(oldp+1318,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x0_round[6]),64);
    bufp->fullQData(oldp+1320,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[0]),64);
    bufp->fullQData(oldp+1322,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[1]),64);
    bufp->fullQData(oldp+1324,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[2]),64);
    bufp->fullQData(oldp+1326,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[3]),64);
    bufp->fullQData(oldp+1328,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[4]),64);
    bufp->fullQData(oldp+1330,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[5]),64);
    bufp->fullQData(oldp+1332,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x1_round[6]),64);
    bufp->fullQData(oldp+1334,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[0]),64);
    bufp->fullQData(oldp+1336,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[1]),64);
    bufp->fullQData(oldp+1338,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[2]),64);
    bufp->fullQData(oldp+1340,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[3]),64);
    bufp->fullQData(oldp+1342,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[4]),64);
    bufp->fullQData(oldp+1344,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[5]),64);
    bufp->fullQData(oldp+1346,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x2_round[6]),64);
    bufp->fullQData(oldp+1348,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[0]),64);
    bufp->fullQData(oldp+1350,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[1]),64);
    bufp->fullQData(oldp+1352,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[2]),64);
    bufp->fullQData(oldp+1354,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[3]),64);
    bufp->fullQData(oldp+1356,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[4]),64);
    bufp->fullQData(oldp+1358,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[5]),64);
    bufp->fullQData(oldp+1360,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x3_round[6]),64);
    bufp->fullQData(oldp+1362,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[0]),64);
    bufp->fullQData(oldp+1364,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[1]),64);
    bufp->fullQData(oldp+1366,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[2]),64);
    bufp->fullQData(oldp+1368,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[3]),64);
    bufp->fullQData(oldp+1370,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[4]),64);
    bufp->fullQData(oldp+1372,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[5]),64);
    bufp->fullQData(oldp+1374,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__x4_round[6]),64);
    bufp->fullQData(oldp+1376,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+1378,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+1380,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+1382,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+1384,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__f),64);
    bufp->fullQData(oldp+1386,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h),64);
    bufp->fullQData(oldp+1388,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+1390,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+1392,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h)),64);
    bufp->fullQData(oldp+1394,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+1396,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1398,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1400,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1402,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1404,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1406,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1408,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1410,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r0__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1412,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+1414,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+1416,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+1418,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+1420,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+1422,((0xa5ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r0__x2_o)),64);
    bufp->fullQData(oldp+1424,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1426,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1428,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1430,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1432,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1434,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__f),64);
    bufp->fullQData(oldp+1436,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1438,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h),64);
    bufp->fullQData(oldp+1440,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1442,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j),64);
    bufp->fullQData(oldp+1444,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+1446,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+1448,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h)),64);
    bufp->fullQData(oldp+1450,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+1452,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1454,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1456,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1458,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1460,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1462,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1464,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1466,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1468,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1470,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r1__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1472,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+1474,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+1476,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+1478,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+1480,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+1482,((0x96ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+1484,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1486,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1488,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1490,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1492,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1494,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__f),64);
    bufp->fullQData(oldp+1496,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1498,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h),64);
    bufp->fullQData(oldp+1500,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1502,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j),64);
    bufp->fullQData(oldp+1504,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+1506,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+1508,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h)),64);
    bufp->fullQData(oldp+1510,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+1512,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1514,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1516,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1518,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1520,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1522,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1524,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1526,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1528,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1530,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r2__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1532,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+1534,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+1536,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+1538,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+1540,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+1542,((0x87ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+1544,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1546,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1548,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1550,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1552,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1554,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__f),64);
    bufp->fullQData(oldp+1556,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1558,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h),64);
    bufp->fullQData(oldp+1560,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1562,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j),64);
    bufp->fullQData(oldp+1564,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+1566,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+1568,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h)),64);
    bufp->fullQData(oldp+1570,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+1572,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1574,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1576,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1578,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1580,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1582,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1584,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1586,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1588,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1590,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r3__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1592,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+1594,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+1596,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+1598,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+1600,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+1602,((0x78ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+1604,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1606,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1608,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1610,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1612,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1614,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__f),64);
    bufp->fullQData(oldp+1616,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1618,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h),64);
    bufp->fullQData(oldp+1620,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1622,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j),64);
    bufp->fullQData(oldp+1624,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+1626,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+1628,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h)),64);
    bufp->fullQData(oldp+1630,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+1632,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1634,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1636,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1638,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1640,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1642,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1644,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1646,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1648,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1650,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r4__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1652,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_rc),64);
    bufp->fullQData(oldp+1654,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc),64);
    bufp->fullQData(oldp+1656,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r5__x2_o),64);
    bufp->fullQData(oldp+1658,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc),64);
    bufp->fullQData(oldp+1660,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x4_rc),64);
    bufp->fullQData(oldp+1662,((0x69ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+1664,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1666,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1668,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1670,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1672,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1674,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__f),64);
    bufp->fullQData(oldp+1676,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1678,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h),64);
    bufp->fullQData(oldp+1680,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1682,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j),64);
    bufp->fullQData(oldp+1684,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+1686,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+1688,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h)),64);
    bufp->fullQData(oldp+1690,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+1692,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1694,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1696,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1698,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1700,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1702,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1704,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1706,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1708,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1710,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r5__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1712,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_rc),64);
    bufp->fullQData(oldp+1714,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc),64);
    bufp->fullQData(oldp+1716,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r6__x2_o),64);
    bufp->fullQData(oldp+1718,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc),64);
    bufp->fullQData(oldp+1720,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x4_rc),64);
    bufp->fullQData(oldp+1722,((0x5aULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r5__x2_o)),64);
    bufp->fullQData(oldp+1724,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1726,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1728,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1730,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1732,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1734,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__f),64);
    bufp->fullQData(oldp+1736,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1738,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h),64);
    bufp->fullQData(oldp+1740,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1742,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j),64);
    bufp->fullQData(oldp+1744,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s),64);
    bufp->fullQData(oldp+1746,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s),64);
    bufp->fullQData(oldp+1748,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h)),64);
    bufp->fullQData(oldp+1750,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s),64);
    bufp->fullQData(oldp+1752,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1754,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1756,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1758,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1760,((((QData)((IData)((1U 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h))))) 
                                 << 0x3fU) | (0x7fffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h 
                                                  >> 1U))))),64);
    bufp->fullQData(oldp+1762,((((QData)((IData)((0x3fU 
                                                  & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h))))) 
                                 << 0x3aU) | (0x3ffffffffffffffULL 
                                              & (~ 
                                                 (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__h 
                                                  >> 6U))))),64);
    bufp->fullQData(oldp+1764,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1766,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1768,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1770,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r6__DOT__j 
                                                                         >> 0x29U))))))),64);
    bufp->fullQData(oldp+1772,((0x4bULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT____Vcellout__r6__x2_o)),64);
    bufp->fullQData(oldp+1774,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc)),64);
    bufp->fullQData(oldp+1776,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+1778,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc)),64);
    bufp->fullQData(oldp+1780,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+1782,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+1784,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__f),64);
    bufp->fullQData(oldp+1786,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc))),64);
    bufp->fullQData(oldp+1788,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2))),64);
    bufp->fullQData(oldp+1790,((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc 
                                ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                   & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+1792,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j),64);
    bufp->fullQData(oldp+1794,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s),64);
    bufp->fullQData(oldp+1796,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s),64);
    bufp->fullQData(oldp+1798,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1 
                                   ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_rc) 
                                      & vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)))),64);
    bufp->fullQData(oldp+1800,(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s),64);
    bufp->fullQData(oldp+1802,((((QData)((IData)((0x7ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                 << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                              >> 0x13U))),64);
    bufp->fullQData(oldp+1804,((((QData)((IData)((0xfffffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s)))) 
                                 << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x0_s 
                                              >> 0x1cU))),64);
    bufp->fullQData(oldp+1806,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                      >> 0x3dU))))))),64);
    bufp->fullQData(oldp+1808,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                 << 0x19U) | (QData)((IData)(
                                                             (0x1ffffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x1_s 
                                                                         >> 0x27U))))))),64);
    bufp->fullQData(oldp+1810,((((QData)((IData)((1U 
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
    bufp->fullQData(oldp+1812,((((QData)((IData)((0x3fU 
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
    bufp->fullQData(oldp+1814,((((QData)((IData)((0x3ffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                 << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                              >> 0xaU))),64);
    bufp->fullQData(oldp+1816,((((QData)((IData)((0x1ffffU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s)))) 
                                 << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__x3_s 
                                              >> 0x11U))),64);
    bufp->fullQData(oldp+1818,((((QData)((IData)((0x7fU 
                                                  & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j)))) 
                                 << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                              >> 7U))),64);
    bufp->fullQData(oldp+1820,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                 << 0x17U) | (QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p8_dut__DOT__r7__DOT__j 
                                                                         >> 0x29U))))))),64);
}
