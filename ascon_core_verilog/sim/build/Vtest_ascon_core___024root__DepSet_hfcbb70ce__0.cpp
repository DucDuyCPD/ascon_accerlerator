// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core__Syms.h"
#include "Vtest_ascon_core___024root.h"

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_initial__TOP(Vtest_ascon_core___024root* vlSelf);
VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__0(Vtest_ascon_core___024root* vlSelf);
VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__1(Vtest_ascon_core___024root* vlSelf);
VlCoroutine Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__2(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___eval_initial__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12(Vtest_ascon_core_ascon_permutation_p12* vlSelf);

void Vtest_ascon_core___024root___eval_initial(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_ascon_core___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtest_ascon_core___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtest_ascon_core_ascon_permutation_p12___eval_initial__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12));
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__clk__0 
        = vlSelfRef.test_ascon_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__rst_n__0 
        = vlSelfRef.test_ascon_core__DOT__rst_n;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__act(Vtest_ascon_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_ascon_core___024root___eval_triggers__act(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_ascon_core__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.test_ascon_core__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__clk__0 
        = vlSelfRef.test_ascon_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__rst_n__0 
        = vlSelfRef.test_ascon_core__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtest_ascon_core___024root___act_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core___024root___act_sequent__TOP__1(Vtest_ascon_core___024root* vlSelf);

void Vtest_ascon_core___024root___eval_act(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtest_ascon_core___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12));
        Vtest_ascon_core___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_ascon_core___024root___act_sequent__TOP__1(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[4U] 
        = vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x4_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[2U] 
        = vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x2_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[3U] 
        = vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x3_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[0U] 
        = vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x0_o;
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__S[1U] 
        = vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x1_o;
}

void Vtest_ascon_core___024root___nba_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core___024root___nba_sequent__TOP__1(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___nba_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core___024root___nba_comb__TOP__0(Vtest_ascon_core___024root* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___nba_comb__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);
void Vtest_ascon_core_ascon_permutation_p12___nba_comb__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12__0(Vtest_ascon_core_ascon_permutation_p12* vlSelf);

void Vtest_ascon_core___024root___eval_nba(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vtest_ascon_core_ascon_permutation_p12___nba_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_ascon_core___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        Vtest_ascon_core_ascon_permutation_p12___nba_comb__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___nba_comb__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12));
        Vtest_ascon_core_ascon_permutation_p12___act_sequent__TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12__0((&vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12));
        Vtest_ascon_core___024root___act_sequent__TOP__1(vlSelf);
    }
}

extern const VlWide<10>/*319:0*/ Vtest_ascon_core__ConstPool__CONST_hab76c978_0;
extern const VlUnpacked<QData/*63:0*/, 8> Vtest_ascon_core__ConstPool__TABLE_hf251cb18_0;

