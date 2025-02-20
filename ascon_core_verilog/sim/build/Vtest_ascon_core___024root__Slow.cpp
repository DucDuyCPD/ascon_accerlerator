// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core__Syms.h"
#include "Vtest_ascon_core___024root.h"

void Vtest_ascon_core___024root___ctor_var_reset(Vtest_ascon_core___024root* vlSelf);

Vtest_ascon_core___024root::Vtest_ascon_core___024root(Vtest_ascon_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_ascon_core___024root___ctor_var_reset(this);
}

void Vtest_ascon_core___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_ascon_core___024root::~Vtest_ascon_core___024root() {
}
