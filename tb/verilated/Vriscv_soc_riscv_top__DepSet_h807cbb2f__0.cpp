// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc_riscv_top.h"

VL_INLINE_OPT void Vriscv_soc_riscv_top___nba_comb__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___nba_comb__TOP__riscv_soc__u_core__0\n"); );
    // Init
    CData/*0:0*/ u_dport_bridge__DOT____VdfgTmp_h4ca7c2de__0;
    u_dport_bridge__DOT____VdfgTmp_h4ca7c2de__0 = 0;
    // Body
    u_dport_bridge__DOT____VdfgTmp_h4ca7c2de__0 = (
                                                   (~ 
                                                    ((~ (IData)(vlSelf->__PVT__dport_bridge_ack_w)) 
                                                     & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__request_pending_q))) 
                                                   & (0U 
                                                      != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)));
    vlSelf->__PVT__u_dport_bridge__DOT__req_is_write_w 
        = ((~ (vlSelf->__PVT__u_dport_bridge__DOT__req_w[2U] 
               >> 4U)) & (IData)(u_dport_bridge__DOT____VdfgTmp_h4ca7c2de__0));
    vlSelf->__PVT__axi_d_arvalid_o = ((IData)(u_dport_bridge__DOT____VdfgTmp_h4ca7c2de__0) 
                                      & (vlSelf->__PVT__u_dport_bridge__DOT__req_w[2U] 
                                         >> 4U));
    vlSelf->__PVT__axi_d_wvalid_o = ((~ (IData)(vlSelf->__PVT__u_dport_bridge__DOT__wvalid_inhibit_q)) 
                                     & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_is_write_w));
    vlSelf->__PVT__axi_d_awvalid_o = ((~ (IData)(vlSelf->__PVT__u_dport_bridge__DOT__awvalid_inhibit_q)) 
                                      & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_is_write_w));
}
