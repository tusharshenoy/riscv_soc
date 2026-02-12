// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_riscv_top.h"

VL_INLINE_OPT void Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0\n"); );
    // Body
    vlSelf->__PVT__u_dport_bridge__DOT__read_complete_w 
        = ((IData)(vlSelf->__PVT__axi_d_arvalid_o) 
           & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
               >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w)));
    vlSelf->__PVT__u_dport_bridge__DOT__write_complete_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w) 
            | (IData)(vlSelf->__PVT__u_dport_bridge__DOT__awvalid_inhibit_q)) 
           & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w) 
               | (IData)(vlSelf->__PVT__u_dport_bridge__DOT__wvalid_inhibit_q)) 
              & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_is_write_w)));
    vlSelf->__PVT__u_dport_bridge__DOT__req_pop_w = 
        ((IData)(vlSelf->__PVT__u_dport_bridge__DOT__read_complete_w) 
         | (IData)(vlSelf->__PVT__u_dport_bridge__DOT__write_complete_w));
}

VL_INLINE_OPT void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q = 0;
    CData/*1:0*/ __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q = 0;
    CData/*1:0*/ __Vdlyvdim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0;
    __Vdlyvdim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 = 0;
    VlWide<3>/*68:0*/ __Vdlyvval__u_dport_bridge__DOT__u_req__DOT__ram_q__v0;
    VL_ZERO_W(69, __Vdlyvval__u_dport_bridge__DOT__u_req__DOT__ram_q__v0);
    CData/*0:0*/ __Vdlyvset__u_dport_bridge__DOT__u_req__DOT__ram_q__v0;
    __Vdlyvset__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*2:0*/ __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q = 0;
    CData/*1:0*/ __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q = 0;
    CData/*1:0*/ __Vdlyvdim0__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0;
    __Vdlyvdim0__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 0;
    SData/*10:0*/ __Vdlyvval__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0;
    __Vdlyvval__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0;
    __Vdlyvset__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 0;
    // Body
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q 
        = vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q 
        = vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q 
        = vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q 
        = vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q 
        = vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
    __Vdlyvset__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q 
        = vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
    __Vdlyvset__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 0U;
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q = 0U;
        vlSelf->__PVT__u_dport_bridge__DOT__wvalid_inhibit_q = 0U;
        vlSelf->__PVT__u_dport_bridge__DOT__awvalid_inhibit_q = 0U;
        vlSelf->__PVT__u_dport_bridge__DOT__request_pending_q = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__u_dport_bridge__DOT__res_push_w) 
              & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__res_accept_w)) 
             & (~ ((IData)(vlSelf->__PVT__dport_bridge_ack_w) 
                   & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__valid_o))))) {
            __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)));
        } else if (((~ ((IData)(vlSelf->__PVT__u_dport_bridge__DOT__res_push_w) 
                        & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__res_accept_w))) 
                    & ((IData)(vlSelf->__PVT__dport_bridge_ack_w) 
                       & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__valid_o)))) {
            __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q 
                = (7U & ((IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_push_w) 
              & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_accept_w)) 
             & (~ ((IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_pop_w) 
                   & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_valid_w))))) {
            __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_push_w) 
                        & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_accept_w))) 
                    & ((IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_pop_w) 
                       & (IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_valid_w)))) {
            __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q 
                = (7U & ((IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_pop_w) 
             & (0U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)))) {
            __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSelf->__PVT__dport_bridge_ack_w) 
             & (0U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)))) {
            __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSelf->__PVT__u_dport_bridge__DOT__req_push_w) 
             & (4U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)))) {
            __Vdlyvval__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[0U] 
                = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                              ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                            << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o))));
            __Vdlyvval__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[1U] 
                = (IData)(((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                               ? 0U
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                             << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o))) 
                           >> 0x20U));
            __Vdlyvval__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[2U] 
                = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o) 
                    << 4U) | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o));
            __Vdlyvset__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 
                = vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
            __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q)));
        }
        if (((IData)(vlSelf->__PVT__u_dport_bridge__DOT__res_push_w) 
             & (4U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)))) {
            __Vdlyvval__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 
                = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                    ? 0x380U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q));
            __Vdlyvset__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 
                = vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
            __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q)));
        }
        if (((((IData)(vlSelf->__PVT__axi_d_wvalid_o) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w)) 
              & (IData)(vlSelf->__PVT__axi_d_awvalid_o)) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w)))) {
            vlSelf->__PVT__u_dport_bridge__DOT__wvalid_inhibit_q = 1U;
        } else if (((IData)(vlSelf->__PVT__axi_d_awvalid_o) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w))) {
            vlSelf->__PVT__u_dport_bridge__DOT__wvalid_inhibit_q = 0U;
        }
        if (((((IData)(vlSelf->__PVT__axi_d_awvalid_o) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w)) 
              & (IData)(vlSelf->__PVT__axi_d_wvalid_o)) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w)))) {
            vlSelf->__PVT__u_dport_bridge__DOT__awvalid_inhibit_q = 1U;
        } else if (((IData)(vlSelf->__PVT__axi_d_wvalid_o) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w))) {
            vlSelf->__PVT__u_dport_bridge__DOT__awvalid_inhibit_q = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_dport_bridge__DOT__write_complete_w) 
             | (IData)(vlSelf->__PVT__u_dport_bridge__DOT__read_complete_w))) {
            vlSelf->__PVT__u_dport_bridge__DOT__request_pending_q = 1U;
        } else if (vlSelf->__PVT__dport_bridge_ack_w) {
            vlSelf->__PVT__u_dport_bridge__DOT__request_pending_q = 0U;
        }
    }
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q 
        = __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q;
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q 
        = __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q;
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q 
        = __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q 
        = __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q;
    if (__Vdlyvset__u_dport_bridge__DOT__u_req__DOT__ram_q__v0) {
        vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__Vdlyvdim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0][0U] 
            = __Vdlyvval__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[0U];
        vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__Vdlyvdim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0][1U] 
            = __Vdlyvval__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[1U];
        vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__Vdlyvdim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0][2U] 
            = __Vdlyvval__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[2U];
    }
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q 
        = __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q 
        = __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q;
    if (__Vdlyvset__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0) {
        vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[__Vdlyvdim0__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0] 
            = __Vdlyvval__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0;
    }
    vlSelf->__PVT__u_dport_bridge__DOT__req_accept_w 
        = (4U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q));
    vlSelf->__PVT__u_dport_bridge__DOT__req_valid_w 
        = (0U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q));
    vlSelf->__PVT__u_dport_bridge__DOT__req_w[0U] = 
        vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][0U];
    vlSelf->__PVT__u_dport_bridge__DOT__req_w[1U] = 
        vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U];
    vlSelf->__PVT__u_dport_bridge__DOT__req_w[2U] = 
        vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U];
    vlSelf->__PVT__u_dport_bridge__DOT__res_accept_w 
        = (4U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q));
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__valid_o 
        = (0U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q));
    vlSelf->__PVT__dport_bridge_accept_w = ((4U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)) 
                                            & (4U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)));
    vlSelf->__PVT__dport_bridge_resp_tag_w = vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
        [vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q];
}

VL_INLINE_OPT void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__1(Vriscv_soc_riscv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__1\n"); );
    // Init
    CData/*0:0*/ u_dport_bridge__DOT____VdfgTmp_hbc4467cd__0;
    u_dport_bridge__DOT____VdfgTmp_hbc4467cd__0 = 0;
    // Body
    u_dport_bridge__DOT____VdfgTmp_hbc4467cd__0 = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o) 
                                                   | (0U 
                                                      != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o)));
    vlSelf->__PVT__u_dport_bridge__DOT__req_push_w 
        = ((IData)(u_dport_bridge__DOT____VdfgTmp_hbc4467cd__0) 
           & (4U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)));
    vlSelf->__PVT__u_dport_bridge__DOT__res_push_w 
        = ((IData)(u_dport_bridge__DOT____VdfgTmp_hbc4467cd__0) 
           & (4U != (IData)(vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)));
}

VL_INLINE_OPT void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__2(Vriscv_soc_riscv_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__2\n"); );
    // Body
    vlSelf->__PVT__dport_bridge_ack_w = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w) 
                                         | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                               >> 1U)));
    vlSelf->__PVT__dport_bridge_error_w = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w)
                                            ? (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r))
                                            : (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r)));
}
