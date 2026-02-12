// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_riscv_soc.h"

VL_ATTR_COLD void Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__0\n"); );
    // Body
    vlSelf->mem_awvalid_o = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__axi_retime_awready_w 
        = (2U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q));
    vlSelf->mem_wvalid_o = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__axi_retime_wready_w 
        = (2U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q));
    vlSelf->mem_bready_o = (2U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__axi_retime_bvalid_w 
        = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
    vlSelf->mem_arvalid_o = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__axi_retime_arready_w 
        = (2U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q));
    vlSelf->mem_rready_o = (2U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__axi_retime_rvalid_w 
        = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_sample_w 
        = (0U == vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_count_q);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_sample_w 
        = (0U == vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_count_q);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_ready_w 
        = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_accept_w 
        = (4U != (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rx_ready_w 
        = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rx_accept_w 
        = (4U != (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w 
        = ((0xaU == vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
           | (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w 
        = ((0xaU == vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
           | (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__txd_r = 1U;
    if (vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) {
        vlSelf->__PVT__u_soc__DOT__u_uart__DOT__txd_r 
            = ((0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
               & (((9U == (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                   | (0xaU == (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q))) 
                  | (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q)));
    }
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
        = vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_q;
    if (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q) {
        vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
            = (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_q 
               | vlSelf->__PVT__u_soc__DOT__u_spi__DOT__wr_data_q);
    } else if (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q) {
        vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
            = (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_q 
               & (~ vlSelf->__PVT__u_soc__DOT__u_spi__DOT__wr_data_q));
    } else if (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q) {
        vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
            = vlSelf->__PVT__u_soc__DOT__u_spi__DOT__wr_data_q;
    }
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w 
        = vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
        [vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q];
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q));
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
        = vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
        [vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q];
    vlSelf->u_soc__DOT__u_gpio__DOT____VdfgTmp_h45748cda__0 
        = ((~ vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q) 
           ^ vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__input_q);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
        = vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
        [vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q];
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
        = vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
        [vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q];
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__start_w 
        = (((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
            & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)) 
               & (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q))) 
           & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__active_q)) 
              & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__done_q)) 
                 & (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))));
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w 
        = vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
        [vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q];
    if ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        if ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r 
                = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r 
                = (3U & ((IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w) 
                         >> 4U));
        } else {
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r 
                = ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q)
                    : (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r 
                = (3U & 0U);
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r 
            = ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                ? (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__bvalid_q)
                : (IData)(vlSelf->__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r 
            = (3U & 0U);
    } else if ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r 
            = vlSelf->__PVT__u_soc__DOT__u_intc__DOT__bvalid_q;
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r 
            = (3U & 0U);
    } else {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r 
            = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r 
            = (3U & ((IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w) 
                     >> 4U));
    }
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
        = vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
        [vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q];
    if ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
        if ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
                = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
                = (3U & (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                 >> 5U)));
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                = (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                           >> 7U));
        } else {
            if ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
                vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
                    = vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q;
                vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                    = vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q;
            } else {
                vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
                    = vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rvalid_q;
                vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                    = vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rd_data_q;
            }
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
                = (3U & 0U);
        }
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r 
            = ((1U & (~ ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                         >> 1U))) || (1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w)));
    } else {
        if ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            if ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
                vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
                    = vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rvalid_q;
                vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                    = vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rd_data_q;
            } else {
                vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
                    = vlSelf->__PVT__u_soc__DOT__u_timer__DOT__rvalid_q;
                vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                    = vlSelf->__PVT__u_soc__DOT__u_timer__DOT__rd_data_q;
            }
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
                = (3U & 0U);
        } else if ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
                = vlSelf->__PVT__u_soc__DOT__u_intc__DOT__rvalid_q;
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
                = (3U & 0U);
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                = vlSelf->__PVT__u_soc__DOT__u_intc__DOT__rd_data_q;
        } else {
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
                = (0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
                = (3U & (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                 >> 5U)));
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                = (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                           >> 7U));
        }
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r 
            = ((1U & ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                      >> 1U)) || ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q)) 
                                  || (1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w))));
    }
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__miso_w = 
        ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
          ? (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
          : (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__spi_miso_i));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q)
            ? ((0x80U & ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                         << 7U)) | ((0x40U & ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                              << 5U)) 
                                    | ((0x20U & ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                 << 3U)) 
                                       | ((0x10U & 
                                           ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                            << 1U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                               >> 1U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                    >> 3U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                         >> 7U)))))))))
            : (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w));
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
        = vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q;
    if (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q) {
        vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            = (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
               & (~ vlSelf->__PVT__u_soc__DOT__u_spi__DOT__wr_data_q));
    }
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
        = ((vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            | ((~ vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
               & vlSelf->u_soc__DOT__u_gpio__DOT____VdfgTmp_h45748cda__0)) 
           | ((vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
               ^ vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__input_q) 
              & (vlSelf->u_soc__DOT__u_gpio__DOT____VdfgTmp_h45748cda__0 
                 & vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)));
    if (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q) {
        vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            = (vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
               | vlSelf->__PVT__u_soc__DOT__u_spi__DOT__wr_data_q);
    }
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__sample_r = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__start_w)))) {
        if (((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__active_q) 
             & (0U == vlSelf->__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
            if (((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                 == (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q))) {
                vlSelf->__PVT__u_soc__DOT__u_spi__DOT__sample_r = 1U;
            }
        }
    }
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__drive_r = 0U;
    if (vlSelf->__PVT__u_soc__DOT__u_spi__DOT__start_w) {
        vlSelf->__PVT__u_soc__DOT__u_spi__DOT__drive_r 
            = (1U & (~ (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q)));
    } else if (((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                & (0U == vlSelf->__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
        if (((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
             != (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q))) {
            vlSelf->__PVT__u_soc__DOT__u_spi__DOT__drive_r 
                = ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                   | ((0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                      & (0xfU != (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__bit_count_q))));
        }
    }
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r = 0U;
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r 
        = ((8U & ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                   ? ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                       : (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                   : ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                       : ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
            ? ((4U & ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                           : (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                       : ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                               : (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
                ? (8U | (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))
                : (4U | (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)))
            : ((4U & ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                           : (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                       : ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                               : (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
                ? (2U | (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))
                : (1U | (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r = 0U;
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r 
        = ((8U & ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                   ? ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                  >> 1U)) : (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                   : ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                       : ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                           : (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                      >> 1U)))))) ? 
           ((4U & ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                        ? (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                   >> 1U)) : (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                    : ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                        ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                        : ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                            ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                            : (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                       >> 1U)))))) ? 
            (8U | (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))
             : (4U | (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)))
            : ((4U & ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                      >> 1U)) : (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                       : ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                           : ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                               ? (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                               : (IData)((vlSelf->__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                          >> 1U))))))
                ? (2U | (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))
                : (1U | (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))));
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_bready_w 
        = (0U != ((2U | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_bready_i)) 
                  & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)));
    vlSelf->__PVT__axi4_d_bvalid_w = ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                      & ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                         >> 1U));
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_rready_w 
        = (0U != ((6U | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_rready_i)) 
                  & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)));
    vlSelf->__PVT__axi4_i_rvalid_w = ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                      & ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                         >> 2U));
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__axi_arb_out_bready_w) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r));
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
           & ((IData)(vlSelf->__PVT__u_soc__DOT__axi_arb_out_rready_w) 
              & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r)));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vriscv_soc__ConstPool__TABLE_h592d7e8a_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vriscv_soc__ConstPool__TABLE_h1437899e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vriscv_soc__ConstPool__TABLE_h661409f0_0;

