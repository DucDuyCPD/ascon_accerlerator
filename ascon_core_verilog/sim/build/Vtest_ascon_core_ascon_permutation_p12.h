// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_ascon_core.h for the primary calling header

#ifndef VERILATED_VTEST_ASCON_CORE_ASCON_PERMUTATION_P12_H_
#define VERILATED_VTEST_ASCON_CORE_ASCON_PERMUTATION_P12_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_ascon_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_ascon_core_ascon_permutation_p12 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN64(x0_i,63,0);
        VL_IN64(x1_i,63,0);
        VL_IN64(x2_i,63,0);
        VL_IN64(x3_i,63,0);
        VL_IN64(x4_i,63,0);
        VL_OUT64(x0_o,63,0);
        VL_OUT64(x1_o,63,0);
        VL_OUT64(x2_o,63,0);
        VL_OUT64(x3_o,63,0);
        VL_OUT64(x4_o,63,0);
        QData/*63:0*/ __Vcellout__r0__x2_o;
        QData/*63:0*/ __Vcellout__r1__x2_o;
        QData/*63:0*/ __Vcellout__r2__x2_o;
        QData/*63:0*/ __Vcellout__r3__x2_o;
        QData/*63:0*/ __Vcellout__r4__x2_o;
        QData/*63:0*/ __Vcellout__r5__x2_o;
        QData/*63:0*/ __Vcellout__r6__x2_o;
        QData/*63:0*/ __Vcellout__r7__x2_o;
        QData/*63:0*/ __Vcellout__r8__x2_o;
        QData/*63:0*/ __Vcellout__r9__x2_o;
        QData/*63:0*/ __Vcellout__r10__x2_o;
        QData/*63:0*/ __PVT__r0__DOT__f;
        QData/*63:0*/ __PVT__r0__DOT__h;
        QData/*63:0*/ __PVT__r0__DOT__j;
        QData/*63:0*/ __PVT__r0__DOT__x0_s;
        QData/*63:0*/ __PVT__r0__DOT__x1_s;
        QData/*63:0*/ __PVT__r0__DOT__x3_s;
        QData/*63:0*/ r0__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r0__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r0__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r1__DOT__x0_rc;
        QData/*63:0*/ __PVT__r1__DOT__x1_rc;
        QData/*63:0*/ __PVT__r1__DOT__x3_rc;
        QData/*63:0*/ __PVT__r1__DOT__x4_rc;
        QData/*63:0*/ __PVT__r1__DOT__f;
        QData/*63:0*/ __PVT__r1__DOT__h;
        QData/*63:0*/ __PVT__r1__DOT__j;
        QData/*63:0*/ __PVT__r1__DOT__x0_s;
        QData/*63:0*/ __PVT__r1__DOT__x1_s;
        QData/*63:0*/ __PVT__r1__DOT__x3_s;
        QData/*63:0*/ r1__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r1__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r1__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r2__DOT__x0_rc;
        QData/*63:0*/ __PVT__r2__DOT__x1_rc;
        QData/*63:0*/ __PVT__r2__DOT__x3_rc;
        QData/*63:0*/ __PVT__r2__DOT__x4_rc;
        QData/*63:0*/ __PVT__r2__DOT__f;
        QData/*63:0*/ __PVT__r2__DOT__h;
        QData/*63:0*/ __PVT__r2__DOT__j;
        QData/*63:0*/ __PVT__r2__DOT__x0_s;
        QData/*63:0*/ __PVT__r2__DOT__x1_s;
        QData/*63:0*/ __PVT__r2__DOT__x3_s;
        QData/*63:0*/ r2__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r2__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r2__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r3__DOT__x0_rc;
        QData/*63:0*/ __PVT__r3__DOT__x1_rc;
        QData/*63:0*/ __PVT__r3__DOT__x3_rc;
        QData/*63:0*/ __PVT__r3__DOT__x4_rc;
        QData/*63:0*/ __PVT__r3__DOT__f;
        QData/*63:0*/ __PVT__r3__DOT__h;
        QData/*63:0*/ __PVT__r3__DOT__j;
        QData/*63:0*/ __PVT__r3__DOT__x0_s;
    };
    struct {
        QData/*63:0*/ __PVT__r3__DOT__x1_s;
        QData/*63:0*/ __PVT__r3__DOT__x3_s;
        QData/*63:0*/ r3__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r3__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r3__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r4__DOT__x0_rc;
        QData/*63:0*/ __PVT__r4__DOT__x1_rc;
        QData/*63:0*/ __PVT__r4__DOT__x3_rc;
        QData/*63:0*/ __PVT__r4__DOT__x4_rc;
        QData/*63:0*/ __PVT__r4__DOT__f;
        QData/*63:0*/ __PVT__r4__DOT__h;
        QData/*63:0*/ __PVT__r4__DOT__j;
        QData/*63:0*/ __PVT__r4__DOT__x0_s;
        QData/*63:0*/ __PVT__r4__DOT__x1_s;
        QData/*63:0*/ __PVT__r4__DOT__x3_s;
        QData/*63:0*/ r4__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r4__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r4__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r5__DOT__x0_rc;
        QData/*63:0*/ __PVT__r5__DOT__x1_rc;
        QData/*63:0*/ __PVT__r5__DOT__x3_rc;
        QData/*63:0*/ __PVT__r5__DOT__x4_rc;
        QData/*63:0*/ __PVT__r5__DOT__f;
        QData/*63:0*/ __PVT__r5__DOT__h;
        QData/*63:0*/ __PVT__r5__DOT__j;
        QData/*63:0*/ __PVT__r5__DOT__x0_s;
        QData/*63:0*/ __PVT__r5__DOT__x1_s;
        QData/*63:0*/ __PVT__r5__DOT__x3_s;
        QData/*63:0*/ r5__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r5__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r5__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r6__DOT__x0_rc;
        QData/*63:0*/ __PVT__r6__DOT__x1_rc;
        QData/*63:0*/ __PVT__r6__DOT__x3_rc;
        QData/*63:0*/ __PVT__r6__DOT__x4_rc;
        QData/*63:0*/ __PVT__r6__DOT__f;
        QData/*63:0*/ __PVT__r6__DOT__h;
        QData/*63:0*/ __PVT__r6__DOT__j;
        QData/*63:0*/ __PVT__r6__DOT__x0_s;
        QData/*63:0*/ __PVT__r6__DOT__x1_s;
        QData/*63:0*/ __PVT__r6__DOT__x3_s;
        QData/*63:0*/ r6__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r6__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r6__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r7__DOT__x0_rc;
        QData/*63:0*/ __PVT__r7__DOT__x1_rc;
        QData/*63:0*/ __PVT__r7__DOT__x3_rc;
        QData/*63:0*/ __PVT__r7__DOT__x4_rc;
        QData/*63:0*/ __PVT__r7__DOT__f;
        QData/*63:0*/ __PVT__r7__DOT__h;
        QData/*63:0*/ __PVT__r7__DOT__j;
        QData/*63:0*/ __PVT__r7__DOT__x0_s;
        QData/*63:0*/ __PVT__r7__DOT__x1_s;
        QData/*63:0*/ __PVT__r7__DOT__x3_s;
        QData/*63:0*/ r7__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r7__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r7__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r8__DOT__x0_rc;
        QData/*63:0*/ __PVT__r8__DOT__x1_rc;
        QData/*63:0*/ __PVT__r8__DOT__x3_rc;
        QData/*63:0*/ __PVT__r8__DOT__x4_rc;
        QData/*63:0*/ __PVT__r8__DOT__f;
        QData/*63:0*/ __PVT__r8__DOT__h;
        QData/*63:0*/ __PVT__r8__DOT__j;
    };
    struct {
        QData/*63:0*/ __PVT__r8__DOT__x0_s;
        QData/*63:0*/ __PVT__r8__DOT__x1_s;
        QData/*63:0*/ __PVT__r8__DOT__x3_s;
        QData/*63:0*/ r8__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r8__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r8__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r9__DOT__x0_rc;
        QData/*63:0*/ __PVT__r9__DOT__x1_rc;
        QData/*63:0*/ __PVT__r9__DOT__x3_rc;
        QData/*63:0*/ __PVT__r9__DOT__x4_rc;
        QData/*63:0*/ __PVT__r9__DOT__f;
        QData/*63:0*/ __PVT__r9__DOT__h;
        QData/*63:0*/ __PVT__r9__DOT__j;
        QData/*63:0*/ __PVT__r9__DOT__x0_s;
        QData/*63:0*/ __PVT__r9__DOT__x1_s;
        QData/*63:0*/ __PVT__r9__DOT__x3_s;
        QData/*63:0*/ r9__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r9__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r9__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r10__DOT__x0_rc;
        QData/*63:0*/ __PVT__r10__DOT__x1_rc;
        QData/*63:0*/ __PVT__r10__DOT__x3_rc;
        QData/*63:0*/ __PVT__r10__DOT__x4_rc;
        QData/*63:0*/ __PVT__r10__DOT__f;
        QData/*63:0*/ __PVT__r10__DOT__h;
        QData/*63:0*/ __PVT__r10__DOT__j;
        QData/*63:0*/ __PVT__r10__DOT__x0_s;
        QData/*63:0*/ __PVT__r10__DOT__x1_s;
        QData/*63:0*/ __PVT__r10__DOT__x3_s;
        QData/*63:0*/ r10__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r10__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r10__DOT____VdfgRegularize_h66faf083_0_2;
        QData/*63:0*/ __PVT__r11__DOT__x0_rc;
        QData/*63:0*/ __PVT__r11__DOT__x1_rc;
        QData/*63:0*/ __PVT__r11__DOT__x3_rc;
        QData/*63:0*/ __PVT__r11__DOT__x4_rc;
        QData/*63:0*/ __PVT__r11__DOT__f;
        QData/*63:0*/ __PVT__r11__DOT__h;
        QData/*63:0*/ __PVT__r11__DOT__j;
        QData/*63:0*/ __PVT__r11__DOT__x0_s;
        QData/*63:0*/ __PVT__r11__DOT__x1_s;
        QData/*63:0*/ __PVT__r11__DOT__x3_s;
        QData/*63:0*/ r11__DOT____VdfgRegularize_h66faf083_0_0;
        QData/*63:0*/ r11__DOT____VdfgRegularize_h66faf083_0_1;
        QData/*63:0*/ r11__DOT____VdfgRegularize_h66faf083_0_2;
        VlUnpacked<QData/*63:0*/, 11> __PVT__x0_round;
        VlUnpacked<QData/*63:0*/, 11> __PVT__x1_round;
        VlUnpacked<QData/*63:0*/, 11> __PVT__x2_round;
        VlUnpacked<QData/*63:0*/, 11> __PVT__x3_round;
        VlUnpacked<QData/*63:0*/, 11> __PVT__x4_round;
    };

    // INTERNAL VARIABLES
    Vtest_ascon_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_ascon_core_ascon_permutation_p12(Vtest_ascon_core__Syms* symsp, const char* v__name);
    ~Vtest_ascon_core_ascon_permutation_p12();
    VL_UNCOPYABLE(Vtest_ascon_core_ascon_permutation_p12);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
