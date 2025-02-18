// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_ascon_encrypt_decrypt__pch.h"
#include "Vtest_ascon_encrypt_decrypt.h"
#include "Vtest_ascon_encrypt_decrypt___024root.h"
#include "Vtest_ascon_encrypt_decrypt_ascon_permutation_p12.h"

// FUNCTIONS
Vtest_ascon_encrypt_decrypt__Syms::~Vtest_ascon_encrypt_decrypt__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtest_ascon_encrypt_decrypt__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtest_ascon_encrypt_decrypt__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtest_ascon_encrypt_decrypt__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtest_ascon_encrypt_decrypt__Syms::Vtest_ascon_encrypt_decrypt__Syms(VerilatedContext* contextp, const char* namep, Vtest_ascon_encrypt_decrypt* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12{this, Verilated::catName(namep, "test_ascon_encrypt_decrypt.ascon_finalization_dut.ascon_p12")}
    , TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12{this, Verilated::catName(namep, "test_ascon_encrypt_decrypt.ascon_initialization_dut.ascon_p12")}
    , TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12{this, Verilated::catName(namep, "test_ascon_encrypt_decrypt.ascon_process_associated_data_dut.ascon_p12")}
{
        // Check resources
        Verilated::stackCheck(964);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12 = &TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12;
    TOP.__PVT__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12 = &TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12;
    TOP.__PVT__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12 = &TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__test_ascon_encrypt_decrypt__DOT__ascon_finalization_dut__DOT__ascon_p12.__Vconfigure(true);
    TOP__test_ascon_encrypt_decrypt__DOT__ascon_initialization_dut__DOT__ascon_p12.__Vconfigure(false);
    TOP__test_ascon_encrypt_decrypt__DOT__ascon_process_associated_data_dut__DOT__ascon_p12.__Vconfigure(false);
}