VL_INLINE_OPT void Vtest_ascon_core___024root___nba_sequent__TOP__0(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count;
    __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_135;
    VlWide<4>/*127:0*/ __Vtemp_137;
    VlWide<4>/*127:0*/ __Vtemp_139;
    // Body
    __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count;
    if (vlSelfRef.test_ascon_core__DOT__rst_n) {
        vlSelfRef.test_ascon_core__DOT__tag[0U] = (IData)(
                                                          ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                            ^ 
                                                            ((((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                                               << 0x36U) 
                                                              | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                                 >> 0xaU)) 
                                                             ^ 
                                                             (((QData)((IData)(
                                                                               (0x1ffffU 
                                                                                & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                                               << 0x2fU) 
                                                              | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                                 >> 0x11U)))) 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__key[2U])))));
        vlSelfRef.test_ascon_core__DOT__tag[1U] = (IData)(
                                                          (((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                             ^ 
                                                             ((((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                                                << 0x36U) 
                                                               | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                                  >> 0xaU)) 
                                                              ^ 
                                                              (((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                                                << 0x2fU) 
                                                               | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                                  >> 0x11U)))) 
                                                            ^ 
                                                            (((QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__key[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.test_ascon_core__DOT__key[2U])))) 
                                                           >> 0x20U));
        vlSelfRef.test_ascon_core__DOT__tag[2U] = (IData)(
                                                          ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                            ^ 
                                                            ((((QData)((IData)(
                                                                               (0x7fU 
                                                                                & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                                               << 0x39U) 
                                                              | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                 >> 7U)) 
                                                             ^ 
                                                             ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                               << 0x17U) 
                                                              | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                                >> 0x29U)))))))) 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__key[0U])))));
        vlSelfRef.test_ascon_core__DOT__tag[3U] = (IData)(
                                                          (((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                             ^ 
                                                             ((((QData)((IData)(
                                                                                (0x7fU 
                                                                                & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                                                                << 0x39U) 
                                                               | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                  >> 7U)) 
                                                              ^ 
                                                              ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                << 0x17U) 
                                                               | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_finalization_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                                >> 0x29U)))))))) 
                                                            ^ 
                                                            (((QData)((IData)(
                                                                              vlSelfRef.test_ascon_core__DOT__key[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.test_ascon_core__DOT__key[0U])))) 
                                                           >> 0x20U));
        if (vlSelfRef.test_ascon_core__DOT__process_en_init) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x0_o 
                   ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[9U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[8U]))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x1_o 
                   ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[7U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[6U]))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 
                = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x2_o 
                   ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[5U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[4U]))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 
                = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x3_o 
                   ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[2U]))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 
                = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__ascon_p12.x4_o 
                   ^ (((QData)((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[0U]))));
        } else if (vlSelfRef.test_ascon_core__DOT__process_en_AE_AM) {
            __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count)));
            if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AE_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AE_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AE_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AE_AM;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AE_AM;
                __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
            }
        } else if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count)));
            if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt;
                __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
            }
        } else if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count)));
            if (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash;
                __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
            }
        }
        if (vlSelfRef.test_ascon_core__DOT__process_en_encrypt_decrypt) {
            if ((3U == (vlSelfRef.test_ascon_core__DOT__data_length 
                        - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_21[0U] = (0xffffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]);
                __Vtemp_21[1U] = 0U;
                __Vtemp_88[0U] = (0xffffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]);
                __Vtemp_88[1U] = 0U;
            } else if ((4U == (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_21[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_21[1U] = 0U;
                __Vtemp_88[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_88[1U] = 0U;
            } else if ((5U == (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_21[0U] = (IData)((0xffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))));
                __Vtemp_21[1U] = (IData)(((0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))) 
                                          >> 0x20U));
                __Vtemp_88[0U] = (IData)((0xffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))));
                __Vtemp_88[1U] = (IData)(((0xffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))) 
                                          >> 0x20U));
            } else if ((6U == (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_21[0U] = (IData)((0xffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))));
                __Vtemp_21[1U] = (IData)(((0xffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))) 
                                          >> 0x20U));
                __Vtemp_88[0U] = (IData)((0xffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))));
                __Vtemp_88[1U] = (IData)(((0xffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))) 
                                          >> 0x20U));
            } else {
                __Vtemp_21[0U] = (IData)((0xffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))));
                __Vtemp_21[1U] = (IData)(((0xffffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))) 
                                          >> 0x20U));
                __Vtemp_88[0U] = (IData)((0xffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))));
                __Vtemp_88[1U] = (IData)(((0xffffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U])))) 
                                          >> 0x20U));
            }
            if ((8U == (vlSelfRef.test_ascon_core__DOT__data_length 
                        - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_68[0U] = (IData)((((QData)((IData)(
                                                           vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]))));
                __Vtemp_68[1U] = (IData)(((((QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]))) 
                                          >> 0x20U));
                __Vtemp_135[0U] = (IData)((((QData)((IData)(
                                                            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]))));
                __Vtemp_135[1U] = (IData)(((((QData)((IData)(
                                                             vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]))) 
                                           >> 0x20U));
            } else if ((9U == (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_68[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_68[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                __Vtemp_135[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_135[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
            } else if ((0xaU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_68[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_68[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                __Vtemp_135[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_135[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
            } else if ((0xbU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_68[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_68[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                __Vtemp_135[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_135[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
            } else if ((0xcU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_68[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_68[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                __Vtemp_135[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_135[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
            } else if ((0xdU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_68[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_68[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                __Vtemp_135[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_135[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
            } else if ((0xeU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))) {
                __Vtemp_68[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_68[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                __Vtemp_135[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_135[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
            } else {
                __Vtemp_68[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_68[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                __Vtemp_135[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                __Vtemp_135[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
            }
            if (((((((((8U == (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position)) 
                       | (9U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))) 
                      | (0xaU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                  - vlSelfRef.test_ascon_core__DOT__data_position))) 
                     | (0xbU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))) 
                    | (0xcU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                - vlSelfRef.test_ascon_core__DOT__data_position))) 
                   | (0xdU == (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position))) 
                  | (0xeU == (vlSelfRef.test_ascon_core__DOT__data_length 
                              - vlSelfRef.test_ascon_core__DOT__data_position))) 
                 | (0xfU == (vlSelfRef.test_ascon_core__DOT__data_length 
                             - vlSelfRef.test_ascon_core__DOT__data_position)))) {
                if ((8U == (vlSelfRef.test_ascon_core__DOT__data_length 
                            - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_70[2U] = 0U;
                    __Vtemp_70[3U] = 0U;
                    __Vtemp_137[2U] = 0U;
                    __Vtemp_137[3U] = 0U;
                } else if ((9U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                   - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_70[2U] = (0xffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U]);
                    __Vtemp_70[3U] = 0U;
                    __Vtemp_137[2U] = (0xffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U]);
                    __Vtemp_137[3U] = 0U;
                } else if ((0xaU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                     - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_70[2U] = (0xffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U]);
                    __Vtemp_70[3U] = 0U;
                    __Vtemp_137[2U] = (0xffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U]);
                    __Vtemp_137[3U] = 0U;
                } else if ((0xbU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                     - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_70[2U] = (0xffffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U]);
                    __Vtemp_70[3U] = 0U;
                    __Vtemp_137[2U] = (0xffffffU & 
                                       vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U]);
                    __Vtemp_137[3U] = 0U;
                } else if ((0xcU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                     - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_70[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                    __Vtemp_70[3U] = 0U;
                    __Vtemp_137[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                    __Vtemp_137[3U] = 0U;
                } else if ((0xdU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                     - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_70[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                    __Vtemp_70[3U] = (0xffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U]);
                    __Vtemp_137[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                    __Vtemp_137[3U] = (0xffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U]);
                } else if ((0xeU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                     - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_70[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                    __Vtemp_70[3U] = (0xffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U]);
                    __Vtemp_137[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                    __Vtemp_137[3U] = (0xffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U]);
                } else {
                    __Vtemp_70[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                    __Vtemp_70[3U] = (0xffffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U]);
                    __Vtemp_137[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                    __Vtemp_137[3U] = (0xffffffU & 
                                       vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U]);
                }
            } else {
                __Vtemp_70[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                __Vtemp_70[3U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U];
                __Vtemp_137[2U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[2U];
                __Vtemp_137[3U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[3U];
            }
            if (((((((((0U == (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position)) 
                       | (1U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))) 
                      | (2U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                - vlSelfRef.test_ascon_core__DOT__data_position))) 
                     | (3U == (vlSelfRef.test_ascon_core__DOT__data_length 
                               - vlSelfRef.test_ascon_core__DOT__data_position))) 
                    | (4U == (vlSelfRef.test_ascon_core__DOT__data_length 
                              - vlSelfRef.test_ascon_core__DOT__data_position))) 
                   | (5U == (vlSelfRef.test_ascon_core__DOT__data_length 
                             - vlSelfRef.test_ascon_core__DOT__data_position))) 
                  | (6U == (vlSelfRef.test_ascon_core__DOT__data_length 
                            - vlSelfRef.test_ascon_core__DOT__data_position))) 
                 | (7U == (vlSelfRef.test_ascon_core__DOT__data_length 
                           - vlSelfRef.test_ascon_core__DOT__data_position)))) {
                if ((0U == (vlSelfRef.test_ascon_core__DOT__data_length 
                            - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_72[0U] = 0U;
                    __Vtemp_72[1U] = 0U;
                    __Vtemp_72[2U] = 0U;
                    __Vtemp_72[3U] = 0U;
                    __Vtemp_139[0U] = 0U;
                    __Vtemp_139[1U] = 0U;
                    __Vtemp_139[2U] = 0U;
                    __Vtemp_139[3U] = 0U;
                } else if ((1U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                   - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_72[0U] = (1U & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]);
                    __Vtemp_72[1U] = 0U;
                    __Vtemp_72[2U] = 0U;
                    __Vtemp_72[3U] = 0U;
                    __Vtemp_139[0U] = (1U & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]);
                    __Vtemp_139[1U] = 0U;
                    __Vtemp_139[2U] = 0U;
                    __Vtemp_139[3U] = 0U;
                } else if ((2U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                   - vlSelfRef.test_ascon_core__DOT__data_position))) {
                    __Vtemp_72[0U] = (0xffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]);
                    __Vtemp_72[1U] = 0U;
                    __Vtemp_72[2U] = 0U;
                    __Vtemp_72[3U] = 0U;
                    __Vtemp_139[0U] = (0xffffU & vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U]);
                    __Vtemp_139[1U] = 0U;
                    __Vtemp_139[2U] = 0U;
                    __Vtemp_139[3U] = 0U;
                } else {
                    __Vtemp_72[0U] = __Vtemp_21[0U];
                    __Vtemp_72[1U] = __Vtemp_21[1U];
                    __Vtemp_139[0U] = __Vtemp_88[0U];
                    __Vtemp_139[1U] = __Vtemp_88[1U];
                    if ((3U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                - vlSelfRef.test_ascon_core__DOT__data_position))) {
                        __Vtemp_72[2U] = 0U;
                        __Vtemp_72[3U] = 0U;
                        __Vtemp_139[2U] = 0U;
                        __Vtemp_139[3U] = 0U;
                    } else if ((4U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                       - vlSelfRef.test_ascon_core__DOT__data_position))) {
                        __Vtemp_72[2U] = 0U;
                        __Vtemp_72[3U] = 0U;
                        __Vtemp_139[2U] = 0U;
                        __Vtemp_139[3U] = 0U;
                    } else if ((5U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                       - vlSelfRef.test_ascon_core__DOT__data_position))) {
                        __Vtemp_72[2U] = 0U;
                        __Vtemp_72[3U] = 0U;
                        __Vtemp_139[2U] = 0U;
                        __Vtemp_139[3U] = 0U;
                    } else {
                        __Vtemp_72[2U] = 0U;
                        __Vtemp_72[3U] = 0U;
                        __Vtemp_139[2U] = 0U;
                        __Vtemp_139[3U] = 0U;
                    }
                }
            } else {
                if (((((((((8U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                   - vlSelfRef.test_ascon_core__DOT__data_position)) 
                           | (9U == (vlSelfRef.test_ascon_core__DOT__data_length 
                                     - vlSelfRef.test_ascon_core__DOT__data_position))) 
                          | (0xaU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                      - vlSelfRef.test_ascon_core__DOT__data_position))) 
                         | (0xbU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                     - vlSelfRef.test_ascon_core__DOT__data_position))) 
                        | (0xcU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                    - vlSelfRef.test_ascon_core__DOT__data_position))) 
                       | (0xdU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                   - vlSelfRef.test_ascon_core__DOT__data_position))) 
                      | (0xeU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                  - vlSelfRef.test_ascon_core__DOT__data_position))) 
                     | (0xfU == (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position)))) {
                    __Vtemp_72[0U] = __Vtemp_68[0U];
                    __Vtemp_72[1U] = __Vtemp_68[1U];
                    __Vtemp_139[0U] = __Vtemp_135[0U];
                    __Vtemp_139[1U] = __Vtemp_135[1U];
                } else {
                    __Vtemp_72[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                    __Vtemp_72[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                    __Vtemp_139[0U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[0U];
                    __Vtemp_139[1U] = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__data_out_last[1U];
                }
                __Vtemp_72[2U] = __Vtemp_70[2U];
                __Vtemp_72[3U] = __Vtemp_70[3U];
                __Vtemp_139[2U] = __Vtemp_137[2U];
                __Vtemp_139[3U] = __Vtemp_137[3U];
            }
            if ((0x10U < (vlSelfRef.test_ascon_core__DOT__data_length 
                          - vlSelfRef.test_ascon_core__DOT__data_position))) {
                if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] 
                        = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                                   ^ (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[0U])))));
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] 
                        = (IData)(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.test_ascon_core__DOT__data_in[0U])))) 
                                   >> 0x20U));
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] 
                        = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                   ^ (((QData)((IData)(
                                                       vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.test_ascon_core__DOT__data_in[2U])))));
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] 
                        = (IData)(((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.test_ascon_core__DOT__data_in[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.test_ascon_core__DOT__data_in[2U])))) 
                                   >> 0x20U));
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] 
                        = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0);
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] 
                        = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s0 
                                   >> 0x20U));
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] 
                        = (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1);
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] 
                        = (IData)((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s1 
                                   >> 0x20U));
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                    = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                       ^ ((((QData)((IData)((0x7ffffU 
                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                            << 0x2dU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                         >> 0x13U)) 
                          ^ (((QData)((IData)((0xfffffffU 
                                               & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s)))) 
                              << 0x24U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x0_s 
                                           >> 0x1cU))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt 
                    = ((~ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h) 
                       ^ ((((QData)((IData)((1U & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                            << 0x3fU) | (0x7fffffffffffffffULL 
                                         & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                               >> 1U)))) 
                          ^ (((QData)((IData)((0x3fU 
                                               & (~ (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h))))) 
                              << 0x3aU) | (0x3ffffffffffffffULL 
                                           & (~ (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__h 
                                                 >> 6U))))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt 
                    = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                       ^ ((((QData)((IData)((0x3ffU 
                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                            << 0x36U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                         >> 0xaU)) 
                          ^ (((QData)((IData)((0x1ffffU 
                                               & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s)))) 
                              << 0x2fU) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x3_s 
                                           >> 0x11U))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt 
                    = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                       ^ ((((QData)((IData)((0x7fU 
                                             & (IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j)))) 
                            << 0x39U) | (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                         >> 7U)) ^ 
                          ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                            << 0x17U) | (QData)((IData)(
                                                        (0x7fffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__j 
                                                                    >> 0x29U))))))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                    = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                       ^ (((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                            << 3U) | (QData)((IData)(
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                 >> 0x3dU)))))) 
                          ^ ((vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                              << 0x19U) | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__ascon_p8__DOT__r7__DOT__x1_s 
                                                                      >> 0x27U))))))));
            } else {
                if (vlSelfRef.test_ascon_core__DOT__mode_sel_encrypt_decrypt) {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] 
                        = __Vtemp_72[0U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] 
                        = __Vtemp_72[1U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] 
                        = __Vtemp_72[2U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] 
                        = __Vtemp_72[3U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last;
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last;
                } else {
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] 
                        = __Vtemp_139[0U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] 
                        = __Vtemp_139[1U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] 
                        = __Vtemp_139[2U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] 
                        = __Vtemp_139[3U];
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt 
                        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x0_last 
                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_i_encrypt_decrypt);
                    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt 
                        = (vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__x1_last 
                           ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_i_encrypt_decrypt);
                }
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s2;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s3;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_encrypt_decrypt_module__DOT__s4;
            }
        }
        if (vlSelfRef.test_ascon_core__DOT__process_en_hash) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out 
                = vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.x0_o;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash 
                = vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.x0_o;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash 
                = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                   ^ (((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                        << 3U) | (QData)((IData)((7U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                             >> 0x3dU)))))) 
                      ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                          << 0x19U) | (QData)((IData)(
                                                      (0x1ffffffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                  >> 0x27U))))))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash 
                = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                   ^ ((((QData)((IData)((0x3ffU & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                        << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                     >> 0xaU)) ^ (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                                                   << 0x2fU) 
                                                  | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                                     >> 0x11U))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash 
                = ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h) 
                   ^ ((((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                        << 0x3fU) | (0x7fffffffffffffffULL 
                                     & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                           >> 1U)))) 
                      ^ (((QData)((IData)((0x3fU & 
                                           (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                          << 0x3aU) | (0x3ffffffffffffffULL 
                                       & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                             >> 6U))))));
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash 
                = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                   ^ ((((QData)((IData)((0x7fU & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                        << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                     >> 7U)) ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                 << 0x17U) 
                                                | (QData)((IData)(
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_hash_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                              >> 0x29U))))))));
        }
        if ((2U & (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[2U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[3U] = 0U;
        } else if ((1U & (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[0U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[1U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[2U] = 0U;
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[3U] = 0U;
        } else {
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[0U] 
                = vlSelfRef.test_ascon_core__DOT__key[0U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[1U] 
                = vlSelfRef.test_ascon_core__DOT__key[1U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[2U] 
                = vlSelfRef.test_ascon_core__DOT__key[2U];
            vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[3U] 
                = vlSelfRef.test_ascon_core__DOT__key[3U];
        }
        if (vlSelfRef.test_ascon_core__DOT__process_en_AE_AM) {
            if ((0U == (IData)(vlSelfRef.test_ascon_core__DOT__sel_type))) {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AE_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x0_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AE_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x1_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AE_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x3_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AE_AM 
                    = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x2_p8;
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AE_AM 
                    = ((0x10U < (vlSelfRef.test_ascon_core__DOT__data_length 
                                 - vlSelfRef.test_ascon_core__DOT__data_position))
                        ? vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x4_p8
                        : (0x8000000000000000ULL ^ vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__x4_p8));
            } else {
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AE_AM 
                    = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                       ^ ((((QData)((IData)((0x7ffffU 
                                             & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                            << 0x2dU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                         >> 0x13U)) 
                          ^ (((QData)((IData)((0xfffffffU 
                                               & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s)))) 
                              << 0x24U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x0_s 
                                           >> 0x1cU))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AE_AM 
                    = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                       ^ (((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                            << 3U) | (QData)((IData)(
                                                     (7U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                 >> 0x3dU)))))) 
                          ^ ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                              << 0x19U) | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x1_s 
                                                                      >> 0x27U))))))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AE_AM 
                    = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                       ^ ((((QData)((IData)((0x3ffU 
                                             & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                            << 0x36U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                         >> 0xaU)) 
                          ^ (((QData)((IData)((0x1ffffU 
                                               & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s)))) 
                              << 0x2fU) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__x3_s 
                                           >> 0x11U))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AE_AM 
                    = ((~ vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h) 
                       ^ ((((QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                            << 0x3fU) | (0x7fffffffffffffffULL 
                                         & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                               >> 1U)))) 
                          ^ (((QData)((IData)((0x3fU 
                                               & (~ (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h))))) 
                              << 0x3aU) | (0x3ffffffffffffffULL 
                                           & (~ (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__h 
                                                 >> 6U))))));
                vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AE_AM 
                    = (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                       ^ ((((QData)((IData)((0x7fU 
                                             & (IData)(vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j)))) 
                            << 0x39U) | (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                         >> 7U)) ^ 
                          ((vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                            << 0x17U) | (QData)((IData)(
                                                        (0x7fffffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__test_ascon_core__DOT__ascon_core_dut__DOT__ascon_process_associated_data_module__DOT__ascon_p12.__PVT__r11__DOT__j 
                                                                    >> 0x29U))))))));
            }
        }
    } else {
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__hash_out = 0ULL;
        vlSelfRef.test_ascon_core__DOT__tag[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__tag[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[0U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[1U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[2U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__encrypt_decrypt_out[3U] = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3 = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4 = 0ULL;
        __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count = 0U;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[0U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[0U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[1U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[1U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[2U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[2U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[3U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[3U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[4U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[4U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[5U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[5U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[6U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[6U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[7U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[7U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[8U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[8U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__zeros_key[9U] 
            = Vtest_ascon_core__ConstPool__CONST_hab76c978_0[9U];
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_hash = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_AE_AM = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x0_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x2_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x3_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x4_o_encrypt_decrypt = 0ULL;
        vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__x1_o_encrypt_decrypt = 0ULL;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.test_ascon_core__DOT__sel_type) 
                     << 1U) | (IData)(vlSelfRef.test_ascon_core__DOT__rst_n));
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__ascon_initialization_module__DOT__IV 
        = Vtest_ascon_core__ConstPool__TABLE_hf251cb18_0
        [__Vtableidx1];
    vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count 
        = __Vdly__test_ascon_core__DOT__ascon_core_dut__DOT__count;
}
