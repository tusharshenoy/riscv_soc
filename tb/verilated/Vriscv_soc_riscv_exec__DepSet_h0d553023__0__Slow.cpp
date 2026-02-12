// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc_riscv_exec.h"

VL_ATTR_COLD void Vriscv_soc_riscv_exec___ctor_var_reset(Vriscv_soc_riscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_instr_i = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__opcode_opcode_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rd_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_rb_idx_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__opcode_ra_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opcode_rb_operand_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_request_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__writeback_idx_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__writeback_squash_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stall_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_x_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__imm12_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_func_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__alu_input_a_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_input_b_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__write_rd_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__less_than_signed__Vstatic__v = VL_RAND_RESET_I(32);
    vlSelf->__PVT__greater_than_signed__Vstatic__v = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_target_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__v_dbg_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__v_dbg_pc_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__result_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__shift_right_fill_r = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_alu__DOT__shift_right_1_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__shift_right_2_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__shift_right_4_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__shift_right_8_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__shift_left_1_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__shift_left_2_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__shift_left_4_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__shift_left_8_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_alu__DOT__sub_res_w = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_less_than_signed__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_less_than_signed__0__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_less_than_signed__0__y = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_greater_than_signed__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_greater_than_signed__1__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_greater_than_signed__1__y = VL_RAND_RESET_I(32);
}
