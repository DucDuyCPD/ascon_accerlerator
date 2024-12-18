// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_ascon_initialization.h for the primary calling header

#ifndef VERILATED_VTEST_ASCON_INITIALIZATION___024ROOT_H_
#define VERILATED_VTEST_ASCON_INITIALIZATION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_ascon_initialization__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_ascon_initialization___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ test_ascon_initialization__DOT__clk;
        CData/*0:0*/ test_ascon_initialization__DOT__rst_n;
        CData/*7:0*/ test_ascon_initialization__DOT__k;
        CData/*7:0*/ test_ascon_initialization__DOT__rate;
        CData/*7:0*/ test_ascon_initialization__DOT__a;
        CData/*7:0*/ test_ascon_initialization__DOT__b;
        CData/*1:0*/ test_ascon_initialization__DOT__sel_type;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__test_ascon_initialization__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__test_ascon_initialization__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VlWide<4>/*127:0*/ test_ascon_initialization__DOT__key;
        VlWide<4>/*127:0*/ test_ascon_initialization__DOT__nonce;
        VlWide<10>/*319:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__zeros_key;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__IV;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r0__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r1__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r2__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r3__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r4__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r5__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r6__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r7__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r8__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r9__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT____Vcellout__r10__x2_o;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1;
    };
    struct {
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0;
    };
    struct {
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x0_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x1_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x3_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x4_rc;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__f;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__h;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__j;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x0_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x1_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT__x3_s;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2;
        VlUnpacked<QData/*63:0*/, 5> test_ascon_initialization__DOT__ascon_initialization_dut__DOT__S;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x0_round;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x1_round;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x2_round;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x3_round;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_initialization__DOT__ascon_initialization_dut__DOT__ascon_p12__DOT__x4_round;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_ascon_initialization__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_ascon_initialization___024root(Vtest_ascon_initialization__Syms* symsp, const char* v__name);
    ~Vtest_ascon_initialization___024root();
    VL_UNCOPYABLE(Vtest_ascon_initialization___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
