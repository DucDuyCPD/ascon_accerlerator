// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_ascon_permutation.h for the primary calling header

#ifndef VERILATED_VTEST_ASCON_PERMUTATION___024ROOT_H_
#define VERILATED_VTEST_ASCON_PERMUTATION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_ascon_permutation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_ascon_permutation___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ test_ascon_permutation__DOT__x0_i;
        QData/*63:0*/ test_ascon_permutation__DOT__x1_i;
        QData/*63:0*/ test_ascon_permutation__DOT__x2_i;
        QData/*63:0*/ test_ascon_permutation__DOT__x3_i;
        QData/*63:0*/ test_ascon_permutation__DOT__x4_i;
        QData/*63:0*/ test_ascon_permutation__DOT__rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r0__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r1__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r2__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r3__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r4__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r5__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r6__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r7__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r8__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r9__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT____Vcellout__r10__x2_o;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r0__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r1__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r2__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x1_s;
    };
    struct {
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r3__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r4__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r5__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r6__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r7__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x0_s;
    };
    struct {
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r8__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r9__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__h;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r10__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x4_rc;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__f;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__j;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x0_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x1_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT__x3_s;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ test_ascon_permutation__DOT__ascon_p_dut__DOT__r11__DOT____VdfgRegularize_h66faf083_0_2;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_permutation__DOT__ascon_p_dut__DOT__x0_round;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_permutation__DOT__ascon_p_dut__DOT__x1_round;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_permutation__DOT__ascon_p_dut__DOT__x2_round;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_permutation__DOT__ascon_p_dut__DOT__x3_round;
        VlUnpacked<QData/*63:0*/, 11> test_ascon_permutation__DOT__ascon_p_dut__DOT__x4_round;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_ascon_permutation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_ascon_permutation___024root(Vtest_ascon_permutation__Syms* symsp, const char* v__name);
    ~Vtest_ascon_permutation___024root();
    VL_UNCOPYABLE(Vtest_ascon_permutation___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
