// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_soc___024root___eval_triggers__ico(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vriscv_soc___024root___ico_sequent__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ico_sequent__TOP__1\n"); );
    // Body
    VL_ASSIGN_SII(1,vlSelf->inport_arready_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w)));
    VL_ASSIGN_SII(1,vlSelf->inport_wready_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w)));
    VL_ASSIGN_SII(1,vlSelf->inport_awready_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                               & (IData)(vlSymsp->TOP__riscv_soc.u_soc__DOT__u_arb__DOT____VdfgTmp_h68b34a03__0)));
}

void Vriscv_soc___024root___ico_sequent__TOP__0(Vriscv_soc___024root* vlSelf);
void Vriscv_soc_riscv_soc___ico_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);

void Vriscv_soc___024root___eval_ico(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vriscv_soc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vriscv_soc_riscv_soc___ico_sequent__TOP__riscv_soc__0((&vlSymsp->TOP__riscv_soc));
        Vriscv_soc___024root___ico_sequent__TOP__1(vlSelf);
        Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_soc___024root___eval_triggers__act(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->__Vcellinp__riscv_soc__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0))) 
                                     | ((IData)(vlSelf->__Vcellinp__riscv_soc__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->__Vcellinp__riscv_soc__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0))) 
                                     | ((IData)(vlSelf->__Vcellinp__riscv_soc__rst_cpu_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0)))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->__Vcellinp__riscv_soc__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0))));
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0 
        = vlSelf->__Vcellinp__riscv_soc__clk_i;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0 
        = vlSelf->__Vcellinp__riscv_soc__rst_i;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0 
        = vlSelf->__Vcellinp__riscv_soc__rst_cpu_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vriscv_soc___024root___nba_sequent__TOP__0(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___nba_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_SII(1,vlSelf->mem_wvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->mem_awvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->mem_arvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->spi_clk_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q);
    VL_ASSIGN_SII(1,vlSelf->mem_bready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->mem_rready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->uart_rxd_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q);
    VL_ASSIGN_SUI(32,vlSelf->gpio_output_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q);
    VL_ASSIGN_SII(1,vlSelf->spi_cs_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q);
    VL_ASSIGN_SII(1,vlSelf->spi_mosi_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q);
    VL_ASSIGN_SUI(32,vlSelf->mem_wdata_o, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w));
    VL_ASSIGN_SUI(4,vlSelf->mem_wstrb_o, (0xfU & (IData)(
                                                         (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
                                                          >> 0x20U))));
    VL_ASSIGN_SII(1,vlSelf->mem_wlast_o, (1U & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
                                                        >> 0x24U))));
    VL_ASSIGN_SUI(32,vlSelf->mem_awaddr_o, (IData)(
                                                   (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                    >> 0xeU)));
    VL_ASSIGN_SUI(4,vlSelf->mem_awid_o, (0xfU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                         >> 0xaU))));
    VL_ASSIGN_SUI(8,vlSelf->mem_awlen_o, (0xffU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                           >> 2U))));
    VL_ASSIGN_SUI(2,vlSelf->mem_awburst_o, (3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w)));
    VL_ASSIGN_SUI(32,vlSelf->mem_araddr_o, (IData)(
                                                   (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                    >> 0xeU)));
    VL_ASSIGN_SUI(4,vlSelf->mem_arid_o, (0xfU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                         >> 0xaU))));
    VL_ASSIGN_SUI(8,vlSelf->mem_arlen_o, (0xffU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                           >> 2U))));
    VL_ASSIGN_SUI(2,vlSelf->mem_arburst_o, (3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w)));
    VL_ASSIGN_SUI(2,vlSelf->inport_bresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r);
    VL_ASSIGN_SII(1,vlSelf->inport_bvalid_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)));
    VL_ASSIGN_SUI(32,vlSelf->gpio_output_enable_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q);
    VL_ASSIGN_SII(1,vlSelf->inport_rvalid_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)));
}

VL_INLINE_OPT void Vriscv_soc___024root___nba_sequent__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___nba_sequent__TOP__1\n"); );
    // Body
    VL_ASSIGN_SUI(32,vlSelf->inport_rdata_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r);
    VL_ASSIGN_SUI(2,vlSelf->inport_rresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r);
}

void Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__0(Vriscv_soc_icache_tag_ram* vlSelf);
void Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__0(Vriscv_soc_icache_tag_ram* vlSelf);
void Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__0(Vriscv_soc_icache_data_ram* vlSelf);
void Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__0(Vriscv_soc_icache_data_ram* vlSelf);
void Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);
void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0(Vriscv_soc_riscv_regfile* vlSelf);
void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__1(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__1(Vriscv_soc_riscv_top* vlSelf);
void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__1(Vriscv_soc_riscv_regfile* vlSelf);
void Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__1(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__2(Vriscv_soc_riscv_top* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__1(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_top___nba_comb__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);
void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_soc___nba_comb__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__2(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__3(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__4(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_soc___nba_comb__TOP__riscv_soc__1(Vriscv_soc_riscv_soc* vlSelf);

void Vriscv_soc___024root___eval_nba(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1));
        Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0));
        Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__0((&vlSymsp->TOP__riscv_soc));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vriscv_soc___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__0((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile));
        Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__1((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__1((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__2((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__3((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__1((&vlSymsp->TOP__riscv_soc));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__2((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__0((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__1((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__1((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_top___nba_comb__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_soc___nba_comb__TOP__riscv_soc__0((&vlSymsp->TOP__riscv_soc));
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__2((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__3((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__2((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__3((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__4((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_soc___nba_comb__TOP__riscv_soc__1((&vlSymsp->TOP__riscv_soc));
        Vriscv_soc___024root___ico_sequent__TOP__1(vlSelf);
        Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
    }
}
