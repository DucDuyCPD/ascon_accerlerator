// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_ascon_permutation__pch.h"
#include "Vtest_ascon_permutation.h"
#include "Vtest_ascon_permutation___024root.h"

// FUNCTIONS
Vtest_ascon_permutation__Syms::~Vtest_ascon_permutation__Syms()
{
}

Vtest_ascon_permutation__Syms::Vtest_ascon_permutation__Syms(VerilatedContext* contextp, const char* namep, Vtest_ascon_permutation* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
