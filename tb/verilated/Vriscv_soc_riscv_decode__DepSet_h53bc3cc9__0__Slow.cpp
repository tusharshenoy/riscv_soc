// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc_riscv_decode.h"

VL_ATTR_COLD void Vriscv_soc_riscv_decode___ctor_var_reset(Vriscv_soc_riscv_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_instr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_request_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_csr_request_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_csr_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__writeback_exec_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__writeback_exec_squash_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_exec_value_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__writeback_mem_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__writeback_mem_squash_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_mem_value_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__writeback_csr_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__writeback_csr_squash_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_csr_value_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__writeback_muldiv_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__writeback_muldiv_squash_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_muldiv_value_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exec_stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu_stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_branch_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_branch_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exec_opcode_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu_opcode_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_opcode_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_opcode_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_instr_o = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__opcode_opcode_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rd_idx_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_idx_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_rb_idx_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_operand_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rb_operand_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fetch_invalidate_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fault_fetch_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__scoreboard_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stall_scoreboard_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_input_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_csr_rd_w = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ifence_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__scoreboard_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_instr_q = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__opcode_ra_operand_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rb_operand_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_valid_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__current_scoreboard_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80, vlSelf->__PVT__dbg_inst_str);
    VL_RAND_RESET_W(80, vlSelf->__PVT__dbg_inst_ra);
    VL_RAND_RESET_W(80, vlSelf->__PVT__dbg_inst_rb);
    VL_RAND_RESET_W(80, vlSelf->__PVT__dbg_inst_rd);
    vlSelf->__PVT__dbg_inst_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dbg_inst_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80, vlSelf->__VdfgExtracted_h3eca160f__0);
    VL_RAND_RESET_W(80, vlSelf->__VdfgExtracted_h09ef7aaa__0);
    VL_RAND_RESET_W(80, vlSelf->__VdfgExtracted_hf25855dd__0);
    vlSelf->__VdfgExtracted_h7a81245e__0 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h709db973__0 = 0;
    vlSelf->__VdfgTmp_h058363c8__0 = 0;
    vlSelf->__VdfgTmp_h53fea6f4__0 = 0;
    vlSelf->__Vdly__pc_q = VL_RAND_RESET_I(32);
}