VL_ATTR_COLD void Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__1(Vriscv_soc_riscv_soc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__1\n"); );
    // Init
    CData/*0:0*/ u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0;
    u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0 = 0;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request;
    __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request = 0;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request;
    __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request = 0;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request;
    __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request = 0;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request;
    __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_req_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o) 
            << 1U) | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o) 
            << 2U) | (((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_arvalid_o) 
                       << 1U) | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i)));
    __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request 
        = vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_req_w;
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xeU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (1U & (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request)));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xdU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (2U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request)))));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xbU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (4U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request))));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((7U & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (8U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request))));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w 
        = vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout;
    __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_req_w) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xeU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (1U & (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request)));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xdU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (2U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request)))));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xbU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (4U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request))));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((7U & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (8U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request))));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w 
        = vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout;
    __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request 
        = vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_req_w;
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xeU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (1U & (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request)));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xdU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (2U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request)))));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xbU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (4U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request))));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((7U & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (8U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request))));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w 
        = vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout;
    __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_req_w) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xeU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (1U & (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request)));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xdU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (2U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request)))));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xbU & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (4U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request))));
    vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((7U & (IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (8U & (((IData)(vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (IData)(__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request))));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w 
        = vlSelf->__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout;
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w 
        = ((0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w))
            ? (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w)
            : (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w 
        = ((0U != (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w))
            ? (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w)
            : (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w 
        = (0xfU & ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_q)
                    ? (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q)
                    : ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                       ^ VL_SHIFTL_III(4,4,32, (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w), 1U))));
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_grant_w 
        = (0xfU & ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_hold_q)
                    ? (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q)
                    : ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                       ^ VL_SHIFTL_III(4,4,32, (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w), 1U))));
    if ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r = 4U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r = 1U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[1U];
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r 
            = (0xfU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[2U]);
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_wvalid_o;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r 
            = (0xfffffffcU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U]);
    } else {
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r = 0U;
        if ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r = 0U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r = 0U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r 
                = (0xfU & 0U);
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r = 0U;
        } else if ((8U & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r = 0U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r = 0U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r 
                = (0xfU & 0U);
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r = 0U;
        } else {
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r = 1U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                = vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wdata_i;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r 
                = (0xfU & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wstrb_i));
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r 
                = vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awaddr_i;
        }
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r 
            = ((1U & (~ ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                         >> 2U))) && ((1U & (~ ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                >> 3U))) 
                                      && (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wvalid_i)));
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r 
            = ((1U & (~ ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                         >> 2U))) && ((1U & (~ ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                >> 3U))) 
                                      && (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i)));
    }
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r 
        = ((1U & ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                  >> 1U)) || ((1U & (~ ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                        >> 2U))) && 
                              (1U & (~ ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                        >> 3U)))));
    if ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r = 4U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r = 0U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r = 1U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_arvalid_o;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r 
            = (0xfffffffcU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U]);
    } else if ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r = 8U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r = 7U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r = 1U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r 
            = (0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q);
    } else {
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r = 0U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r = 0U;
        if ((8U & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r = 0U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r = 0U;
        } else {
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r = 1U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r 
                = vlSymsp->TOP.__Vcellinp__riscv_soc__inport_araddr_i;
        }
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r 
            = ((1U & (~ ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                         >> 3U))) && (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i));
    }
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_awvalid_w 
        = ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r));
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 0U;
    if ((0x90000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 1U;
    }
    if ((0x91000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 2U;
    }
    if ((0x92000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 3U;
    }
    if ((0x93000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 4U;
    }
    if ((0x94000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 5U;
    }
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__data_r = 0U;
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__data_r = 0U;
    if ((0U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_intc__DOT__data_r 
            = ((0xfffffff0U & vlSelf->__PVT__u_soc__DOT__u_intc__DOT__data_r) 
               | (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q));
        vlSelf->__PVT__u_soc__DOT__u_uart__DOT__data_r 
            = ((0xffffff00U & vlSelf->__PVT__u_soc__DOT__u_uart__DOT__data_r) 
               | (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_data_q));
    } else {
        vlSelf->__PVT__u_soc__DOT__u_intc__DOT__data_r 
            = ((4U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                ? ((0xfffffff0U & vlSelf->__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                   | (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))
                : ((8U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                    ? ((0xfffffff0U & vlSelf->__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                       | (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q))
                    : ((0x18U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                        ? ((1U & (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))
                            ? 0U : ((2U & (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))
                                     ? 1U : ((4U & (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))
                                              ? 2U : 
                                             ((8U & (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))
                                               ? 3U
                                               : 0xffffffffU))))
                        : ((0x1cU == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                            ? ((0xfffffffeU & vlSelf->__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                               | (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q))
                            : 0U))));
        vlSelf->__PVT__u_soc__DOT__u_uart__DOT__data_r 
            = ((8U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                ? ((0xffffffe0U & vlSelf->__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | (((IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                       << 4U) | (((IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) 
                                  << 3U) | ((4U & (
                                                   (~ (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                                                   << 2U)) 
                                            | (3U & 
                                               (- (IData)((IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q))))))))
                : ((0xcU == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                    ? ((0xffffffefU & vlSelf->__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                       | ((IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                          << 4U)) : 0U));
    }
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__data_r = 0U;
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__data_r 
        = ((8U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
            ? ((0xfffffff9U & vlSelf->__PVT__u_soc__DOT__u_timer__DOT__data_r) 
               | (((IData)(vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                   << 2U) | ((IData)(vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                             << 1U))) : ((0xcU == (0xffU 
                                                   & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                          ? vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q
                                          : ((0x10U 
                                              == (0xffU 
                                                  & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                              ? vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q
                                              : ((0x14U 
                                                  == 
                                                  (0xffU 
                                                   & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                  ? 
                                                 ((0xfffffff9U 
                                                   & vlSelf->__PVT__u_soc__DOT__u_timer__DOT__data_r) 
                                                  | (((IData)(vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                                                        << 1U)))
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0xffU 
                                                    & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                   ? vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0xffU 
                                                     & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                    ? vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q
                                                    : 0U))))));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r = 0U;
    if (((((((((0x1cU == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) 
               | (0x20U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
              | (0x28U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
             | (0x40U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
            | (0x60U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
           | (0x64U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
          | (0x6cU == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
         | (0x70U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)))) {
        if ((0x1cU == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r 
                = ((0x7fffffffU & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                   | ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                      << 0x1fU));
        } else if ((0x20U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r 
                = ((0xfffffffbU & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                   | ((0U == (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                      << 2U));
        } else if ((0x28U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r 
                = ((0xfffffffbU & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                   | ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q) 
                      << 2U));
        } else if ((0x40U != (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            if ((0x60U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r 
                    = ((0xfffffff0U & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                       | (((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q) 
                           << 3U) | (((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q) 
                                      << 2U) | (((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)))));
                vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r 
                    = ((0xffffffefU & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                       | ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                          << 4U));
                vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r 
                    = ((0xfffffc7fU & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                       | (((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q) 
                           << 9U) | (((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q) 
                                      << 8U) | ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q) 
                                                << 7U))));
            } else {
                vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r 
                    = ((0x64U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                        ? ((0xfffffff0U & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                           | (((4U == (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                               << 3U) | (((0U == (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                          << 2U) | 
                                         (((4U == (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)) 
                                           << 1U) | 
                                          (0U == (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))))))
                        : ((0x6cU == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                            ? ((0xffffff00U & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                               | vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                               [vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q])
                            : ((0xfffffffeU & vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                               | (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q))));
            }
        }
    } else {
        vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r = 0U;
    }
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 0U;
    if ((0x90000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 1U;
    }
    if ((0x91000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 2U;
    }
    if ((0x92000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 3U;
    }
    if ((0x93000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 4U;
    }
    if ((0x94000000U == (0xff000000U & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 5U;
    }
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w 
        = ((((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q) 
             == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
            & (0xfU != (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))) 
           | (0U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q)));
    __Vtableidx1 = ((0x100U & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                               << 8U)) | ((0x80U & 
                                           ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                                            << 7U)) 
                                          | ((0x40U 
                                              & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)) 
                                                 << 6U)) 
                                             | ((0x20U 
                                                 & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                                                       << 4U)) 
                                                   | (((2U 
                                                        != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)))))));
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__inport_arready_r 
        = Vriscv_soc__ConstPool__TABLE_h592d7e8a_0[__Vtableidx1];
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w 
        = ((((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
             == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
            & (0xfU != (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))) 
           | (0U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q)));
    vlSelf->__PVT__u_soc__DOT__axi_retime_wvalid_w 
        = (((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
            & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
           & (0U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)));
    vlSelf->u_soc__DOT__u_axi_tap__DOT____VdfgTmp_h5c26c157__0 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w));
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_arready_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__inport_arready_r));
    u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
    vlSelf->__PVT__u_soc__DOT__axi_retime_awvalid_w 
        = ((IData)(vlSelf->u_soc__DOT__u_axi_tap__DOT____VdfgTmp_h5c26c157__0) 
           & (0U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)));
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_arb_out_arready_w));
    vlSelf->__PVT__u_soc__DOT__axi_retime_arvalid_w 
        = ((IData)(u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0) 
           & (0U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output0_arvalid_w 
        = ((IData)(u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0) 
           & (1U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output1_arvalid_w 
        = ((IData)(u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0) 
           & (2U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output4_arvalid_w 
        = ((IData)(u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0) 
           & (5U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output2_arvalid_w 
        = ((IData)(u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0) 
           & (3U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output3_arvalid_w 
        = ((IData)(u_soc__DOT__u_axi_tap__DOT____VdfgTmp_hd770db20__0) 
           & (4U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
        = vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q;
    if (((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)) 
         & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r)));
    } else if (((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
                & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
            = (0xfU & ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__read_en_w 
        = ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output0_arvalid_w));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output0_awready_w 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_intc__DOT__bvalid_q)) 
                 & (~ (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output0_arvalid_w))));
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__read_en_w 
        = ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output1_arvalid_w));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output1_awready_w 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_timer__DOT__bvalid_q)) 
                 & (~ (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output1_arvalid_w))));
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__read_en_w 
        = ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output4_arvalid_w));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output4_awready_w 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q)) 
                 & (~ (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output4_arvalid_w))));
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__read_en_w 
        = ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output2_arvalid_w));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output2_wready_w 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__bvalid_q)) 
                 & (~ (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output2_arvalid_w))));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__read_en_w 
        = ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output3_arvalid_w));
    vlSelf->__PVT__u_soc__DOT__axi_tap_output3_wready_w 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__bvalid_q)) 
                 & (~ (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output3_arvalid_w))));
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__write_en_w 
        = (((IData)(vlSelf->u_soc__DOT__u_axi_tap__DOT____VdfgTmp_h5c26c157__0) 
            & (1U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output0_awready_w));
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__write_en_w 
        = (((IData)(vlSelf->u_soc__DOT__u_axi_tap__DOT____VdfgTmp_h5c26c157__0) 
            & (2U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output1_awready_w));
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__write_en_w 
        = (((IData)(vlSelf->u_soc__DOT__u_axi_tap__DOT____VdfgTmp_h5c26c157__0) 
            & (5U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output4_awready_w));
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_uart__DOT__read_en_w) 
           & (0U == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)));
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__write_en_w 
        = (((IData)(vlSelf->u_soc__DOT__u_axi_tap__DOT____VdfgTmp_h5c26c157__0) 
            & (3U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output2_wready_w));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_spi__DOT__read_en_w) 
           & (0x6cU == (0xffU & vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)));
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__write_en_w 
        = (((IData)(vlSelf->u_soc__DOT__u_axi_tap__DOT____VdfgTmp_h5c26c157__0) 
            & (4U == (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output3_wready_w));
    __Vtableidx2 = (((IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output0_awready_w) 
                     << 9U) | (((IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output1_awready_w) 
                                << 8U) | (((IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output2_wready_w) 
                                           << 7U) | 
                                          (((IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output3_wready_w) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__u_soc__DOT__axi_tap_output4_awready_w) 
                                               << 5U) 
                                              | (((2U 
                                                   != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)) 
                                                  << 4U) 
                                                 | (((2U 
                                                      != (IData)(vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))))))));
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__inport_awready_r 
        = Vriscv_soc__ConstPool__TABLE_h1437899e_0[__Vtableidx2];
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__inport_wready_r 
        = Vriscv_soc__ConstPool__TABLE_h661409f0_0[__Vtableidx2];
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_wready_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__inport_wready_r));
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_awready_w 
        = ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__inport_awready_r));
    vlSelf->__PVT__axi4_d_wready_w = (((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 1U) & (IData)(vlSelf->__PVT__u_soc__DOT__axi_arb_out_wready_w));
    if (vlSelf->__PVT__u_soc__DOT__axi_arb_out_awvalid_w) {
        if (vlSelf->__PVT__u_soc__DOT__axi_arb_out_awready_w) {
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = 1U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
                = vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
                = vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
            if ((((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                  & (IData)(vlSelf->__PVT__u_soc__DOT__axi_arb_out_wready_w)) 
                 & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r))) {
                vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        } else {
            vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = 0U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
                = vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
                = vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
            vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
        }
    } else {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = 0U;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
            = vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
        vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
            = vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
        if (vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r) {
            if ((((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                  & (IData)(vlSelf->__PVT__u_soc__DOT__axi_arb_out_wready_w)) 
                 & (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r))) {
                vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        }
    }
    vlSelf->u_soc__DOT__u_arb__DOT____VdfgTmp_h68b34a03__0 
        = ((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)) 
           & (IData)(vlSelf->__PVT__u_soc__DOT__axi_arb_out_awready_w));
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
        = vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q;
    if (((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)) 
         & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r)));
    } else if (((~ (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
                & (IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w))) {
        vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
            = (0xfU & ((IData)(vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__axi4_d_awready_w = (((IData)(vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                        >> 1U) & (IData)(vlSelf->u_soc__DOT__u_arb__DOT____VdfgTmp_h68b34a03__0));
}
