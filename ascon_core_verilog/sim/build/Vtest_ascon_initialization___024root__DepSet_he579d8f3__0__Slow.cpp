// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_initialization.h for the primary calling header

#include "Vtest_ascon_initialization__pch.h"
#include "Vtest_ascon_initialization__Syms.h"
#include "Vtest_ascon_initialization___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_initialization___024root___dump_triggers__stl(Vtest_ascon_initialization___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_ascon_initialization___024root___eval_triggers__stl(Vtest_ascon_initialization___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_initialization__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_initialization___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_initialization___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
