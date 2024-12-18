// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_ascon_initialization__pch.h"
#include "Vtest_ascon_initialization.h"
#include "Vtest_ascon_initialization___024root.h"

// FUNCTIONS
Vtest_ascon_initialization__Syms::~Vtest_ascon_initialization__Syms()
{
}

Vtest_ascon_initialization__Syms::Vtest_ascon_initialization__Syms(VerilatedContext* contextp, const char* namep, Vtest_ascon_initialization* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(20);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
