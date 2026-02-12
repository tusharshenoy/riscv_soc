// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc_icache_data_ram.h"

VL_ATTR_COLD void Vriscv_soc_icache_data_ram___ctor_var_reset(Vriscv_soc_icache_data_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_data_ram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_i = VL_RAND_RESET_I(11);
    vlSelf->__PVT__data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__ram_read_q = VL_RAND_RESET_I(32);
}
