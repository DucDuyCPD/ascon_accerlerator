// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core__Syms.h"
#include "Vtest_ascon_core___024root.h"

extern const VlWide<8>/*255:0*/ Vtest_ascon_core__ConstPool__CONST_h531bc51f_0;
extern const VlWide<8>/*255:0*/ Vtest_ascon_core__ConstPool__CONST_h6fa775aa_0;

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_initial__TOP(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<7>/*223:0*/ __Vtemp_2;
    VlWide<7>/*223:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<7>/*223:0*/ __Vtemp_5;
    VlWide<7>/*223:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_19;
    // Body
    VL_WRITEF_NX("==========generate data result:\n",0);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x2f6b6579U;
    __Vtemp_1[2U] = 0x73756c74U;
    __Vtemp_1[3U] = 0x655f7265U;
    __Vtemp_1[4U] = 0x65726174U;
    __Vtemp_1[5U] = 0x67656eU;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_key
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6f6e6365U;
    __Vtemp_2[2U] = 0x6c742f6eU;
    __Vtemp_2[3U] = 0x72657375U;
    __Vtemp_2[4U] = 0x6174655fU;
    __Vtemp_2[5U] = 0x656e6572U;
    __Vtemp_2[6U] = 0x67U;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(7, __Vtemp_2)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_nonce
                 , 0, ~0ULL);
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(8, Vtest_ascon_core__ConstPool__CONST_h531bc51f_0)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext
                 , 0, ~0ULL);
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x64617461U;
    __Vtemp_3[2U] = 0x6173735fU;
    __Vtemp_3[3U] = 0x756c742fU;
    __Vtemp_3[4U] = 0x5f726573U;
    __Vtemp_3[5U] = 0x72617465U;
    __Vtemp_3[6U] = 0x67656e65U;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(7, __Vtemp_3)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data
                 , 0, ~0ULL);
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(8, Vtest_ascon_core__ConstPool__CONST_h6fa775aa_0)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext
                 , 0, ~0ULL);
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x2f746167U;
    __Vtemp_4[2U] = 0x73756c74U;
    __Vtemp_4[3U] = 0x655f7265U;
    __Vtemp_4[4U] = 0x65726174U;
    __Vtemp_4[5U] = 0x67656eU;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(6, __Vtemp_4)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_tag
                 , 0, ~0ULL);
    __Vtemp_5[0U] = 0x2e686578U;
    __Vtemp_5[1U] = 0x73616765U;
    __Vtemp_5[2U] = 0x2f6d6573U;
    __Vtemp_5[3U] = 0x73756c74U;
    __Vtemp_5[4U] = 0x655f7265U;
    __Vtemp_5[5U] = 0x65726174U;
    __Vtemp_5[6U] = 0x67656eU;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(7, __Vtemp_5)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_message
                 , 0, ~0ULL);
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x5f6f7574U;
    __Vtemp_6[2U] = 0x68617368U;
    __Vtemp_6[3U] = 0x756c742fU;
    __Vtemp_6[4U] = 0x5f726573U;
    __Vtemp_6[5U] = 0x72617465U;
    __Vtemp_6[6U] = 0x67656e65U;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(7, __Vtemp_6)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_hash_out
                 , 0, ~0ULL);
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.test_ascon_core__DOT__KEY, vlSelfRef.test_ascon_core__DOT__data_read_file_key
                  .at(0U), vlSelfRef.test_ascon_core__DOT__data_read_file_key
                  .at(1U));
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.test_ascon_core__DOT__NONCE, vlSelfRef.test_ascon_core__DOT__data_read_file_nonce
                  .at(0U), vlSelfRef.test_ascon_core__DOT__data_read_file_nonce
                  .at(1U));
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.test_ascon_core__DOT__TAG, vlSelfRef.test_ascon_core__DOT__data_read_file_tag
                  .at(1U), vlSelfRef.test_ascon_core__DOT__data_read_file_tag
                  .at(0U));
    vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH 
        = (IData)(vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext
                  .at(0U));
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i = 1U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_7, vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i), vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext
                      .at(((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i)));
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__PLAINTEXT
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_7);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i 
            = ((IData)(2U) + vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH 
        = (IData)(vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data
                  .at(0U));
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i = 1U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_10, vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i), vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data
                      .at(((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i)));
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__ASS_DATA
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_10);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i 
            = ((IData)(2U) + vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH 
        = (IData)(vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext
                  .at(0U));
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk3__DOT__i = 1U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk3__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_13, vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk3__DOT__i), vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext
                      .at(((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk3__DOT__i)));
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__CIPHERTEXT
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_13);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk3__DOT__i 
            = ((IData)(2U) + vlSelfRef.test_ascon_core__DOT__unnamedblk3__DOT__i);
    }
    vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH 
        = (IData)(vlSelfRef.test_ascon_core__DOT__data_read_file_message
                  .at(0U));
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i = 1U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_message.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_16, vlSelfRef.test_ascon_core__DOT__data_read_file_message
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i), 0ULL);
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__MESSAGE
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_16);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i 
            = ((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i);
    }
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk5__DOT__i = 0U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk5__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_hash_out.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_19, vlSelfRef.test_ascon_core__DOT__data_read_file_hash_out
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk5__DOT__i), 0ULL);
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__HASH_OUT
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_19);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk5__DOT__i 
            = ((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk5__DOT__i);
    }
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__stl(Vtest_ascon_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_triggers__stl(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_triggers__stl\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
