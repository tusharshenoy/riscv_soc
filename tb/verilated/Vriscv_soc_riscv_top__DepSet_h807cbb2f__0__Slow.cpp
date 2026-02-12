// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc_riscv_top.h"

VL_ATTR_COLD void Vriscv_soc_riscv_top___ctor_var_reset(Vriscv_soc_riscv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_awready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_wready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_bvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_bresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_i_bid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_arready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_rresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_i_rid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_rlast_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_awready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_wready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_bvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_bresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_d_bid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_arready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_d_rresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_d_rid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_rlast_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_vector_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_awvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_awaddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_awid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_awlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_i_awburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_i_wvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_wstrb_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_wlast_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_bready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_arvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_araddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_arid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_arlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_i_arburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_i_rready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_awvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_awaddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_d_awid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_awlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_d_awburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_d_wvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_d_wstrb_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_wlast_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_bready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_arvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_araddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_d_arid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_arlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_d_arburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_d_rready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_bridge_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_bridge_resp_tag_w = VL_RAND_RESET_I(11);
    vlSelf->__PVT__dport_bridge_error_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dport_bridge_ack_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__res_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__req_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__write_complete_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__read_complete_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__request_pending_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__req_pop_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__req_valid_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(69, vlSelf->__PVT__u_dport_bridge__DOT__req_w);
    vlSelf->__PVT__u_dport_bridge__DOT__req_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__res_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__req_is_write_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__awvalid_inhibit_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dport_bridge__DOT__wvalid_inhibit_q = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(69, vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__Vi0]);
    }
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__valid_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q = VL_RAND_RESET_I(3);
}
