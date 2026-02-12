// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_icache.h"

VL_ATTR_COLD void Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__0\n"); );
    // Body
    vlSelf->__PVT__tag_data_in_r = 0U;
    vlSelf->__PVT__tag0_hit_w = ((vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
                                  >> 0x13U) & ((0x7ffffU 
                                                & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q) 
                                               == (vlSelf->__PVT__lookup_addr_q 
                                                   >> 0xdU)));
    vlSelf->__PVT__tag1_hit_w = ((vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
                                  >> 0x13U) & ((0x7ffffU 
                                                & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q) 
                                               == (vlSelf->__PVT__lookup_addr_q 
                                                   >> 0xdU)));
    vlSelf->__PVT__tag0_write_r = 0U;
    vlSelf->__PVT__tag1_write_r = 0U;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__tag_data_in_r = 0U;
        vlSelf->__PVT__tag0_write_r = 1U;
        vlSelf->__PVT__tag1_write_r = 1U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__tag_data_in_r = (0x80000U | 
                                        (vlSelf->__PVT__lookup_addr_q 
                                         >> 0xdU));
        vlSelf->__PVT__tag0_write_r = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                                        & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r)) 
                                       & (~ (IData)(vlSelf->__PVT__replace_way_q)));
        vlSelf->__PVT__tag1_write_r = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                                        & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r)) 
                                       & (IData)(vlSelf->__PVT__replace_way_q));
    }
    vlSelf->__PVT__inst_r = vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q;
    if (vlSelf->__PVT__tag0_hit_w) {
        vlSelf->__PVT__inst_r = vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q;
    } else if (vlSelf->__PVT__tag1_hit_w) {
        vlSelf->__PVT__inst_r = vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q;
    }
    vlSelf->__PVT__tag_hit_any_w = ((IData)(vlSelf->__PVT__tag0_hit_w) 
                                    | (IData)(vlSelf->__PVT__tag1_hit_w));
    vlSelf->__PVT__req_valid_o = ((IData)(vlSelf->__PVT__lookup_valid_q) 
                                  & ((1U == (IData)(vlSelf->__PVT__state_q)) 
                                     & (IData)(vlSelf->__PVT__tag_hit_any_w)));
    vlSelf->__PVT__next_state_r = vlSelf->__PVT__state_q;
    if ((2U & (IData)(vlSelf->__PVT__state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__next_state_r = 1U;
        } else if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r))) {
            vlSelf->__PVT__next_state_r = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_q))) {
        if (((IData)(vlSelf->__PVT__lookup_valid_q) 
             & (~ (IData)(vlSelf->__PVT__tag_hit_any_w)))) {
            vlSelf->__PVT__next_state_r = 2U;
        } else if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q) 
                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))) {
            vlSelf->__PVT__next_state_r = 0U;
        }
    } else if (vlSelf->__PVT__invalidate_q) {
        vlSelf->__PVT__next_state_r = 1U;
    } else if ((0xffU == (IData)(vlSelf->__PVT__flush_addr_q))) {
        vlSelf->__PVT__next_state_r = 1U;
    }
    vlSelf->__PVT__req_accept_o = ((1U == (IData)(vlSelf->__PVT__state_q)) 
                                   & (2U != (IData)(vlSelf->__PVT__next_state_r)));
    vlSelf->__PVT__axi_arvalid_o = (((1U == (IData)(vlSelf->__PVT__state_q)) 
                                     & (2U == (IData)(vlSelf->__PVT__next_state_r))) 
                                    | (IData)(vlSelf->__PVT__axi_arvalid_q));
}
