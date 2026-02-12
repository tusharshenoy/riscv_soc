// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc___024root.h"

VL_ATTR_COLD void Vriscv_soc_riscv_soc___eval_initial__TOP__riscv_soc(Vriscv_soc_riscv_soc* vlSelf);

VL_ATTR_COLD void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_initial\n"); );
    // Body
    Vriscv_soc_riscv_soc___eval_initial__TOP__riscv_soc((&vlSymsp->TOP__riscv_soc));
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0 
        = vlSelf->__Vcellinp__riscv_soc__clk_i;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0 
        = vlSelf->__Vcellinp__riscv_soc__rst_i;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0 
        = vlSelf->__Vcellinp__riscv_soc__rst_cpu_i;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__stl(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___eval_triggers__stl(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vriscv_soc___024root___stl_sequent__TOP__0(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___stl_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__clk_i, vlSelf->clk_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__rst_i, vlSelf->rst_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__reset_vector_i, vlSelf->reset_vector_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__rst_cpu_i, vlSelf->rst_cpu_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__uart_txd_i, vlSelf->uart_txd_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__gpio_input_i, vlSelf->gpio_input_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_awready_i, vlSelf->mem_awready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_wready_i, vlSelf->mem_wready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_bvalid_i, vlSelf->mem_bvalid_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__riscv_soc__mem_bresp_i, vlSelf->mem_bresp_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__riscv_soc__mem_bid_i, vlSelf->mem_bid_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_arready_i, vlSelf->mem_arready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_rvalid_i, vlSelf->mem_rvalid_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__mem_rdata_i, vlSelf->mem_rdata_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__riscv_soc__mem_rresp_i, vlSelf->mem_rresp_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__riscv_soc__mem_rid_i, vlSelf->mem_rid_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_rlast_i, vlSelf->mem_rlast_i);
    VL_ASSIGN_SII(1,vlSelf->spi_clk_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q);
    VL_ASSIGN_SII(1,vlSelf->spi_mosi_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q);
    VL_ASSIGN_SII(1,vlSelf->spi_cs_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q);
    VL_ASSIGN_SII(1,vlSelf->uart_rxd_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q);
    VL_ASSIGN_SUI(32,vlSelf->gpio_output_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q);
    VL_ASSIGN_SUI(32,vlSelf->gpio_output_enable_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q);
    VL_ASSIGN_SII(1,vlSelf->mem_awvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->mem_wvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->mem_bready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->mem_arvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlSelf->mem_rready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)));
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__inport_wdata_i, vlSelf->inport_wdata_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__riscv_soc__inport_wstrb_i, vlSelf->inport_wstrb_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__spi_miso_i, vlSelf->spi_miso_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_bready_i, vlSelf->inport_bready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_rready_i, vlSelf->inport_rready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_wvalid_i, vlSelf->inport_wvalid_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__inport_awaddr_i, vlSelf->inport_awaddr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_awvalid_i, vlSelf->inport_awvalid_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__inport_araddr_i, vlSelf->inport_araddr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_arvalid_i, vlSelf->inport_arvalid_i);
}

VL_ATTR_COLD void Vriscv_soc___024root___stl_sequent__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___stl_sequent__TOP__1\n"); );
    // Body
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
    VL_ASSIGN_SUI(2,vlSelf->inport_rresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r);
    VL_ASSIGN_SUI(32,vlSelf->inport_rdata_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r);
    VL_ASSIGN_SII(1,vlSelf->inport_rvalid_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)));
}

VL_ATTR_COLD void Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_top___stl_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_exec___stl_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf);
VL_ATTR_COLD void Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__1(Vriscv_soc_riscv_regfile* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__1(Vriscv_soc_riscv_soc* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_top___stl_sequent__TOP__riscv_soc__u_core__1(Vriscv_soc_riscv_top* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc___024root___ico_sequent__TOP__1(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc_riscv_decode* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__2(Vriscv_soc_icache* vlSelf);

VL_ATTR_COLD void Vriscv_soc___024root___eval_stl(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vriscv_soc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__0((&vlSymsp->TOP__riscv_soc));
        Vriscv_soc_riscv_top___stl_sequent__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__0((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_exec___stl_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile));
        Vriscv_soc___024root___stl_sequent__TOP__1(vlSelf);
        Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__1((&vlSymsp->TOP__riscv_soc));
        Vriscv_soc_riscv_top___stl_sequent__TOP__riscv_soc__u_core__1((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__1((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc___024root___ico_sequent__TOP__1(vlSelf);
        Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__2((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__3((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__2((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
    }
}
