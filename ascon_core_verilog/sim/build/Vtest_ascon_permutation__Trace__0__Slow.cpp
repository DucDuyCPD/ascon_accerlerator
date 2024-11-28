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
    tracep->declQuad(c+15,0,"x0_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"x1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"x2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"x3_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"x4_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11,0,"rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ascon_p_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+843,0,"rc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+845,0,"rc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+847,0,"rc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+849,0,"rc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+851,0,"rc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+853,0,"rc5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+855,0,"rc6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+857,0,"rc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+859,0,"rc8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+861,0,"rc9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+863,0,"rc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+865,0,"rc11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("x0_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+25+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x1_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+47+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x2_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+69+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x3_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+91+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("x4_round", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+113+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+843,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+135,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+137,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+139,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+141,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+143,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+831,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+833,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+835,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+837,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+145,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+147,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+839,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+149,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+841,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+151,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+153,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+155,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+157,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+159,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+151,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+161,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+163,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+165,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+167,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+169,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+171,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+173,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+175,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+177,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+179,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+845,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+135,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+137,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+139,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+141,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+143,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+181,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+183,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+185,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+187,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+189,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+135,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+137,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+191,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+141,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+143,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+193,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+195,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+197,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+199,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+201,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+203,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+205,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+207,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+209,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+211,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+213,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+215,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+217,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+219,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+211,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+221,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+223,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+225,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+227,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+229,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+231,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+233,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+235,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+237,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+239,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+863,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+241,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+243,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+245,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+247,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+249,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+251,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+253,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+255,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+257,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+259,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+241,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+243,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+261,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+247,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+249,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+263,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+265,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+267,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+269,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+271,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+273,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+275,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+277,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+279,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+281,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+283,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+285,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+287,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+289,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+281,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+291,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+293,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+295,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+297,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+299,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+301,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+303,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+305,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+307,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+309,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+865,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+251,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+253,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+255,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+257,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+259,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+251,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+253,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+311,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+257,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+259,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+313,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+315,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+317,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+319,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+321,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+323,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+325,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+327,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+331,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+333,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+335,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+337,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+339,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+331,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+341,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+343,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+345,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+347,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+349,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+351,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+353,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+355,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+357,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+359,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+847,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+181,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+183,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+185,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+187,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+189,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+361,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+363,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+365,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+367,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+369,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+181,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+183,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+371,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+187,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+189,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+373,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+375,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+377,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+379,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+381,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+383,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+385,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+387,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+389,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+391,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+393,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+395,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+397,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+399,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+391,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+401,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+403,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+405,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+407,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+409,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+411,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+413,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+415,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+417,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+419,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+849,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+361,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+363,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+365,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+367,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+369,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+421,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+423,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+425,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+427,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+429,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+361,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+363,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+431,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+367,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+369,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+433,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+435,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+437,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+439,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+441,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+443,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+445,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+447,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+449,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+451,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+453,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+455,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+457,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+459,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+451,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+461,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+463,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+465,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+467,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+469,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+471,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+473,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+475,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+477,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+479,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+851,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+421,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+423,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+425,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+427,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+429,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+481,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+483,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+485,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+487,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+489,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+421,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+423,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+491,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+427,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+429,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+493,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+495,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+497,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+499,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+501,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+503,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+505,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+507,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+509,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+511,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+513,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+515,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+517,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+519,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+511,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+521,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+523,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+525,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+527,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+529,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+531,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+533,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+535,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+537,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+539,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+853,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+481,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+483,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+485,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+487,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+489,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+541,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+543,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+545,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+547,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+549,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+481,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+483,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+551,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+487,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+489,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+553,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+555,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+557,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+559,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+561,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+563,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+565,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+567,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+569,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+571,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+573,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+575,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+577,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+579,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+571,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+581,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+583,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+585,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+587,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+589,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+591,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+593,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+595,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+597,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+599,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+855,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+541,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+543,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+545,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+547,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+549,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+601,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+603,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+605,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+607,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+609,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+541,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+543,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+611,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+547,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+549,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+613,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+615,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+617,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+619,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+621,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+623,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+625,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+627,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+629,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+631,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+633,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+635,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+637,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+639,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+631,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+641,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+643,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+645,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+647,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+649,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+651,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+653,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+655,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+657,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+659,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+857,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+601,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+603,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+605,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+607,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+609,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+661,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+663,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+665,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+667,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+669,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+601,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+603,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+671,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+607,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+609,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+673,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+675,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+677,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+679,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+681,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+683,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+685,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+687,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+689,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+691,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+693,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+695,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+697,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+699,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+691,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+701,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+703,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+705,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+707,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+709,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+711,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+713,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+715,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+717,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+719,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+859,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+661,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+663,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+665,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+667,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+669,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+721,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+723,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+725,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+727,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+729,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+661,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+663,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+731,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+667,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+669,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+733,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+735,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+737,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+739,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+741,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+743,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+745,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+747,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+749,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+751,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+753,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+755,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+757,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+759,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+751,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+761,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+763,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+765,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+767,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+769,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+771,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+773,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+775,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+777,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+779,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("r9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+861,0,"round_const",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+721,0,"x0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+723,0,"x1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+725,0,"x2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+727,0,"x3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+729,0,"x4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+241,0,"x0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+243,0,"x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+245,0,"x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+247,0,"x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+249,0,"x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+721,0,"x0_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+723,0,"x1_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+781,0,"x2_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+727,0,"x3_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+729,0,"x4_rc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+783,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+785,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+787,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+789,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+791,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+793,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+795,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+797,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+799,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+801,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+803,0,"x0_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+805,0,"x1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+807,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+809,0,"x3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+801,0,"x4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+811,0,"x0_sr19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+813,0,"x0_sr28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+815,0,"x1_sr61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+817,0,"x1_sr39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+819,0,"x2_sr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+821,0,"x2_sr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+823,0,"x3_sr10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+825,0,"x3_sr17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+827,0,"x4_sr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+829,0,"x4_sr41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
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
    bufp->fullQData(oldp+843,(0xf0ULL),64);
    bufp->fullQData(oldp+845,(0xe1ULL),64);
    bufp->fullQData(oldp+847,(0xd2ULL),64);
    bufp->fullQData(oldp+849,(0xc3ULL),64);
    bufp->fullQData(oldp+851,(0xb4ULL),64);
    bufp->fullQData(oldp+853,(0xa5ULL),64);
    bufp->fullQData(oldp+855,(0x96ULL),64);
    bufp->fullQData(oldp+857,(0x87ULL),64);
    bufp->fullQData(oldp+859,(0x78ULL),64);
    bufp->fullQData(oldp+861,(0x69ULL),64);
    bufp->fullQData(oldp+863,(0x5aULL),64);
    bufp->fullQData(oldp+865,(0x4bULL),64);
    bufp->fullQData(oldp+867,(0xffffffffffffffffULL),64);
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
    bufp->fullQData(oldp+11,(vlSelfRef.test_ascon_permutation__DOT__rc),64);
    bufp->fullQData(oldp+13,((0xf0ULL ^ vlSelfRef.test_ascon_permutation__DOT__x2_i)),64);
    bufp->fullQData(oldp+15,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                              ^ ((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s)))) 
                                   << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                                >> 0x13U)) 
                                 ^ (((QData)((IData)(
                                                     (0xfffffffU 
                                                      & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s)))) 
                                     << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                                  >> 0x1cU))))),64);
    bufp->fullQData(oldp+17,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
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
    bufp->fullQData(oldp+19,(((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
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
                                     << 0x3aU) | (0x3ffffffffffffffULL 
                                                  & (~ 
                                                     ((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                       >> 6U) 
                                                      ^ 
                                                      ((~ 
                                                        (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                                                         >> 6U)) 
                                                       & (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                          >> 6U))))))))),64);
    bufp->fullQData(oldp+21,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                              ^ ((((QData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s)))) 
                                   << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                                >> 0xaU)) 
                                 ^ (((QData)((IData)(
                                                     (0x1ffffU 
                                                      & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s)))) 
                                     << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                                  >> 0x11U))))),64);
    bufp->fullQData(oldp+23,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
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
    bufp->fullQData(oldp+25,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[0]),64);
    bufp->fullQData(oldp+27,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[1]),64);
    bufp->fullQData(oldp+29,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[2]),64);
    bufp->fullQData(oldp+31,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[3]),64);
    bufp->fullQData(oldp+33,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[4]),64);
    bufp->fullQData(oldp+35,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[5]),64);
    bufp->fullQData(oldp+37,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[6]),64);
    bufp->fullQData(oldp+39,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[7]),64);
    bufp->fullQData(oldp+41,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[8]),64);
    bufp->fullQData(oldp+43,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[9]),64);
    bufp->fullQData(oldp+45,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round[10]),64);
    bufp->fullQData(oldp+47,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[0]),64);
    bufp->fullQData(oldp+49,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[1]),64);
    bufp->fullQData(oldp+51,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[2]),64);
    bufp->fullQData(oldp+53,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[3]),64);
    bufp->fullQData(oldp+55,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[4]),64);
    bufp->fullQData(oldp+57,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[5]),64);
    bufp->fullQData(oldp+59,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[6]),64);
    bufp->fullQData(oldp+61,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[7]),64);
    bufp->fullQData(oldp+63,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[8]),64);
    bufp->fullQData(oldp+65,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[9]),64);
    bufp->fullQData(oldp+67,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round[10]),64);
    bufp->fullQData(oldp+69,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[0]),64);
    bufp->fullQData(oldp+71,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[1]),64);
    bufp->fullQData(oldp+73,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[2]),64);
    bufp->fullQData(oldp+75,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[3]),64);
    bufp->fullQData(oldp+77,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[4]),64);
    bufp->fullQData(oldp+79,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[5]),64);
    bufp->fullQData(oldp+81,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[6]),64);
    bufp->fullQData(oldp+83,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[7]),64);
    bufp->fullQData(oldp+85,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[8]),64);
    bufp->fullQData(oldp+87,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[9]),64);
    bufp->fullQData(oldp+89,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round[10]),64);
    bufp->fullQData(oldp+91,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[0]),64);
    bufp->fullQData(oldp+93,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[1]),64);
    bufp->fullQData(oldp+95,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[2]),64);
    bufp->fullQData(oldp+97,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[3]),64);
    bufp->fullQData(oldp+99,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[4]),64);
    bufp->fullQData(oldp+101,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[5]),64);
    bufp->fullQData(oldp+103,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[6]),64);
    bufp->fullQData(oldp+105,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[7]),64);
    bufp->fullQData(oldp+107,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[8]),64);
    bufp->fullQData(oldp+109,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[9]),64);
    bufp->fullQData(oldp+111,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round[10]),64);
    bufp->fullQData(oldp+113,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[0]),64);
    bufp->fullQData(oldp+115,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[1]),64);
    bufp->fullQData(oldp+117,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[2]),64);
    bufp->fullQData(oldp+119,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[3]),64);
    bufp->fullQData(oldp+121,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[4]),64);
    bufp->fullQData(oldp+123,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[5]),64);
    bufp->fullQData(oldp+125,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[6]),64);
    bufp->fullQData(oldp+127,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[7]),64);
    bufp->fullQData(oldp+129,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[8]),64);
    bufp->fullQData(oldp+131,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[9]),64);
    bufp->fullQData(oldp+133,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round[10]),64);
    bufp->fullQData(oldp+135,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_rc),64);
    bufp->fullQData(oldp+137,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc),64);
    bufp->fullQData(oldp+139,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r0__x2_o),64);
    bufp->fullQData(oldp+141,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc),64);
    bufp->fullQData(oldp+143,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x4_rc),64);
    bufp->fullQData(oldp+145,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+147,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__f),64);
    bufp->fullQData(oldp+149,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h),64);
    bufp->fullQData(oldp+151,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j),64);
    bufp->fullQData(oldp+153,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s),64);
    bufp->fullQData(oldp+155,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s),64);
    bufp->fullQData(oldp+157,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h)),64);
    bufp->fullQData(oldp+159,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s),64);
    bufp->fullQData(oldp+161,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+163,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+165,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+167,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+169,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+171,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+173,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+175,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+177,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+179,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+181,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_rc),64);
    bufp->fullQData(oldp+183,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc),64);
    bufp->fullQData(oldp+185,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r1__x2_o),64);
    bufp->fullQData(oldp+187,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc),64);
    bufp->fullQData(oldp+189,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x4_rc),64);
    bufp->fullQData(oldp+191,((0xe1ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r0__x2_o)),64);
    bufp->fullQData(oldp+193,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc)),64);
    bufp->fullQData(oldp+195,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+197,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc)),64);
    bufp->fullQData(oldp+199,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+201,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+203,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__f),64);
    bufp->fullQData(oldp+205,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc))),64);
    bufp->fullQData(oldp+207,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h),64);
    bufp->fullQData(oldp+209,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+211,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j),64);
    bufp->fullQData(oldp+213,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s),64);
    bufp->fullQData(oldp+215,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s),64);
    bufp->fullQData(oldp+217,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h)),64);
    bufp->fullQData(oldp+219,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s),64);
    bufp->fullQData(oldp+221,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+223,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+225,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+227,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+229,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+231,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+233,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+235,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+237,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+239,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+241,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_rc),64);
    bufp->fullQData(oldp+243,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc),64);
    bufp->fullQData(oldp+245,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r9__x2_o),64);
    bufp->fullQData(oldp+247,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc),64);
    bufp->fullQData(oldp+249,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x4_rc),64);
    bufp->fullQData(oldp+251,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_rc),64);
    bufp->fullQData(oldp+253,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc),64);
    bufp->fullQData(oldp+255,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r10__x2_o),64);
    bufp->fullQData(oldp+257,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc),64);
    bufp->fullQData(oldp+259,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x4_rc),64);
    bufp->fullQData(oldp+261,((0x5aULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r9__x2_o)),64);
    bufp->fullQData(oldp+263,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc)),64);
    bufp->fullQData(oldp+265,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+267,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc)),64);
    bufp->fullQData(oldp+269,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+271,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+273,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__f),64);
    bufp->fullQData(oldp+275,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc))),64);
    bufp->fullQData(oldp+277,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h),64);
    bufp->fullQData(oldp+279,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+281,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j),64);
    bufp->fullQData(oldp+283,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s),64);
    bufp->fullQData(oldp+285,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s),64);
    bufp->fullQData(oldp+287,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h)),64);
    bufp->fullQData(oldp+289,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s),64);
    bufp->fullQData(oldp+291,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+293,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+295,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+297,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+299,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+301,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+303,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+305,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+307,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+309,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+311,((0x4bULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r10__x2_o)),64);
    bufp->fullQData(oldp+313,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc)),64);
    bufp->fullQData(oldp+315,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+317,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc)),64);
    bufp->fullQData(oldp+319,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+321,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+323,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__f),64);
    bufp->fullQData(oldp+325,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc))),64);
    bufp->fullQData(oldp+327,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))),64);
    bufp->fullQData(oldp+329,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+331,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j),64);
    bufp->fullQData(oldp+333,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s),64);
    bufp->fullQData(oldp+335,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s),64);
    bufp->fullQData(oldp+337,((~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                  ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc) 
                                     & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2)))),64);
    bufp->fullQData(oldp+339,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s),64);
    bufp->fullQData(oldp+341,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+343,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+345,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+347,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+349,((((QData)((IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                     ^ 
                                                     ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc)) 
                                                      & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 1U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                                                      >> 1U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 1U))))))),64);
    bufp->fullQData(oldp+351,((((QData)((IData)((0x3fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1) 
                                                     ^ 
                                                     ((~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc)) 
                                                      & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2))))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (
                                                   (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1 
                                                    >> 6U) 
                                                   ^ 
                                                   ((~ 
                                                     (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc 
                                                      >> 6U)) 
                                                    & (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2 
                                                       >> 6U))))))),64);
    bufp->fullQData(oldp+353,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+355,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+357,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+359,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+361,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_rc),64);
    bufp->fullQData(oldp+363,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc),64);
    bufp->fullQData(oldp+365,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r2__x2_o),64);
    bufp->fullQData(oldp+367,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc),64);
    bufp->fullQData(oldp+369,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x4_rc),64);
    bufp->fullQData(oldp+371,((0xd2ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r1__x2_o)),64);
    bufp->fullQData(oldp+373,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc)),64);
    bufp->fullQData(oldp+375,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+377,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc)),64);
    bufp->fullQData(oldp+379,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+381,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+383,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__f),64);
    bufp->fullQData(oldp+385,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc))),64);
    bufp->fullQData(oldp+387,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h),64);
    bufp->fullQData(oldp+389,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+391,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j),64);
    bufp->fullQData(oldp+393,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s),64);
    bufp->fullQData(oldp+395,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s),64);
    bufp->fullQData(oldp+397,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h)),64);
    bufp->fullQData(oldp+399,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s),64);
    bufp->fullQData(oldp+401,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+403,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+405,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+407,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+409,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+411,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+413,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+415,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+417,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+419,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+421,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_rc),64);
    bufp->fullQData(oldp+423,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc),64);
    bufp->fullQData(oldp+425,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r3__x2_o),64);
    bufp->fullQData(oldp+427,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc),64);
    bufp->fullQData(oldp+429,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x4_rc),64);
    bufp->fullQData(oldp+431,((0xc3ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r2__x2_o)),64);
    bufp->fullQData(oldp+433,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc)),64);
    bufp->fullQData(oldp+435,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+437,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc)),64);
    bufp->fullQData(oldp+439,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+441,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+443,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__f),64);
    bufp->fullQData(oldp+445,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc))),64);
    bufp->fullQData(oldp+447,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h),64);
    bufp->fullQData(oldp+449,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+451,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j),64);
    bufp->fullQData(oldp+453,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s),64);
    bufp->fullQData(oldp+455,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s),64);
    bufp->fullQData(oldp+457,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h)),64);
    bufp->fullQData(oldp+459,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s),64);
    bufp->fullQData(oldp+461,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+463,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+465,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+467,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+469,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+471,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+473,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+475,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+477,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+479,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+481,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_rc),64);
    bufp->fullQData(oldp+483,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc),64);
    bufp->fullQData(oldp+485,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r4__x2_o),64);
    bufp->fullQData(oldp+487,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc),64);
    bufp->fullQData(oldp+489,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x4_rc),64);
    bufp->fullQData(oldp+491,((0xb4ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r3__x2_o)),64);
    bufp->fullQData(oldp+493,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc)),64);
    bufp->fullQData(oldp+495,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+497,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc)),64);
    bufp->fullQData(oldp+499,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+501,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+503,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__f),64);
    bufp->fullQData(oldp+505,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc))),64);
    bufp->fullQData(oldp+507,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h),64);
    bufp->fullQData(oldp+509,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+511,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j),64);
    bufp->fullQData(oldp+513,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s),64);
    bufp->fullQData(oldp+515,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s),64);
    bufp->fullQData(oldp+517,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h)),64);
    bufp->fullQData(oldp+519,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s),64);
    bufp->fullQData(oldp+521,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+523,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+525,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+527,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+529,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+531,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+533,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+535,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+537,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+539,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+541,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_rc),64);
    bufp->fullQData(oldp+543,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc),64);
    bufp->fullQData(oldp+545,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r5__x2_o),64);
    bufp->fullQData(oldp+547,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc),64);
    bufp->fullQData(oldp+549,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x4_rc),64);
    bufp->fullQData(oldp+551,((0xa5ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r4__x2_o)),64);
    bufp->fullQData(oldp+553,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc)),64);
    bufp->fullQData(oldp+555,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+557,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc)),64);
    bufp->fullQData(oldp+559,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+561,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+563,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__f),64);
    bufp->fullQData(oldp+565,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc))),64);
    bufp->fullQData(oldp+567,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h),64);
    bufp->fullQData(oldp+569,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+571,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j),64);
    bufp->fullQData(oldp+573,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s),64);
    bufp->fullQData(oldp+575,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s),64);
    bufp->fullQData(oldp+577,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h)),64);
    bufp->fullQData(oldp+579,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s),64);
    bufp->fullQData(oldp+581,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+583,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+585,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+587,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+589,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+591,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+593,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+595,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+597,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+599,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+601,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_rc),64);
    bufp->fullQData(oldp+603,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc),64);
    bufp->fullQData(oldp+605,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r6__x2_o),64);
    bufp->fullQData(oldp+607,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc),64);
    bufp->fullQData(oldp+609,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x4_rc),64);
    bufp->fullQData(oldp+611,((0x96ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r5__x2_o)),64);
    bufp->fullQData(oldp+613,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc)),64);
    bufp->fullQData(oldp+615,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+617,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc)),64);
    bufp->fullQData(oldp+619,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+621,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+623,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__f),64);
    bufp->fullQData(oldp+625,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc))),64);
    bufp->fullQData(oldp+627,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h),64);
    bufp->fullQData(oldp+629,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+631,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j),64);
    bufp->fullQData(oldp+633,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s),64);
    bufp->fullQData(oldp+635,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s),64);
    bufp->fullQData(oldp+637,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h)),64);
    bufp->fullQData(oldp+639,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s),64);
    bufp->fullQData(oldp+641,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+643,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+645,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+647,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+649,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+651,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+653,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+655,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+657,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+659,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+661,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_rc),64);
    bufp->fullQData(oldp+663,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc),64);
    bufp->fullQData(oldp+665,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r7__x2_o),64);
    bufp->fullQData(oldp+667,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc),64);
    bufp->fullQData(oldp+669,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x4_rc),64);
    bufp->fullQData(oldp+671,((0x87ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r6__x2_o)),64);
    bufp->fullQData(oldp+673,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc)),64);
    bufp->fullQData(oldp+675,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+677,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc)),64);
    bufp->fullQData(oldp+679,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+681,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+683,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__f),64);
    bufp->fullQData(oldp+685,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc))),64);
    bufp->fullQData(oldp+687,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h),64);
    bufp->fullQData(oldp+689,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+691,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j),64);
    bufp->fullQData(oldp+693,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s),64);
    bufp->fullQData(oldp+695,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s),64);
    bufp->fullQData(oldp+697,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h)),64);
    bufp->fullQData(oldp+699,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s),64);
    bufp->fullQData(oldp+701,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+703,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+705,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+707,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+709,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+711,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+713,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+715,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+717,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+719,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+721,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_rc),64);
    bufp->fullQData(oldp+723,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc),64);
    bufp->fullQData(oldp+725,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r8__x2_o),64);
    bufp->fullQData(oldp+727,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc),64);
    bufp->fullQData(oldp+729,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x4_rc),64);
    bufp->fullQData(oldp+731,((0x78ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r7__x2_o)),64);
    bufp->fullQData(oldp+733,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc)),64);
    bufp->fullQData(oldp+735,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+737,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc)),64);
    bufp->fullQData(oldp+739,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+741,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+743,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__f),64);
    bufp->fullQData(oldp+745,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc))),64);
    bufp->fullQData(oldp+747,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h),64);
    bufp->fullQData(oldp+749,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+751,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j),64);
    bufp->fullQData(oldp+753,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s),64);
    bufp->fullQData(oldp+755,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s),64);
    bufp->fullQData(oldp+757,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h)),64);
    bufp->fullQData(oldp+759,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s),64);
    bufp->fullQData(oldp+761,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+763,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+765,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+767,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+769,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+771,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+773,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+775,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+777,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+779,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+781,((0x69ULL ^ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r8__x2_o)),64);
    bufp->fullQData(oldp+783,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc)),64);
    bufp->fullQData(oldp+785,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+787,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc)),64);
    bufp->fullQData(oldp+789,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+791,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0)),64);
    bufp->fullQData(oldp+793,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__f),64);
    bufp->fullQData(oldp+795,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc))),64);
    bufp->fullQData(oldp+797,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h),64);
    bufp->fullQData(oldp+799,((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0))),64);
    bufp->fullQData(oldp+801,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j),64);
    bufp->fullQData(oldp+803,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s),64);
    bufp->fullQData(oldp+805,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s),64);
    bufp->fullQData(oldp+807,((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h)),64);
    bufp->fullQData(oldp+809,(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s),64);
    bufp->fullQData(oldp+811,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s)))) 
                                << 0x2dU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s 
                                             >> 0x13U))),64);
    bufp->fullQData(oldp+813,((((QData)((IData)((0xfffffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s)))) 
                                << 0x24U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s 
                                             >> 0x1cU))),64);
    bufp->fullQData(oldp+815,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s 
                                                                     >> 0x3dU))))))),64);
    bufp->fullQData(oldp+817,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s 
                                << 0x19U) | (QData)((IData)(
                                                            (0x1ffffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s 
                                                                        >> 0x27U))))))),64);
    bufp->fullQData(oldp+819,((((QData)((IData)((1U 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h))))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h 
                                                   >> 1U))))),64);
    bufp->fullQData(oldp+821,((((QData)((IData)((0x3fU 
                                                 & (~ (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h))))) 
                                << 0x3aU) | (0x3ffffffffffffffULL 
                                             & (~ (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h 
                                                   >> 6U))))),64);
    bufp->fullQData(oldp+823,((((QData)((IData)((0x3ffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s)))) 
                                << 0x36U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s 
                                             >> 0xaU))),64);
    bufp->fullQData(oldp+825,((((QData)((IData)((0x1ffffU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s)))) 
                                << 0x2fU) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s 
                                             >> 0x11U))),64);
    bufp->fullQData(oldp+827,((((QData)((IData)((0x7fU 
                                                 & (IData)(vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j)))) 
                                << 0x39U) | (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j 
                                             >> 7U))),64);
    bufp->fullQData(oldp+829,(((vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j 
                                << 0x17U) | (QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j 
                                                                        >> 0x29U))))))),64);
    bufp->fullQData(oldp+831,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0) 
                               & vlSelfRef.test_ascon_permutation__DOT__x1_i)),64);
    bufp->fullQData(oldp+833,(((~ vlSelfRef.test_ascon_permutation__DOT__x1_i) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1)),64);
    bufp->fullQData(oldp+835,(((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                               & vlSelfRef.test_ascon_permutation__DOT__x3_i)),64);
    bufp->fullQData(oldp+837,(((~ vlSelfRef.test_ascon_permutation__DOT__x3_i) 
                               & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2)),64);
    bufp->fullQData(oldp+839,((vlSelfRef.test_ascon_permutation__DOT__x1_i 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1) 
                                  & vlSelfRef.test_ascon_permutation__DOT__x3_i))),64);
    bufp->fullQData(oldp+841,((vlSelfRef.test_ascon_permutation__DOT__x3_i 
                               ^ ((~ vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2) 
                                  & vlSelfRef.test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0))),64);
}
