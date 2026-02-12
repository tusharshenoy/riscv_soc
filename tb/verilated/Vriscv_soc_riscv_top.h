// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_RISCV_TOP_H_
#define VERILATED_VRISCV_SOC_RISCV_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_soc_icache;
class Vriscv_soc_riscv_core;


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_riscv_top final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_soc_riscv_core* u_core;
    Vriscv_soc_icache* u_icache;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__axi_i_awready_i,0,0);
        VL_IN8(__PVT__axi_i_wready_i,0,0);
        VL_IN8(__PVT__axi_i_bvalid_i,0,0);
        VL_IN8(__PVT__axi_i_bresp_i,1,0);
        VL_IN8(__PVT__axi_i_bid_i,3,0);
        VL_IN8(__PVT__axi_i_arready_i,0,0);
        VL_IN8(__PVT__axi_i_rvalid_i,0,0);
        VL_IN8(__PVT__axi_i_rresp_i,1,0);
        VL_IN8(__PVT__axi_i_rid_i,3,0);
        VL_IN8(__PVT__axi_i_rlast_i,0,0);
        VL_IN8(__PVT__axi_d_awready_i,0,0);
        VL_IN8(__PVT__axi_d_wready_i,0,0);
        VL_IN8(__PVT__axi_d_bvalid_i,0,0);
        VL_IN8(__PVT__axi_d_bresp_i,1,0);
        VL_IN8(__PVT__axi_d_bid_i,3,0);
        VL_IN8(__PVT__axi_d_arready_i,0,0);
        VL_IN8(__PVT__axi_d_rvalid_i,0,0);
        VL_IN8(__PVT__axi_d_rresp_i,1,0);
        VL_IN8(__PVT__axi_d_rid_i,3,0);
        VL_IN8(__PVT__axi_d_rlast_i,0,0);
        VL_IN8(__PVT__intr_i,0,0);
        VL_OUT8(__PVT__axi_i_awvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_awid_o,3,0);
        VL_OUT8(__PVT__axi_i_awlen_o,7,0);
        VL_OUT8(__PVT__axi_i_awburst_o,1,0);
        VL_OUT8(__PVT__axi_i_wvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_wstrb_o,3,0);
        VL_OUT8(__PVT__axi_i_wlast_o,0,0);
        VL_OUT8(__PVT__axi_i_bready_o,0,0);
        VL_OUT8(__PVT__axi_i_arvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_arid_o,3,0);
        VL_OUT8(__PVT__axi_i_arlen_o,7,0);
        VL_OUT8(__PVT__axi_i_arburst_o,1,0);
        VL_OUT8(__PVT__axi_i_rready_o,0,0);
        VL_OUT8(__PVT__axi_d_awvalid_o,0,0);
        VL_OUT8(__PVT__axi_d_awid_o,3,0);
        VL_OUT8(__PVT__axi_d_awlen_o,7,0);
        VL_OUT8(__PVT__axi_d_awburst_o,1,0);
        VL_OUT8(__PVT__axi_d_wvalid_o,0,0);
        VL_OUT8(__PVT__axi_d_wstrb_o,3,0);
        VL_OUT8(__PVT__axi_d_wlast_o,0,0);
        VL_OUT8(__PVT__axi_d_bready_o,0,0);
        VL_OUT8(__PVT__axi_d_arvalid_o,0,0);
        VL_OUT8(__PVT__axi_d_arid_o,3,0);
        VL_OUT8(__PVT__axi_d_arlen_o,7,0);
        VL_OUT8(__PVT__axi_d_arburst_o,1,0);
        VL_OUT8(__PVT__axi_d_rready_o,0,0);
        CData/*0:0*/ __PVT__dport_bridge_accept_w;
        CData/*0:0*/ __PVT__dport_bridge_error_w;
        CData/*0:0*/ __PVT__dport_bridge_ack_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__res_accept_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__req_accept_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__write_complete_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__read_complete_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__request_pending_q;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__req_pop_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__req_valid_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__req_push_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__res_push_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__req_is_write_w;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__awvalid_inhibit_q;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__wvalid_inhibit_q;
    };
    struct {
        CData/*1:0*/ __PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q;
        CData/*1:0*/ __PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
        CData/*2:0*/ __PVT__u_dport_bridge__DOT__u_req__DOT__count_q;
        CData/*0:0*/ __PVT__u_dport_bridge__DOT__u_resp__DOT__valid_o;
        CData/*1:0*/ __PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q;
        CData/*1:0*/ __PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
        CData/*2:0*/ __PVT__u_dport_bridge__DOT__u_resp__DOT__count_q;
        SData/*10:0*/ __PVT__dport_bridge_resp_tag_w;
        VL_IN(__PVT__axi_i_rdata_i,31,0);
        VL_IN(__PVT__axi_d_rdata_i,31,0);
        VL_IN(__PVT__reset_vector_i,31,0);
        VL_OUT(__PVT__axi_i_awaddr_o,31,0);
        VL_OUT(__PVT__axi_i_wdata_o,31,0);
        VL_OUT(__PVT__axi_i_araddr_o,31,0);
        VL_OUT(__PVT__axi_d_awaddr_o,31,0);
        VL_OUT(__PVT__axi_d_wdata_o,31,0);
        VL_OUT(__PVT__axi_d_araddr_o,31,0);
        VlWide<3>/*68:0*/ __PVT__u_dport_bridge__DOT__req_w;
        VlUnpacked<VlWide<3>/*68:0*/, 4> __PVT__u_dport_bridge__DOT__u_req__DOT__ram_q;
        VlUnpacked<SData/*10:0*/, 4> __PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q;
    };

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_soc_riscv_top(Vriscv_soc__Syms* symsp, const char* v__name);
    ~Vriscv_soc_riscv_top();
    VL_UNCOPYABLE(Vriscv_soc_riscv_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
