// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_riscv_core.h"

VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__0\n"); );
    // Init
    CData/*0:0*/ u_mmu__DOT____VdfgTmp_h301241d9__0;
    u_mmu__DOT____VdfgTmp_h301241d9__0 = 0;
    // Body
    vlSelf->__PVT__u_csr__DOT__csr_mcycle_r = ((IData)(1U) 
                                               + vlSelf->__PVT__u_csr__DOT__csr_mcycle_q);
    vlSelf->__PVT__mmu_lsu_rd_w = vlSelf->__PVT__u_lsu__DOT__mem_rd_q;
    vlSelf->__PVT__mmu_lsu_wr_w = vlSelf->__PVT__u_lsu__DOT__mem_wr_q;
    vlSelf->__PVT__arb_cpu_invalidate_w = vlSelf->__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSelf->__PVT__arb_cpu_flush_w = vlSelf->__PVT__u_lsu__DOT__mem_flush_q;
    vlSelf->__PVT__u_muldiv__DOT__signed_operation_w 
        = (IData)((0ULL != (0x28000000000000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelf->__PVT__u_muldiv__DOT__div_complete_w = 
        ((~ (IData)((0U != vlSelf->__PVT__u_muldiv__DOT__q_mask_q))) 
         & (IData)(vlSelf->__PVT__u_muldiv__DOT__div_busy_q));
    vlSelf->__PVT__fetch_pc_w = ((IData)(vlSelf->__PVT__u_fetch__DOT__skid_valid_q)
                                  ? (IData)((vlSelf->__PVT__u_fetch__DOT__skid_buffer_q 
                                             >> 0x20U))
                                  : vlSelf->__PVT__u_fetch__DOT__pc_d_q);
    vlSelf->__PVT__u_lsu__DOT__load_signed_inst_w = (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0xe0000000ULL 
                                                              & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelf->__PVT__writeback_csr_idx_w = ((- (IData)(
                                                     ((IData)(vlSelf->__PVT__u_csr__DOT__writeback_en_q) 
                                                      | (IData)(vlSelf->__PVT__u_csr__DOT__writeback_squash_q)))) 
                                          & (IData)(vlSelf->__PVT__u_csr__DOT__writeback_idx_q));
    vlSelf->__VdfgTmp_h01038a72__0 = (IData)((0ULL 
                                              != (0x700000000ULL 
                                                  & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelf->__PVT__u_csr__DOT__irq_pending_r = (vlSelf->__PVT__u_csr__DOT__csr_mip_q 
                                                & vlSelf->__PVT__u_csr__DOT__csr_mie_q);
    vlSelf->__PVT__u_csr__DOT__m_enabled_r = ((3U > (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                                              | ((3U 
                                                  == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                 & (vlSelf->__PVT__u_csr__DOT__csr_sr_q 
                                                    >> 3U)));
    vlSelf->__PVT__u_csr__DOT__s_enabled_r = ((1U > (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                                              | ((1U 
                                                  == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                 & (vlSelf->__PVT__u_csr__DOT__csr_sr_q 
                                                    >> 1U)));
    vlSelf->__PVT__u_csr__DOT__m_interrupts_r = ((IData)(vlSelf->__PVT__u_csr__DOT__m_enabled_r)
                                                  ? 
                                                 (vlSelf->__PVT__u_csr__DOT__irq_pending_r 
                                                  & (~ vlSelf->__PVT__u_csr__DOT__csr_mideleg_q))
                                                  : 0U);
    vlSelf->__PVT__u_csr__DOT__s_interrupts_r = ((IData)(vlSelf->__PVT__u_csr__DOT__s_enabled_r)
                                                  ? 
                                                 (vlSelf->__PVT__u_csr__DOT__irq_pending_r 
                                                  & vlSelf->__PVT__u_csr__DOT__csr_mideleg_q)
                                                  : 0U);
    vlSelf->__PVT__u_csr__DOT__irq_masked_r = ((0U 
                                                != vlSelf->__PVT__u_csr__DOT__m_interrupts_r)
                                                ? vlSelf->__PVT__u_csr__DOT__m_interrupts_r
                                                : vlSelf->__PVT__u_csr__DOT__s_interrupts_r);
    vlSelf->__PVT__u_csr__DOT__set_r = (IData)((0ULL 
                                                != 
                                                (0x360000000000ULL 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelf->__PVT__u_csr__DOT__clr_r = (IData)((0ULL 
                                                != 
                                                (0x5a0000000000ULL 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelf->__PVT__u_csr__DOT__imm12_r = (((- (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 0x14U));
    vlSelf->__PVT__u_csr__DOT__priv_r = (3U & (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                               >> 8U));
    vlSelf->__PVT__u_csr__DOT__readonly_r = (3U == 
                                             (3U & 
                                              (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                               >> 0xaU)));
    vlSelf->u_lsu__DOT____VdfgExtracted_h68300021__0 
        = ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_ld_q) 
           | (IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_st_q));
    vlSelf->__PVT__u_muldiv__DOT__mult_inst_w = (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x7800000000000ULL 
                                                          & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelf->__PVT__u_muldiv__DOT__div_operation_w = (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0x18000000000000ULL 
                                                              & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelf->__PVT__u_arb__DOT__src_mmu_w = ((IData)(vlSelf->__PVT__u_arb__DOT__read_hold_q)
                                             ? (IData)(vlSelf->__PVT__u_arb__DOT__src_mmu_q)
                                             : (IData)(vlSelf->__PVT__u_mmu__DOT__mem_req_q));
    vlSelf->__PVT__u_mmu__DOT__vm_enable_w = ((3U != (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                                              & (vlSelf->__PVT__u_csr__DOT__csr_satp_q 
                                                 >> 0x1fU));
    vlSelf->__PVT__u_mmu__DOT__store_w = ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_wr_q) 
                                          | (IData)(vlSelf->__PVT__u_mmu__DOT__store_q));
    vlSelf->__PVT__u_mmu__DOT__load_w = ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_rd_q) 
                                         | (IData)(vlSelf->__PVT__u_mmu__DOT__load_q));
    vlSelf->__PVT__arb_mmu_error_w = (IData)(((0x380U 
                                               == (0x380U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w))) 
                                              & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w)));
    vlSelf->__PVT__mmu_lsu_error_w = ((7U != (7U & 
                                              ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                               >> 7U))) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w));
    vlSelf->__PVT__arb_mmu_ack_w = (IData)(((0x380U 
                                             == (0x380U 
                                                 & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w))) 
                                            & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w)));
    vlSelf->__PVT__mmu_lsu_ack_w = ((7U != (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                                  >> 7U))) 
                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w));
    vlSelf->__PVT__u_lsu__DOT__load_inst_w = ((IData)(vlSelf->__PVT__u_lsu__DOT__load_signed_inst_w) 
                                              | (IData)(vlSelf->__VdfgTmp_h01038a72__0));
    vlSelf->__PVT__u_muldiv__DOT__div_rem_inst_w = 
        ((IData)(vlSelf->__PVT__u_muldiv__DOT__div_operation_w) 
         | (0ULL != (0x60000000000000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    u_mmu__DOT____VdfgTmp_h301241d9__0 = ((IData)(vlSelf->__PVT__u_mmu__DOT__load_w) 
                                          | (0U != (IData)(vlSelf->__PVT__u_mmu__DOT__store_w)));
    vlSelf->__PVT__u_lsu__DOT__wb_result_r = 0U;
    vlSelf->__PVT__u_lsu__DOT__wb_idx_r = (0x1fU & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w));
    vlSelf->__PVT__u_lsu__DOT__addr_lsb_r = (3U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                                   >> 5U));
    vlSelf->__PVT__u_lsu__DOT__load_byte_r = (1U & 
                                              ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                               >> 7U));
    vlSelf->__PVT__u_lsu__DOT__load_half_r = (1U & 
                                              ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                               >> 8U));
    vlSelf->__PVT__u_lsu__DOT__load_word_r = (1U & 
                                              ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                               >> 9U));
    vlSelf->__PVT__u_lsu__DOT__load_signed_r = (1U 
                                                & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                                   >> 0xaU));
    if (((IData)(vlSelf->__PVT__mmu_lsu_ack_w) & (((IData)(vlSelf->__PVT__u_lsu__DOT__load_byte_r) 
                                                   | (IData)(vlSelf->__PVT__u_lsu__DOT__load_half_r)) 
                                                  | (IData)(vlSelf->__PVT__u_lsu__DOT__load_word_r)))) {
        if (vlSelf->__PVT__u_lsu__DOT__load_byte_r) {
            vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelf->__PVT__u_lsu__DOT__addr_lsb_r))
                    ? ((1U & (IData)(vlSelf->__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                           >> 0x18U) : (0xffU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                                 >> 0x10U)))
                    : ((1U & (IData)(vlSelf->__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                    >> 8U)) : (0xffU 
                                               & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r)));
            if (((IData)(vlSelf->__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0xffU & vlSelf->__PVT__u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelf->__PVT__u_lsu__DOT__load_half_r) {
            vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelf->__PVT__u_lsu__DOT__addr_lsb_r))
                    ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                       >> 0x10U) : (0xffffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r));
            if (((IData)(vlSelf->__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                    >> 0xfU))) {
                vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffff0000U | (0xffffU & vlSelf->__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelf->__PVT__u_lsu__DOT__wb_result_r 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
        }
    } else {
        vlSelf->__PVT__u_lsu__DOT__wb_idx_r = 0U;
    }
    vlSelf->__PVT__muldiv_stall_w = (((IData)(vlSelf->__PVT__u_muldiv__DOT__div_busy_q) 
                                      & ((IData)(vlSelf->__PVT__u_muldiv__DOT__mult_inst_w) 
                                         | (IData)(vlSelf->__PVT__u_muldiv__DOT__div_rem_inst_w))) 
                                     | ((IData)(vlSelf->__PVT__u_muldiv__DOT__mult_busy_q) 
                                        & (IData)(vlSelf->__PVT__u_muldiv__DOT__div_rem_inst_w)));
    vlSelf->__PVT__u_mmu__DOT__lsu_addr_w = ((IData)(u_mmu__DOT____VdfgTmp_h301241d9__0)
                                              ? vlSelf->__PVT__u_lsu__DOT__mem_addr_q
                                              : vlSelf->__PVT__u_mmu__DOT__lsu_in_addr_q);
    vlSelf->__PVT__u_mmu__DOT__dtlb_hit_w = ((IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_valid_q) 
                                             & (vlSelf->__PVT__u_mmu__DOT__dtlb_va_addr_q 
                                                == 
                                                (vlSelf->__PVT__u_mmu__DOT__lsu_addr_w 
                                                 >> 0xcU)));
    vlSelf->__PVT__u_mmu__DOT__dtlb_miss_w = ((IData)(u_mmu__DOT____VdfgTmp_h301241d9__0) 
                                              & ((~ (IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_hit_w)) 
                                                 & (IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w)));
    vlSelf->__PVT__u_mmu__DOT__store_fault_r = 0U;
    if (((IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w) 
         & ((0U != (IData)(vlSelf->__PVT__u_mmu__DOT__store_w)) 
            & (IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_hit_w)))) {
        vlSelf->__PVT__u_mmu__DOT__store_fault_r = 
            (1U & ((1U == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q))
                    ? (((vlSelf->__PVT__u_mmu__DOT__dtlb_entry_q 
                         >> 4U) & (~ (vlSelf->__PVT__u_csr__DOT__csr_sr_q 
                                      >> 0x12U))) | (IData)(
                                                            (6U 
                                                             != 
                                                             (6U 
                                                              & vlSelf->__PVT__u_mmu__DOT__dtlb_entry_q))))
                    : (IData)((0x16U != (0x16U & vlSelf->__PVT__u_mmu__DOT__dtlb_entry_q)))));
    }
    vlSelf->__PVT__u_mmu__DOT__load_fault_r = 0U;
    if (((IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w) 
         & ((IData)(vlSelf->__PVT__u_mmu__DOT__load_w) 
            & (IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_hit_w)))) {
        vlSelf->__PVT__u_mmu__DOT__load_fault_r = (1U 
                                                   & ((1U 
                                                       == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q))
                                                       ? 
                                                      (((vlSelf->__PVT__u_mmu__DOT__dtlb_entry_q 
                                                         >> 4U) 
                                                        & (~ 
                                                           (vlSelf->__PVT__u_csr__DOT__csr_sr_q 
                                                            >> 0x12U))) 
                                                       | (~ 
                                                          (vlSelf->__PVT__u_mmu__DOT__dtlb_entry_q 
                                                           >> 1U)))
                                                       : (IData)(
                                                                 (0x12U 
                                                                  != 
                                                                  (0x12U 
                                                                   & vlSelf->__PVT__u_mmu__DOT__dtlb_entry_q)))));
    }
    if (vlSelf->__PVT__u_arb__DOT__src_mmu_w) {
        vlSelf->__PVT__mem_d_addr_o = vlSelf->__PVT__u_mmu__DOT__pte_addr_q;
        vlSelf->__PVT__mem_d_wr_o = 0U;
        vlSelf->__PVT__mem_d_rd_o = vlSelf->__PVT__u_mmu__DOT__mem_req_q;
    } else if (vlSelf->__PVT__u_mmu__DOT__vm_enable_w) {
        vlSelf->__PVT__mem_d_addr_o = ((0xfffff000U 
                                        & vlSelf->__PVT__u_mmu__DOT__dtlb_entry_q) 
                                       | (0xfffU & vlSelf->__PVT__u_mmu__DOT__lsu_addr_w));
        vlSelf->__PVT__mem_d_wr_o = ((IData)(vlSelf->__PVT__u_mmu__DOT__store_w) 
                                     & (- (IData)((
                                                   (~ (IData)(vlSelf->__PVT__u_mmu__DOT__store_fault_r)) 
                                                   & (IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_hit_w)))));
        vlSelf->__PVT__mem_d_rd_o = ((IData)(vlSelf->__PVT__u_mmu__DOT__load_w) 
                                     & ((~ (IData)(vlSelf->__PVT__u_mmu__DOT__load_fault_r)) 
                                        & (IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_hit_w)));
    } else {
        vlSelf->__PVT__mem_d_addr_o = vlSelf->__PVT__u_mmu__DOT__lsu_addr_w;
        vlSelf->__PVT__mem_d_wr_o = vlSelf->__PVT__u_lsu__DOT__mem_wr_q;
        vlSelf->__PVT__mem_d_rd_o = vlSelf->__PVT__u_lsu__DOT__mem_rd_q;
    }
    vlSelf->__PVT__u_csr__DOT__exception_m_w = ((IData)(vlSelf->__PVT__u_mmu__DOT__store_fault_r) 
                                                | ((IData)(vlSelf->__PVT__u_mmu__DOT__load_fault_r) 
                                                   | ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_st_q) 
                                                      | (IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_ld_q))));
    vlSelf->__PVT__u_lsu__DOT__fault_addr_r = 0U;
    if (((IData)(vlSelf->__PVT__u_mmu__DOT__load_fault_r) 
         | (IData)(vlSelf->__PVT__u_mmu__DOT__store_fault_r))) {
        vlSelf->__PVT__u_lsu__DOT__fault_addr_r = vlSelf->__PVT__u_mmu__DOT__lsu_in_addr_q;
    } else if (vlSelf->u_lsu__DOT____VdfgExtracted_h68300021__0) {
        vlSelf->__PVT__u_lsu__DOT__fault_addr_r = vlSelf->__PVT__u_lsu__DOT__mem_addr_q;
    }
    vlSelf->__PVT__csr_stall_w = ((IData)(vlSelf->__PVT__u_mmu__DOT__load_fault_r) 
                                  | ((IData)(vlSelf->__PVT__u_mmu__DOT__store_fault_r) 
                                     | (IData)(vlSelf->u_lsu__DOT____VdfgExtracted_h68300021__0)));
    vlSelf->__PVT__mmu_lsu_accept_w = ((((~ (IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w)) 
                                         | ((IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w) 
                                            & (IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_hit_w))) 
                                        & ((~ (IData)(vlSelf->__PVT__u_arb__DOT__src_mmu_w)) 
                                           & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))) 
                                       | ((IData)(vlSelf->__PVT__u_mmu__DOT__load_fault_r) 
                                          | (IData)(vlSelf->__PVT__u_mmu__DOT__store_fault_r)));
    vlSelf->__PVT__lsu_stall_w = ((~ (IData)(vlSelf->__PVT__mmu_lsu_accept_w)) 
                                  & ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_invalidate_q) 
                                     | ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_flush_q) 
                                        | ((IData)(vlSelf->__PVT__u_lsu__DOT__mem_rd_q) 
                                           | (0U != (IData)(vlSelf->__PVT__u_lsu__DOT__mem_wr_q))))));
}

VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__1\n"); );
    // Init
    CData/*0:0*/ u_csr__DOT____VdfgTmp_h7cdabb79__0;
    u_csr__DOT____VdfgTmp_h7cdabb79__0 = 0;
    CData/*0:0*/ u_csr__DOT____VdfgTmp_h8347d554__0;
    u_csr__DOT____VdfgTmp_h8347d554__0 = 0;
    // Body
    vlSelf->__PVT__fetch_instr_w = ((IData)(vlSelf->__PVT__u_fetch__DOT__skid_valid_q)
                                     ? (IData)(vlSelf->__PVT__u_fetch__DOT__skid_buffer_q)
                                     : ((IData)(vlSelf->__PVT__u_fetch__DOT__fetch_page_fault_q)
                                         ? 0x8000053U
                                         : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                             ? 0x53U
                                             : vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r)));
    vlSelf->__PVT__u_fetch__DOT__icache_busy_w = ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o)) 
                                                  & (IData)(vlSelf->__PVT__u_fetch__DOT__icache_fetch_q));
    vlSelf->__PVT__u_muldiv__DOT__div_start_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__muldiv_opcode_valid_o) 
                                                 & ((~ (IData)(vlSelf->__PVT__muldiv_stall_w)) 
                                                    & (IData)(vlSelf->__PVT__u_muldiv__DOT__div_rem_inst_w)));
    vlSelf->__PVT__u_csr__DOT__valid_unit_inst_w = 
        ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
         & (IData)((0ULL != (0x1807fc000000000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))));
    u_csr__DOT____VdfgTmp_h8347d554__0 = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                                          & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x26U)));
    u_csr__DOT____VdfgTmp_h7cdabb79__0 = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                                          & ((IData)(vlSelf->__PVT__u_csr__DOT__clr_r) 
                                             | (IData)(vlSelf->__PVT__u_csr__DOT__set_r)));
    vlSelf->__PVT__mmu_ifetch_rd_w = ((IData)(vlSelf->__PVT__u_fetch__DOT__active_q) 
                                      & ((~ (IData)(vlSelf->__PVT__u_fetch__DOT__icache_busy_w)) 
                                         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o)));
    vlSelf->__PVT__mmu_flush_w = ((IData)(u_csr__DOT____VdfgTmp_h7cdabb79__0) 
                                  & (0x180U == (0xfffU 
                                                & vlSelf->__PVT__u_csr__DOT__imm12_r)));
    vlSelf->__PVT__u_csr__DOT__csr_access_fault_w = 
        ((IData)(u_csr__DOT____VdfgTmp_h7cdabb79__0) 
         & (((IData)(vlSelf->__PVT__u_csr__DOT__readonly_r) 
             & (IData)(((0U != (0xf8000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)) 
                        | (0ULL != (0x120000000000ULL 
                                    & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))))) 
            | ((IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q) 
               < (IData)(vlSelf->__PVT__u_csr__DOT__priv_r))));
    vlSelf->__PVT__u_csr__DOT__exc_src_w = (((IData)(vlSelf->__PVT__u_mmu__DOT__store_fault_r) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__u_mmu__DOT__load_fault_r) 
                                                << 0xdU) 
                                               | ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x38U))) 
                                                   << 0xcU) 
                                                  | ((((IData)(u_csr__DOT____VdfgTmp_h8347d554__0) 
                                                       & (3U 
                                                          == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q))) 
                                                      << 0xbU) 
                                                     | ((((IData)(u_csr__DOT____VdfgTmp_h8347d554__0) 
                                                          & (1U 
                                                             == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q))) 
                                                         << 9U) 
                                                        | ((((IData)(u_csr__DOT____VdfgTmp_h8347d554__0) 
                                                             & (0U 
                                                                == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q))) 
                                                            << 8U) 
                                                           | ((((IData)(vlSelf->__PVT__mmu_lsu_ack_w) 
                                                                & (IData)(
                                                                          ((0U 
                                                                            == 
                                                                            (0x380U 
                                                                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w))) 
                                                                           & (IData)(vlSelf->__PVT__mmu_lsu_error_w)))) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_st_q) 
                                                                  << 6U) 
                                                                 | ((((IData)(vlSelf->__PVT__mmu_lsu_ack_w) 
                                                                      & ((0U 
                                                                          != 
                                                                          (7U 
                                                                           & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                                                              >> 7U))) 
                                                                         & (IData)(vlSelf->__PVT__mmu_lsu_error_w))) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->__PVT__u_lsu__DOT__mem_unaligned_ld_q) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                                                                            & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x27U))) 
                                                                           << 3U) 
                                                                          | ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                                                                               & ((IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x39U)) 
                                                                                | (IData)(vlSelf->__PVT__u_csr__DOT__csr_access_fault_w))) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x37U))) 
                                                                                << 1U)))))))))))));
}

VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__2\n"); );
    // Init
    QData/*32:0*/ u_muldiv__DOT____VdfgTmp_h5fcd7459__0;
    u_muldiv__DOT____VdfgTmp_h5fcd7459__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    u_muldiv__DOT____VdfgTmp_h5fcd7459__0 = (((QData)((IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                               >> 0x1fU))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r)));
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x31U)))) {
        vlSelf->__PVT__u_muldiv__DOT__operand_b_r = (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r));
        vlSelf->__PVT__u_muldiv__DOT__operand_a_r = u_muldiv__DOT____VdfgTmp_h5fcd7459__0;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x30U)))) {
        vlSelf->__PVT__u_muldiv__DOT__operand_b_r = 
            (((QData)((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
                               >> 0x1fU))) << 0x20U) 
             | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r)));
        vlSelf->__PVT__u_muldiv__DOT__operand_a_r = u_muldiv__DOT____VdfgTmp_h5fcd7459__0;
    } else {
        vlSelf->__PVT__u_muldiv__DOT__operand_b_r = (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r));
        vlSelf->__PVT__u_muldiv__DOT__operand_a_r = (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r));
    }
    vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r = 0U;
    vlSelf->__PVT__u_lsu__DOT__mem_addr_r = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                                              & (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x29U)))
                                              ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r
                                              : (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                                                  & (IData)(vlSelf->__PVT__u_lsu__DOT__load_inst_w))
                                                  ? 
                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x14U)))
                                                  : 
                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                            >> 7U)))))));
    if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
         & (IData)((0ULL != (0x2480000000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))))) {
        vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r 
            = (0U != (3U & vlSelf->__PVT__u_lsu__DOT__mem_addr_r));
    } else if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                & (IData)((0ULL != (0x1240000000ULL 
                                    & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))))) {
        vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r 
            = (1U & vlSelf->__PVT__u_lsu__DOT__mem_addr_r);
    }
    __Vtemp_2[0U] = (IData)(vlSelf->__PVT__u_muldiv__DOT__operand_a_r);
    __Vtemp_2[1U] = (((- (IData)((1U & (IData)((vlSelf->__PVT__u_muldiv__DOT__operand_a_r 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelf->__PVT__u_muldiv__DOT__operand_a_r 
                                        >> 0x20U)));
    __Vtemp_2[2U] = ((- (IData)((1U & (IData)((vlSelf->__PVT__u_muldiv__DOT__operand_a_r 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    __Vtemp_3[0U] = (IData)(vlSelf->__PVT__u_muldiv__DOT__operand_b_r);
    __Vtemp_3[1U] = (((- (IData)((1U & (IData)((vlSelf->__PVT__u_muldiv__DOT__operand_b_r 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelf->__PVT__u_muldiv__DOT__operand_b_r 
                                        >> 0x20U)));
    __Vtemp_3[2U] = ((- (IData)((1U & (IData)((vlSelf->__PVT__u_muldiv__DOT__operand_b_r 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->__PVT__u_muldiv__DOT__mult_result_w[0U] 
        = __Vtemp_4[0U];
    vlSelf->__PVT__u_muldiv__DOT__mult_result_w[1U] 
        = __Vtemp_4[1U];
    vlSelf->__PVT__u_muldiv__DOT__mult_result_w[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelf->__PVT__u_muldiv__DOT__result_r = vlSelf->__PVT__u_muldiv__DOT__mult_result_w[0U];
    if ((((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                         >> 0x30U))) || (1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x32U)))) 
         || (1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x31U))))) {
        vlSelf->__PVT__u_muldiv__DOT__result_r = vlSelf->__PVT__u_muldiv__DOT__mult_result_w[1U];
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x2fU)))) {
        vlSelf->__PVT__u_muldiv__DOT__result_r = vlSelf->__PVT__u_muldiv__DOT__mult_result_w[0U];
    }
}

VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc_riscv_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__3\n"); );
    // Init
    CData/*0:0*/ u_mmu__DOT____VdfgExtracted_hb9061b79__0;
    u_mmu__DOT____VdfgExtracted_hb9061b79__0 = 0;
    // Body
    vlSelf->__PVT__u_csr__DOT__take_exception_r = 0U;
    vlSelf->__PVT__u_csr__DOT__csr_mepc_r = vlSelf->__PVT__u_csr__DOT__csr_mepc_q;
    vlSelf->__PVT__u_csr__DOT__csr_sr_r = vlSelf->__PVT__u_csr__DOT__csr_sr_q;
    vlSelf->__PVT__u_csr__DOT__csr_mcause_r = vlSelf->__PVT__u_csr__DOT__csr_mcause_q;
    vlSelf->__PVT__u_csr__DOT__csr_mtvec_r = vlSelf->__PVT__u_csr__DOT__csr_mtvec_q;
    vlSelf->__PVT__u_csr__DOT__csr_mip_r = vlSelf->__PVT__u_csr__DOT__csr_mip_q;
    vlSelf->__PVT__u_csr__DOT__csr_mie_r = vlSelf->__PVT__u_csr__DOT__csr_mie_q;
    vlSelf->__PVT__u_csr__DOT__csr_mpriv_r = vlSelf->__PVT__u_csr__DOT__csr_mpriv_q;
    vlSelf->__PVT__u_csr__DOT__csr_mscratch_r = vlSelf->__PVT__u_csr__DOT__csr_mscratch_q;
    vlSelf->__PVT__u_csr__DOT__csr_medeleg_r = vlSelf->__PVT__u_csr__DOT__csr_medeleg_q;
    vlSelf->__PVT__u_csr__DOT__csr_mideleg_r = vlSelf->__PVT__u_csr__DOT__csr_mideleg_q;
    vlSelf->__PVT__u_csr__DOT__csr_sepc_r = vlSelf->__PVT__u_csr__DOT__csr_sepc_q;
    vlSelf->__PVT__u_csr__DOT__csr_stvec_r = vlSelf->__PVT__u_csr__DOT__csr_stvec_q;
    vlSelf->__PVT__u_csr__DOT__csr_scause_r = vlSelf->__PVT__u_csr__DOT__csr_scause_q;
    vlSelf->__PVT__u_csr__DOT__csr_stval_r = vlSelf->__PVT__u_csr__DOT__csr_stval_q;
    vlSelf->__PVT__u_csr__DOT__csr_satp_r = vlSelf->__PVT__u_csr__DOT__csr_satp_q;
    vlSelf->__PVT__u_csr__DOT__csr_sscratch_r = vlSelf->__PVT__u_csr__DOT__csr_sscratch_q;
    vlSelf->__PVT__u_csr__DOT__result_r = 0U;
    vlSelf->__PVT__u_csr__DOT__data_r = 0U;
    vlSelf->__PVT__u_csr__DOT__take_intr_r = (0U != vlSelf->__PVT__u_csr__DOT__irq_masked_r);
    if ((1U & (((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)) 
                | (0ULL != (0x38e0000000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) 
               | (IData)(vlSelf->__VdfgTmp_h01038a72__0)))) {
        vlSelf->__PVT__u_csr__DOT__take_intr_r = 0U;
    }
    vlSelf->__PVT__u_csr__DOT__exception_s_r = ((IData)(vlSelf->__PVT__u_csr__DOT__exception_m_w)
                                                 ? 
                                                (0U 
                                                 != 
                                                 (0xa050U 
                                                  & (vlSelf->__PVT__u_csr__DOT__exc_src_w 
                                                     & vlSelf->__PVT__u_csr__DOT__csr_medeleg_q)))
                                                 : 
                                                (0U 
                                                 != 
                                                 (0xfffff0f7U 
                                                  & (vlSelf->__PVT__u_csr__DOT__exc_src_w 
                                                     & vlSelf->__PVT__u_csr__DOT__csr_medeleg_q))));
    vlSelf->__PVT__u_csr__DOT__interrupt_s_r = (0U 
                                                != 
                                                (vlSelf->__PVT__u_csr__DOT__irq_masked_r 
                                                 & vlSelf->__PVT__u_csr__DOT__csr_mideleg_q));
    if ((IData)((0U != (0xb0f6U & vlSelf->__PVT__u_csr__DOT__exc_src_w)))) {
        vlSelf->__PVT__u_csr__DOT__take_exception_r = 1U;
    }
    if (vlSelf->__PVT__u_csr__DOT__take_exception_r) {
        vlSelf->__PVT__u_csr__DOT__take_intr_r = 0U;
        if (((1U >= (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
             & (IData)(vlSelf->__PVT__u_csr__DOT__exception_s_r))) {
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffffdfU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | (0x20U 
                                                      & (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                         << 4U)));
            vlSelf->__PVT__u_csr__DOT__csr_mpriv_r = 1U;
            if (vlSelf->__PVT__u_csr__DOT__exception_m_w) {
                vlSelf->__PVT__u_csr__DOT__csr_sepc_r 
                    = vlSelf->__PVT__u_csr__DOT__pc_m_q;
                vlSelf->__PVT__u_csr__DOT__csr_stval_r 
                    = vlSelf->__PVT__u_lsu__DOT__fault_addr_r;
            } else if ((0x1000U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_sepc_r 
                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
                vlSelf->__PVT__u_csr__DOT__csr_stval_r 
                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
            } else {
                vlSelf->__PVT__u_csr__DOT__csr_sepc_r 
                    = ((IData)(vlSelf->__PVT__u_csr__DOT__branch_q)
                        ? vlSelf->__PVT__u_csr__DOT__branch_target_q
                        : ((IData)(vlSelf->__PVT__u_csr__DOT__valid_unit_inst_w)
                            ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)
                                    ? ((IData)(4U) 
                                       + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))));
                vlSelf->__PVT__u_csr__DOT__csr_stval_r = 0U;
            }
            if ((0x10U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 4U;
            } else if ((0x40U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 6U;
            } else if ((0x2000U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0xdU;
            } else if ((0x8000U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0xfU;
            } else if ((0x1000U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0xcU;
            } else if ((4U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 2U;
            } else if ((2U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 1U;
            } else if ((0x20U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 5U;
            } else if ((0x80U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 7U;
            }
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xfffffeffU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                      << 8U));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0xfffffffdU 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffff7fU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | (0x80U 
                                                      & (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                         << 4U)));
            vlSelf->__PVT__u_csr__DOT__csr_mpriv_r = 3U;
            vlSelf->__PVT__u_csr__DOT__csr_mepc_r = 
                ((IData)(vlSelf->__PVT__u_csr__DOT__exception_m_w)
                  ? vlSelf->__PVT__u_csr__DOT__pc_m_q
                  : ((0x1000U & vlSelf->__PVT__u_csr__DOT__exc_src_w)
                      ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                      : ((IData)(vlSelf->__PVT__u_csr__DOT__branch_q)
                          ? vlSelf->__PVT__u_csr__DOT__branch_target_q
                          : ((IData)(vlSelf->__PVT__u_csr__DOT__valid_unit_inst_w)
                              ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                              : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o)
                                  ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r
                                  : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)
                                      ? ((IData)(4U) 
                                         + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                      : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))))));
            if ((0x10U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 4U;
            } else if ((0x40U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 6U;
            } else if ((0x2000U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0xdU;
            } else if ((0x8000U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0xfU;
            } else if ((0x1000U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0xcU;
            } else if ((4U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 2U;
            } else if ((2U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 1U;
            } else if ((0x20U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 5U;
            } else if ((0x80U & vlSelf->__PVT__u_csr__DOT__exc_src_w)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 7U;
            }
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffe7ffU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | ((IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q) 
                                                      << 0xbU));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0xfffffff7U 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_sr_r);
        }
    } else if (vlSelf->__PVT__u_csr__DOT__take_intr_r) {
        if (((1U >= (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
             & (IData)(vlSelf->__PVT__u_csr__DOT__interrupt_s_r))) {
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffffdfU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | (0x20U 
                                                      & (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                         << 4U)));
            vlSelf->__PVT__u_csr__DOT__csr_mpriv_r = 1U;
            vlSelf->__PVT__u_csr__DOT__csr_sepc_r = 
                ((IData)(vlSelf->__PVT__u_csr__DOT__branch_q)
                  ? vlSelf->__PVT__u_csr__DOT__branch_target_q
                  : ((IData)(vlSelf->__PVT__u_csr__DOT__valid_unit_inst_w)
                      ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                      : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o)
                          ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r
                          : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)
                              ? ((IData)(4U) + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                              : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))));
            if ((2U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0x80000001U;
            } else if ((8U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0x80000003U;
            } else if ((0x20U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0x80000005U;
            } else if ((0x80U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0x80000007U;
            } else if ((0x200U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0x80000009U;
            } else if ((0x800U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_scause_r = 0x8000000bU;
            }
            vlSelf->__PVT__u_csr__DOT__csr_stval_r = 0U;
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xfffffeffU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                      << 8U));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0xfffffffdU 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffff7fU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | (0x80U 
                                                      & (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                         << 4U)));
            vlSelf->__PVT__u_csr__DOT__csr_mpriv_r = 3U;
            vlSelf->__PVT__u_csr__DOT__csr_mepc_r = 
                ((IData)(vlSelf->__PVT__u_csr__DOT__branch_q)
                  ? vlSelf->__PVT__u_csr__DOT__branch_target_q
                  : ((IData)(vlSelf->__PVT__u_csr__DOT__valid_unit_inst_w)
                      ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                      : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o)
                          ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r
                          : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)
                              ? ((IData)(4U) + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                              : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))));
            if ((2U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0x80000001U;
            } else if ((8U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0x80000003U;
            } else if ((0x20U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0x80000005U;
            } else if ((0x80U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0x80000007U;
            } else if ((0x200U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0x80000009U;
            } else if ((0x800U & vlSelf->__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelf->__PVT__u_csr__DOT__csr_mcause_r = 0x8000000bU;
            }
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffe7ffU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | ((IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q) 
                                                      << 0xbU));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0xfffffff7U 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_sr_r);
        }
    } else if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                & ((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                   | (IData)(vlSelf->__PVT__u_csr__DOT__clr_r)))) {
        vlSelf->__PVT__u_csr__DOT__data_r = ((IData)(
                                                     (0ULL 
                                                      != 
                                                      (0x700000000000ULL 
                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))
                                              ? (0x1fU 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0xfU))
                                              : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r);
        if ((0x800U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
            if ((0x400U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                if ((0x200U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                    if ((0x100U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                        if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                              >> 5U)))) {
                                    if ((0x10U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelf->__PVT__u_csr__DOT__imm12_r))) {
                                                        vlSelf->__PVT__u_csr__DOT__result_r = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                     >> 8U)))) {
                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                  >> 7U)))) {
                        if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                      >> 6U)))) {
                            if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelf->__PVT__u_csr__DOT__imm12_r))) {
                                                    vlSelf->__PVT__u_csr__DOT__result_r 
                                                        = vlSelf->__PVT__u_csr__DOT__csr_mcycle_q;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                             >> 0xaU)))) {
            if ((0x200U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                if ((0x100U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                  >> 7U)))) {
                        if ((0x40U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                            if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                  >> 3U)))) {
                                        if ((4U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelf->__PVT__u_csr__DOT__imm12_r))) {
                                                    vlSelf->__PVT__u_csr__DOT__data_r 
                                                        = 
                                                        (0xaaaU 
                                                         & vlSelf->__PVT__u_csr__DOT__data_r);
                                                    vlSelf->__PVT__u_csr__DOT__result_r 
                                                        = 
                                                        (0xaaaU 
                                                         & vlSelf->__PVT__u_csr__DOT__csr_mip_r);
                                                    if (
                                                        ((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                         & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                        vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                            = vlSelf->__PVT__u_csr__DOT__data_r;
                                                    } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                        vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                            = 
                                                            (vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                             | vlSelf->__PVT__u_csr__DOT__data_r);
                                                    } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                        vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                            = 
                                                            (vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                             & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                            if ((1U 
                                                 & (~ vlSelf->__PVT__u_csr__DOT__imm12_r))) {
                                                vlSelf->__PVT__u_csr__DOT__data_r 
                                                    = 
                                                    (0x8000000fU 
                                                     & vlSelf->__PVT__u_csr__DOT__data_r);
                                                vlSelf->__PVT__u_csr__DOT__result_r 
                                                    = 
                                                    (0x8000000fU 
                                                     & vlSelf->__PVT__u_csr__DOT__csr_mcause_q);
                                                if (
                                                    ((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                     & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mcause_r 
                                                        = vlSelf->__PVT__u_csr__DOT__data_r;
                                                } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mcause_r 
                                                        = 
                                                        (vlSelf->__PVT__u_csr__DOT__csr_mcause_r 
                                                         | vlSelf->__PVT__u_csr__DOT__data_r);
                                                } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mcause_r 
                                                        = 
                                                        (vlSelf->__PVT__u_csr__DOT__csr_mcause_r 
                                                         & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                            if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mepc_r 
                                                    = vlSelf->__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mepc_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_mepc_r 
                                                     | vlSelf->__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mepc_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_mepc_r 
                                                     & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                            }
                                            vlSelf->__PVT__u_csr__DOT__result_r 
                                                = vlSelf->__PVT__u_csr__DOT__csr_mepc_q;
                                        } else {
                                            if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mscratch_r 
                                                    = vlSelf->__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mscratch_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_mscratch_r 
                                                     | vlSelf->__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mscratch_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_mscratch_r 
                                                     & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                            }
                                            vlSelf->__PVT__u_csr__DOT__result_r 
                                                = vlSelf->__PVT__u_csr__DOT__csr_mscratch_q;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                             >> 5U)))) {
                            if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                          >> 4U)))) {
                                if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                                if (
                                                    ((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                     & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mtvec_r 
                                                        = vlSelf->__PVT__u_csr__DOT__data_r;
                                                } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mtvec_r 
                                                        = 
                                                        (vlSelf->__PVT__u_csr__DOT__csr_mtvec_r 
                                                         | vlSelf->__PVT__u_csr__DOT__data_r);
                                                } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mtvec_r 
                                                        = 
                                                        (vlSelf->__PVT__u_csr__DOT__csr_mtvec_r 
                                                         & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                                }
                                                vlSelf->__PVT__u_csr__DOT__result_r 
                                                    = vlSelf->__PVT__u_csr__DOT__csr_mtvec_q;
                                            } else {
                                                vlSelf->__PVT__u_csr__DOT__data_r 
                                                    = 
                                                    (0xaaaU 
                                                     & vlSelf->__PVT__u_csr__DOT__data_r);
                                                vlSelf->__PVT__u_csr__DOT__result_r 
                                                    = 
                                                    (0xaaaU 
                                                     & vlSelf->__PVT__u_csr__DOT__csr_mie_q);
                                                if (
                                                    ((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                     & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                        = vlSelf->__PVT__u_csr__DOT__data_r;
                                                } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                        = 
                                                        (vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                         | vlSelf->__PVT__u_csr__DOT__data_r);
                                                } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                        = 
                                                        (vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                         & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                                }
                                            }
                                        }
                                    } else if ((2U 
                                                & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                        if ((1U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                            vlSelf->__PVT__u_csr__DOT__data_r 
                                                = (0xffffU 
                                                   & vlSelf->__PVT__u_csr__DOT__data_r);
                                            vlSelf->__PVT__u_csr__DOT__result_r 
                                                = (0xffffU 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_mideleg_q);
                                            if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mideleg_r 
                                                    = vlSelf->__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mideleg_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_mideleg_r 
                                                     | vlSelf->__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mideleg_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_mideleg_r 
                                                     & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                            }
                                        } else {
                                            vlSelf->__PVT__u_csr__DOT__data_r 
                                                = (0xffffU 
                                                   & vlSelf->__PVT__u_csr__DOT__data_r);
                                            vlSelf->__PVT__u_csr__DOT__result_r 
                                                = (0xffffU 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_medeleg_q);
                                            if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                vlSelf->__PVT__u_csr__DOT__csr_medeleg_r 
                                                    = vlSelf->__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_medeleg_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_medeleg_r 
                                                     | vlSelf->__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_medeleg_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_medeleg_r 
                                                     & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                            }
                                        }
                                    } else if ((1U 
                                                & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                        vlSelf->__PVT__u_csr__DOT__result_r = 0x40141100U;
                                    } else {
                                        if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                            vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                = vlSelf->__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                   | vlSelf->__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                   & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                        }
                                        vlSelf->__PVT__u_csr__DOT__result_r 
                                            = vlSelf->__PVT__u_csr__DOT__csr_sr_q;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x100U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                if ((0x80U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                  >> 6U)))) {
                        if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                          >> 4U)))) {
                                if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->__PVT__u_csr__DOT__imm12_r))) {
                                                if (
                                                    ((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                     & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_satp_r 
                                                        = vlSelf->__PVT__u_csr__DOT__data_r;
                                                } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_satp_r 
                                                        = 
                                                        (vlSelf->__PVT__u_csr__DOT__csr_satp_r 
                                                         | vlSelf->__PVT__u_csr__DOT__data_r);
                                                } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                    vlSelf->__PVT__u_csr__DOT__csr_satp_r 
                                                        = 
                                                        (vlSelf->__PVT__u_csr__DOT__csr_satp_r 
                                                         & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                                }
                                                vlSelf->__PVT__u_csr__DOT__result_r 
                                                    = vlSelf->__PVT__u_csr__DOT__csr_satp_q;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                  >> 5U)))) {
                        if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                          >> 3U)))) {
                                if ((4U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelf->__PVT__u_csr__DOT__imm12_r))) {
                                            vlSelf->__PVT__u_csr__DOT__data_r 
                                                = (0x222U 
                                                   & vlSelf->__PVT__u_csr__DOT__data_r);
                                            vlSelf->__PVT__u_csr__DOT__result_r 
                                                = (0x222U 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_mip_r);
                                            if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                    = vlSelf->__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                     | vlSelf->__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                                vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                    = 
                                                    (vlSelf->__PVT__u_csr__DOT__csr_mip_r 
                                                     & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                            }
                                        }
                                    }
                                } else if ((2U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                    if ((1U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                        if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                            vlSelf->__PVT__u_csr__DOT__csr_stval_r 
                                                = vlSelf->__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_stval_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_stval_r 
                                                   | vlSelf->__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_stval_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_stval_r 
                                                   & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                        }
                                        vlSelf->__PVT__u_csr__DOT__result_r 
                                            = vlSelf->__PVT__u_csr__DOT__csr_stval_q;
                                    } else {
                                        vlSelf->__PVT__u_csr__DOT__data_r 
                                            = (0x8000000fU 
                                               & vlSelf->__PVT__u_csr__DOT__data_r);
                                        vlSelf->__PVT__u_csr__DOT__result_r 
                                            = (0x8000000fU 
                                               & vlSelf->__PVT__u_csr__DOT__csr_scause_q);
                                        if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                            vlSelf->__PVT__u_csr__DOT__csr_scause_r 
                                                = vlSelf->__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_scause_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_scause_r 
                                                   | vlSelf->__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_scause_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_scause_r 
                                                   & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                        }
                                    }
                                } else if ((1U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                    if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                         & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sepc_r 
                                            = vlSelf->__PVT__u_csr__DOT__data_r;
                                    } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sepc_r 
                                            = (vlSelf->__PVT__u_csr__DOT__csr_sepc_r 
                                               | vlSelf->__PVT__u_csr__DOT__data_r);
                                    } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sepc_r 
                                            = (vlSelf->__PVT__u_csr__DOT__csr_sepc_r 
                                               & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                    }
                                    vlSelf->__PVT__u_csr__DOT__result_r 
                                        = vlSelf->__PVT__u_csr__DOT__csr_sepc_q;
                                } else {
                                    if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                         & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sscratch_r 
                                            = vlSelf->__PVT__u_csr__DOT__data_r;
                                    } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sscratch_r 
                                            = (vlSelf->__PVT__u_csr__DOT__csr_sscratch_r 
                                               | vlSelf->__PVT__u_csr__DOT__data_r);
                                    } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sscratch_r 
                                            = (vlSelf->__PVT__u_csr__DOT__csr_sscratch_r 
                                               & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                    }
                                    vlSelf->__PVT__u_csr__DOT__result_r 
                                        = vlSelf->__PVT__u_csr__DOT__csr_sscratch_q;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                     >> 5U)))) {
                    if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                      >> 3U)))) {
                            if ((4U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                              >> 1U)))) {
                                    if ((1U & vlSelf->__PVT__u_csr__DOT__imm12_r)) {
                                        if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                            vlSelf->__PVT__u_csr__DOT__csr_stvec_r 
                                                = vlSelf->__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_stvec_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_stvec_r 
                                                   | vlSelf->__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_stvec_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_stvec_r 
                                                   & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                        }
                                        vlSelf->__PVT__u_csr__DOT__result_r 
                                            = vlSelf->__PVT__u_csr__DOT__csr_stvec_q;
                                    } else {
                                        vlSelf->__PVT__u_csr__DOT__data_r 
                                            = (0x222U 
                                               & vlSelf->__PVT__u_csr__DOT__data_r);
                                        vlSelf->__PVT__u_csr__DOT__result_r 
                                            = (0x222U 
                                               & vlSelf->__PVT__u_csr__DOT__csr_mie_q);
                                        if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                            vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                = vlSelf->__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                   | vlSelf->__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                            vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                = (vlSelf->__PVT__u_csr__DOT__csr_mie_r 
                                                   & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->__PVT__u_csr__DOT__imm12_r 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->__PVT__u_csr__DOT__imm12_r))) {
                                    vlSelf->__PVT__u_csr__DOT__data_r 
                                        = (0x40133U 
                                           & vlSelf->__PVT__u_csr__DOT__data_r);
                                    vlSelf->__PVT__u_csr__DOT__result_r 
                                        = (0x40133U 
                                           & vlSelf->__PVT__u_csr__DOT__csr_sr_q);
                                    if (((IData)(vlSelf->__PVT__u_csr__DOT__set_r) 
                                         & (IData)(vlSelf->__PVT__u_csr__DOT__clr_r))) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                            = vlSelf->__PVT__u_csr__DOT__data_r;
                                    } else if (vlSelf->__PVT__u_csr__DOT__set_r) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                            = (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                               | vlSelf->__PVT__u_csr__DOT__data_r);
                                    } else if (vlSelf->__PVT__u_csr__DOT__clr_r) {
                                        vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                            = (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                               & (~ vlSelf->__PVT__u_csr__DOT__data_r));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                & (IData)((0ULL != (0xc000000000ULL 
                                    & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))))) {
        if (((1U >= (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
             & (0U != (vlSelf->__PVT__u_csr__DOT__exc_src_w 
                       & vlSelf->__PVT__u_csr__DOT__csr_medeleg_q)))) {
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffffdfU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | (0x20U 
                                                      & (vlSelf->__PVT__u_csr__DOT__csr_sr_q 
                                                         << 4U)));
            vlSelf->__PVT__u_csr__DOT__csr_mpriv_r = 1U;
            vlSelf->__PVT__u_csr__DOT__csr_sepc_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
            vlSelf->__PVT__u_csr__DOT__csr_scause_r 
                = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x27U))) ? 3U : 
                   ((IData)(8U) + (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)));
            vlSelf->__PVT__u_csr__DOT__csr_stval_r = 0U;
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xfffffeffU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                      << 8U));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0xfffffffdU 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffff7fU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | (0x80U 
                                                      & (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                         << 4U)));
            vlSelf->__PVT__u_csr__DOT__csr_mpriv_r = 3U;
            vlSelf->__PVT__u_csr__DOT__csr_mepc_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
            vlSelf->__PVT__u_csr__DOT__csr_mcause_r 
                = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x27U))) ? 3U : 
                   ((IData)(8U) + (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xffffe7ffU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | ((IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q) 
                                                      << 0xbU));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0xfffffff7U 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_sr_r);
        }
    } else if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x28U)))) {
        if ((0x20000000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)) {
            vlSelf->__PVT__u_csr__DOT__csr_mpriv_r 
                = (3U & (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                         >> 0xbU));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xfffffff7U 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | (8U 
                                                      & (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                         >> 4U)));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0x80U 
                                                   | vlSelf->__PVT__u_csr__DOT__csr_sr_r);
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0xffffe7ffU 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSelf->__PVT__u_csr__DOT__csr_mpriv_r 
                = ((0x100U & vlSelf->__PVT__u_csr__DOT__csr_sr_r)
                    ? 1U : 0U);
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (
                                                   (0xfffffffdU 
                                                    & vlSelf->__PVT__u_csr__DOT__csr_sr_r) 
                                                   | (2U 
                                                      & (vlSelf->__PVT__u_csr__DOT__csr_sr_r 
                                                         >> 4U)));
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0x20U 
                                                   | vlSelf->__PVT__u_csr__DOT__csr_sr_r);
            vlSelf->__PVT__u_csr__DOT__csr_sr_r = (0xfffffeffU 
                                                   & vlSelf->__PVT__u_csr__DOT__csr_sr_r);
        }
    }
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q) {
        vlSelf->__PVT__u_csr__DOT__csr_mip_r = ((0x200U 
                                                 & vlSelf->__PVT__u_csr__DOT__csr_mideleg_q)
                                                 ? 
                                                (0x200U 
                                                 | vlSelf->__PVT__u_csr__DOT__csr_mip_r)
                                                 : 
                                                (0x800U 
                                                 | vlSelf->__PVT__u_csr__DOT__csr_mip_r));
    }
    vlSelf->__PVT__u_fetch__DOT__branch_pc_w = (((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_branch_o)) 
                                                 & (IData)(vlSelf->__PVT__u_fetch__DOT__branch_valid_q))
                                                 ? vlSelf->__PVT__u_fetch__DOT__branch_pc_q
                                                 : 
                                                ((IData)(vlSelf->__PVT__u_csr__DOT__branch_q)
                                                  ? vlSelf->__PVT__u_csr__DOT__branch_target_q
                                                  : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r));
    vlSelf->__PVT__u_fetch__DOT__branch_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_branch_o) 
                                             | (IData)(vlSelf->__PVT__u_fetch__DOT__branch_valid_q));
    vlSelf->__PVT__u_csr__DOT__branch_r = 0U;
    vlSelf->__PVT__u_csr__DOT__branch_target_r = 0U;
    if (vlSelf->__PVT__u_csr__DOT__take_exception_r) {
        vlSelf->__PVT__u_csr__DOT__branch_r = 1U;
        vlSelf->__PVT__u_csr__DOT__branch_target_r 
            = (((1U >= (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                & (IData)(vlSelf->__PVT__u_csr__DOT__exception_s_r))
                ? vlSelf->__PVT__u_csr__DOT__csr_stvec_q
                : vlSelf->__PVT__u_csr__DOT__csr_mtvec_q);
    } else if (vlSelf->__PVT__u_csr__DOT__take_intr_r) {
        vlSelf->__PVT__u_csr__DOT__branch_r = 1U;
        vlSelf->__PVT__u_csr__DOT__branch_target_r 
            = (((1U >= (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                & (IData)(vlSelf->__PVT__u_csr__DOT__interrupt_s_r))
                ? vlSelf->__PVT__u_csr__DOT__csr_stvec_q
                : vlSelf->__PVT__u_csr__DOT__csr_mtvec_q);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x26U)))) {
        vlSelf->__PVT__u_csr__DOT__branch_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o;
        vlSelf->__PVT__u_csr__DOT__branch_target_r 
            = (((1U >= (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                & (0U != (vlSelf->__PVT__u_csr__DOT__exc_src_w 
                          & vlSelf->__PVT__u_csr__DOT__csr_medeleg_q)))
                ? vlSelf->__PVT__u_csr__DOT__csr_stvec_q
                : vlSelf->__PVT__u_csr__DOT__csr_mtvec_q);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x27U)))) {
        vlSelf->__PVT__u_csr__DOT__branch_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o;
        vlSelf->__PVT__u_csr__DOT__branch_target_r 
            = (((1U >= (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q)) 
                & (0U != (vlSelf->__PVT__u_csr__DOT__exc_src_w 
                          & vlSelf->__PVT__u_csr__DOT__csr_medeleg_q)))
                ? vlSelf->__PVT__u_csr__DOT__csr_stvec_q
                : vlSelf->__PVT__u_csr__DOT__csr_mtvec_q);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x28U)))) {
        vlSelf->__PVT__u_csr__DOT__branch_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o;
        vlSelf->__PVT__u_csr__DOT__branch_target_r 
            = ((0x20000000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                ? vlSelf->__PVT__u_csr__DOT__csr_mepc_q
                : vlSelf->__PVT__u_csr__DOT__csr_sepc_q);
    }
    vlSelf->__PVT__fetch_valid_w = ((~ (IData)(vlSelf->__PVT__u_fetch__DOT__branch_w)) 
                                    & ((IData)(vlSelf->__PVT__u_fetch__DOT__fetch_page_fault_q) 
                                       | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o) 
                                          | (IData)(vlSelf->__PVT__u_fetch__DOT__skid_valid_q))));
    vlSelf->__PVT__mmu_ifetch_pc_w = ((IData)(vlSelf->__PVT__u_fetch__DOT__branch_w)
                                       ? vlSelf->__PVT__u_fetch__DOT__branch_pc_w
                                       : vlSelf->__PVT__u_fetch__DOT__fetch_pc_q);
    vlSelf->__PVT__u_mmu__DOT__request_addr_w = ((0U 
                                                  == (IData)(vlSelf->__PVT__u_mmu__DOT__state_q))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_miss_w)
                                                   ? vlSelf->__PVT__u_mmu__DOT__lsu_addr_w
                                                   : vlSelf->__PVT__mmu_ifetch_pc_w)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__u_mmu__DOT__dtlb_req_q)
                                                   ? vlSelf->__PVT__u_mmu__DOT__lsu_addr_w
                                                   : vlSelf->__PVT__mmu_ifetch_pc_w));
    vlSelf->__PVT__mem_i_pc_o = ((IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w)
                                  ? ((0xfffff000U & vlSelf->__PVT__u_mmu__DOT__itlb_entry_q) 
                                     | (0xfffU & vlSelf->__PVT__mmu_ifetch_pc_w))
                                  : vlSelf->__PVT__mmu_ifetch_pc_w);
    vlSelf->__PVT__u_mmu__DOT__itlb_hit_w = ((IData)(vlSelf->__PVT__mmu_ifetch_rd_w) 
                                             & ((IData)(vlSelf->__PVT__u_mmu__DOT__itlb_valid_q) 
                                                & (vlSelf->__PVT__u_mmu__DOT__itlb_va_addr_q 
                                                   == 
                                                   (vlSelf->__PVT__mmu_ifetch_pc_w 
                                                    >> 0xcU))));
    vlSelf->__PVT__u_mmu__DOT__itlb_miss_w = ((IData)(vlSelf->__PVT__mmu_ifetch_rd_w) 
                                              & ((~ (IData)(vlSelf->__PVT__u_mmu__DOT__itlb_hit_w)) 
                                                 & (IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w)));
    u_mmu__DOT____VdfgExtracted_hb9061b79__0 = ((IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w) 
                                                & (IData)(vlSelf->__PVT__u_mmu__DOT__itlb_hit_w));
    vlSelf->__PVT__u_mmu__DOT__pc_fault_r = 0U;
    if (u_mmu__DOT____VdfgExtracted_hb9061b79__0) {
        vlSelf->__PVT__u_mmu__DOT__pc_fault_r = (1U 
                                                 & ((1U 
                                                     == (IData)(vlSelf->__PVT__u_csr__DOT__csr_mpriv_q))
                                                     ? 
                                                    (((vlSelf->__PVT__u_mmu__DOT__itlb_entry_q 
                                                       >> 4U) 
                                                      & (~ 
                                                         (vlSelf->__PVT__u_csr__DOT__csr_sr_q 
                                                          >> 0x12U))) 
                                                     | (~ 
                                                        (vlSelf->__PVT__u_mmu__DOT__itlb_entry_q 
                                                         >> 3U)))
                                                     : (IData)(
                                                               (0x18U 
                                                                != 
                                                                (0x18U 
                                                                 & vlSelf->__PVT__u_mmu__DOT__itlb_entry_q)))));
    }
    vlSelf->__PVT__mem_i_rd_o = (((~ (IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w)) 
                                  & (IData)(vlSelf->__PVT__mmu_ifetch_rd_w)) 
                                 | ((~ (IData)(vlSelf->__PVT__u_mmu__DOT__pc_fault_r)) 
                                    & (IData)(vlSelf->__PVT__u_mmu__DOT__itlb_hit_w)));
    vlSelf->__PVT__mmu_ifetch_accept_w = ((((~ (IData)(vlSelf->__PVT__u_mmu__DOT__vm_enable_w)) 
                                            | (IData)(u_mmu__DOT____VdfgExtracted_hb9061b79__0)) 
                                           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o)) 
                                          | (IData)(vlSelf->__PVT__u_mmu__DOT__pc_fault_r));
    vlSelf->__PVT__u_fetch__DOT__stall_w = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o)) 
                                                  | ((~ (IData)(vlSelf->__PVT__mmu_ifetch_accept_w)) 
                                                     | (IData)(vlSelf->__PVT__u_fetch__DOT__icache_busy_w))));
}
