// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_ascon_core.h for the primary calling header

#ifndef VERILATED_VTEST_ASCON_CORE___024ROOT_H_
#define VERILATED_VTEST_ASCON_CORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_ascon_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_ascon_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ test_ascon_core__DOT__clk;
        CData/*0:0*/ test_ascon_core__DOT__rst_n;
        CData/*1:0*/ test_ascon_core__DOT__sel_type;
        CData/*0:0*/ test_ascon_core__DOT__mode_sel_encrypt_decrypt;
        CData/*0:0*/ test_ascon_core__DOT__err;
        CData/*0:0*/ test_ascon_core__DOT__done;
        CData/*0:0*/ test_ascon_core__DOT__process_en_init;
        CData/*0:0*/ test_ascon_core__DOT__process_en_AD_AM;
        CData/*0:0*/ test_ascon_core__DOT__process_en_encrypt_decrypt;
        CData/*0:0*/ test_ascon_core__DOT__process_en_hash;
        CData/*0:0*/ test_ascon_core__DOT__process_en_final;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__count;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__done_p;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__en_p8;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__en_p12;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_0;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_1;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_3;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_4;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT____VdfgRegularize_h5e23165b_0_5;
        CData/*1:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__state;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_2;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_4;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_5;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_6;
        CData/*0:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____VdfgRegularize_ha8524b23_0_7;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__test_ascon_core__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__test_ascon_core__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__test_ascon_core__DOT__done__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__key;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__nonce;
        IData/*31:0*/ test_ascon_core__DOT__data_length;
        IData/*31:0*/ test_ascon_core__DOT__data_position;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__data_in;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__data_out;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__tag;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__KEY;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__NONCE;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__TAG;
        IData/*31:0*/ test_ascon_core__DOT__PLAINTEXT_LENGTH;
        IData/*31:0*/ test_ascon_core__DOT__ASS_DATA_LENGTH;
        IData/*31:0*/ test_ascon_core__DOT__CIPHERTEXT_LENGTH;
        IData/*31:0*/ test_ascon_core__DOT__MESSAGE_LENGTH;
        IData/*31:0*/ test_ascon_core__DOT__count;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__ASSOCIATED_DATA__Vstatic__out;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__ENCRYPT__Vstatic__out;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__DECRYPT__Vstatic__out;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__FINALIZATION__Vstatic__tag_out;
        IData/*31:0*/ test_ascon_core__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ test_ascon_core__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ test_ascon_core__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ test_ascon_core__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ test_ascon_core__DOT__unnamedblk5__DOT__i;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__data_out_temp;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__tag_temp;
        IData/*31:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_AD_AM_module__DOT__length_minus_position;
        VlWide<4>/*127:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ test_ascon_core__DOT__unnamedblk6__DOT__start_time;
        QData/*63:0*/ test_ascon_core__DOT__unnamedblk6__DOT__end_time;
    };
    struct {
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_init;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_init;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_init;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_i_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_i_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__hash_out;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p8;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p8;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p8;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p8;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p8;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_init_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_i_init_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_init_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_init_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_AD_AM_p8;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_AD_AM_p8;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AD_AM_p8;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_p;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_p;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_p;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_p;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_p;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x0_mux;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x1_mux;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x2_mux;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x3_mux;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__x4_mux;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last_temp;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last_temp;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last;
    };
    struct {
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_0;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last_1;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_3;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT____VdfgRegularize_had75f156_0_5;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__x0_p12;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_reg_save;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_reg_save;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_reg_save;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_reg_save;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_reg_save;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_i_from_reg;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_i_from_reg;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_i_from_reg;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_i_from_reg;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_i_from_reg;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r0__x2_o;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r1__x2_o;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT____Vcellout__r2__x2_o;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x0_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x1_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x2_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x3_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r0__DOT__x4_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x0_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x1_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x2_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x3_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r1__DOT__x4_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x0_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x1_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x2_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x3_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r2__DOT__x4_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_rc;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x0_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x1_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x2_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x3_s;
        QData/*63:0*/ test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__r3__DOT__x4_s;
        VlUnpacked<QData/*63:0*/, 5> test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S;
        VlUnpacked<QData/*63:0*/, 3> test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x0_round;
        VlUnpacked<QData/*63:0*/, 3> test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x1_round;
        VlUnpacked<QData/*63:0*/, 3> test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x2_round;
        VlUnpacked<QData/*63:0*/, 3> test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x3_round;
        VlUnpacked<QData/*63:0*/, 3> test_ascon_core__DOT__ascon_core_dut__DOT__ascon_permutation_multicycle_p4_module__DOT__x4_round;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlAssocArray<IData/*31:0*/, VlWide<4>/*127:0*/> test_ascon_core__DOT__PLAINTEXT;
    VlAssocArray<IData/*31:0*/, VlWide<4>/*127:0*/> test_ascon_core__DOT__ASS_DATA;
    VlAssocArray<IData/*31:0*/, VlWide<4>/*127:0*/> test_ascon_core__DOT__CIPHERTEXT;
    VlAssocArray<IData/*31:0*/, VlWide<4>/*127:0*/> test_ascon_core__DOT__MESSAGE;
    VlAssocArray<IData/*31:0*/, VlWide<4>/*127:0*/> test_ascon_core__DOT__HASH_OUT;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> test_ascon_core__DOT__data_read_file_key;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> test_ascon_core__DOT__data_read_file_nonce;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> test_ascon_core__DOT__data_read_file_plaintext;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> test_ascon_core__DOT__data_read_file_ass_data;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> test_ascon_core__DOT__data_read_file_ciphertext;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> test_ascon_core__DOT__data_read_file_tag;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> test_ascon_core__DOT__data_read_file_message;
    VlAssocArray<IData/*31:0*/, QData/*63:0*/> test_ascon_core__DOT__data_read_file_hash_out;
    double test_ascon_core__DOT__unnamedblk6__DOT__encrypt_cycle_use;
    double test_ascon_core__DOT__unnamedblk6__DOT__decrypt_cycle_use;
    double test_ascon_core__DOT__unnamedblk6__DOT__hash_cycle_use;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7cd2085d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_ascon_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_ascon_core___024root(Vtest_ascon_core__Syms* symsp, const char* v__name);
    ~Vtest_ascon_core___024root();
    VL_UNCOPYABLE(Vtest_ascon_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
