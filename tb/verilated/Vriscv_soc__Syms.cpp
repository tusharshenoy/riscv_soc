// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc.h"
#include "Vriscv_soc___024root.h"
#include "Vriscv_soc_riscv_soc.h"
#include "Vriscv_soc_riscv_top.h"
#include "Vriscv_soc_riscv_core.h"
#include "Vriscv_soc_icache.h"
#include "Vriscv_soc_riscv_exec.h"
#include "Vriscv_soc_riscv_decode.h"
#include "Vriscv_soc_icache_tag_ram.h"
#include "Vriscv_soc_icache_data_ram.h"
#include "Vriscv_soc_riscv_regfile.h"

// FUNCTIONS
Vriscv_soc__Syms::~Vriscv_soc__Syms()
{
}

Vriscv_soc__Syms::Vriscv_soc__Syms(VerilatedContext* contextp, const char* namep, Vriscv_soc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__riscv_soc{this, Verilated::catName(namep, "riscv_soc")}
    , TOP__riscv_soc__u_core{this, Verilated::catName(namep, "riscv_soc.u_core")}
    , TOP__riscv_soc__u_core__u_core{this, Verilated::catName(namep, "riscv_soc.u_core.u_core")}
    , TOP__riscv_soc__u_core__u_core__u_decode{this, Verilated::catName(namep, "riscv_soc.u_core.u_core.u_decode")}
    , TOP__riscv_soc__u_core__u_core__u_decode__u_regfile{this, Verilated::catName(namep, "riscv_soc.u_core.u_core.u_decode.u_regfile")}
    , TOP__riscv_soc__u_core__u_core__u_exec{this, Verilated::catName(namep, "riscv_soc.u_core.u_core.u_exec")}
    , TOP__riscv_soc__u_core__u_icache{this, Verilated::catName(namep, "riscv_soc.u_core.u_icache")}
    , TOP__riscv_soc__u_core__u_icache__u_data0{this, Verilated::catName(namep, "riscv_soc.u_core.u_icache.u_data0")}
    , TOP__riscv_soc__u_core__u_icache__u_data1{this, Verilated::catName(namep, "riscv_soc.u_core.u_icache.u_data1")}
    , TOP__riscv_soc__u_core__u_icache__u_tag0{this, Verilated::catName(namep, "riscv_soc.u_core.u_icache.u_tag0")}
    , TOP__riscv_soc__u_core__u_icache__u_tag1{this, Verilated::catName(namep, "riscv_soc.u_core.u_icache.u_tag1")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.riscv_soc = &TOP__riscv_soc;
    TOP__riscv_soc.u_core = &TOP__riscv_soc__u_core;
    TOP__riscv_soc__u_core.u_core = &TOP__riscv_soc__u_core__u_core;
    TOP__riscv_soc__u_core__u_core.u_decode = &TOP__riscv_soc__u_core__u_core__u_decode;
    TOP__riscv_soc__u_core__u_core__u_decode.u_regfile = &TOP__riscv_soc__u_core__u_core__u_decode__u_regfile;
    TOP__riscv_soc__u_core__u_core.u_exec = &TOP__riscv_soc__u_core__u_core__u_exec;
    TOP__riscv_soc__u_core.u_icache = &TOP__riscv_soc__u_core__u_icache;
    TOP__riscv_soc__u_core__u_icache.u_data0 = &TOP__riscv_soc__u_core__u_icache__u_data0;
    TOP__riscv_soc__u_core__u_icache.u_data1 = &TOP__riscv_soc__u_core__u_icache__u_data1;
    TOP__riscv_soc__u_core__u_icache.u_tag0 = &TOP__riscv_soc__u_core__u_icache__u_tag0;
    TOP__riscv_soc__u_core__u_icache.u_tag1 = &TOP__riscv_soc__u_core__u_icache__u_tag1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__riscv_soc.__Vconfigure(true);
    TOP__riscv_soc__u_core.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_core.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_core__u_decode.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_core__u_exec.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_icache.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_icache__u_data0.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_icache__u_data1.__Vconfigure(false);
    TOP__riscv_soc__u_core__u_icache__u_tag0.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_icache__u_tag1.__Vconfigure(false);
    // Setup scopes
    __Vscope_riscv_soc__u_core__u_icache__u_data0.configure(this, name(), "riscv_soc.u_core.u_icache.u_data0", "u_data0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_soc__u_core__u_icache__u_data1.configure(this, name(), "riscv_soc.u_core.u_icache.u_data1", "u_data1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_soc__u_core__u_icache__u_tag0.configure(this, name(), "riscv_soc.u_core.u_icache.u_tag0", "u_tag0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_soc__u_core__u_icache__u_tag1.configure(this, name(), "riscv_soc.u_core.u_icache.u_tag1", "u_tag1", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_riscv_soc__u_core__u_icache__u_data0.varInsert(__Vfinal,"ram", &(TOP__riscv_soc__u_core__u_icache__u_data0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
        __Vscope_riscv_soc__u_core__u_icache__u_data1.varInsert(__Vfinal,"ram", &(TOP__riscv_soc__u_core__u_icache__u_data1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
        __Vscope_riscv_soc__u_core__u_icache__u_tag0.varInsert(__Vfinal,"ram", &(TOP__riscv_soc__u_core__u_icache__u_tag0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,19,0 ,255,0);
        __Vscope_riscv_soc__u_core__u_icache__u_tag1.varInsert(__Vfinal,"ram", &(TOP__riscv_soc__u_core__u_icache__u_tag1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,19,0 ,255,0);
    }
}
