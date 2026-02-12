// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_icache_data_ram.h"

void Vriscv_soc_icache_data_ram___ctor_var_reset(Vriscv_soc_icache_data_ram* vlSelf);

Vriscv_soc_icache_data_ram::Vriscv_soc_icache_data_ram(Vriscv_soc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_soc_icache_data_ram___ctor_var_reset(this);
}

void Vriscv_soc_icache_data_ram::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vriscv_soc_icache_data_ram::~Vriscv_soc_icache_data_ram() {
}
