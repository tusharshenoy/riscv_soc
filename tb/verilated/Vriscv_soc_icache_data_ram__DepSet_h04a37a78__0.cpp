// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_icache_data_ram.h"

VL_INLINE_OPT void Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__0(Vriscv_soc_icache_data_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__0\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__ram__v0;
    __Vdlyvdim0__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ram__v0;
    __Vdlyvval__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    __Vdlyvset__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    if (((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w))) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r;
    }
    vlSelf->__PVT__ram_read_q = vlSelf->ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r];
    if (__Vdlyvset__ram__v0) {
        vlSelf->ram[__Vdlyvdim0__ram__v0] = __Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__0(Vriscv_soc_icache_data_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__0\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__ram__v0;
    __Vdlyvdim0__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ram__v0;
    __Vdlyvval__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    __Vdlyvset__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q))) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r;
    }
    vlSelf->__PVT__ram_read_q = vlSelf->ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r];
    if (__Vdlyvset__ram__v0) {
        vlSelf->ram[__Vdlyvdim0__ram__v0] = __Vdlyvval__ram__v0;
    }
}
