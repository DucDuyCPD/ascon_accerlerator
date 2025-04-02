// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core__Syms.h"
#include "Vtest_ascon_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__act(Vtest_ascon_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_ascon_core___024root___eval_triggers__act(Vtest_ascon_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_triggers__act\n"); );
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.test_ascon_core__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.test_ascon_core__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__ascon_core_dut__DOT__count__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__clk__0 
        = vlSelfRef.test_ascon_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__rst_n__0 
        = vlSelfRef.test_ascon_core__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__test_ascon_core__DOT__ascon_core_dut__DOT__count__0 
        = vlSelfRef.test_ascon_core__DOT__ascon_core_dut__DOT__count;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}
