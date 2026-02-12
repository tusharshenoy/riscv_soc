// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_riscv_exec.h"

VL_INLINE_OPT void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0\n"); );
    // Body
    vlSelf->__PVT__v_dbg_valid_q = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i))) 
                                    && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o));
    vlSelf->__PVT__v_dbg_pc_q = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i)
                                  ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q);
}

VL_INLINE_OPT void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__1(Vriscv_soc_riscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__1\n"); );
    // Body
    vlSelf->__PVT__alu_func_r = 0U;
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelf->__PVT__result_q = 0U;
        vlSelf->__PVT__rd_x_q = 0U;
    } else {
        vlSelf->__PVT__result_q = vlSelf->__PVT__u_alu__DOT__result_r;
        vlSelf->__PVT__rd_x_q = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o) 
                                  & (IData)(vlSelf->__PVT__write_rd_r))
                                  ? (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 7U))
                                  : 0U);
    }
    vlSelf->__PVT__write_rd_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0xbU)))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x11U)))) {
        vlSelf->__PVT__alu_func_r = 7U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x10U)))) {
        vlSelf->__PVT__alu_func_r = 8U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x12U)))) {
        vlSelf->__PVT__alu_func_r = 1U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x14U)))) {
        vlSelf->__PVT__alu_func_r = 3U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x13U)))) {
        vlSelf->__PVT__alu_func_r = 2U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xcU)))) {
        vlSelf->__PVT__alu_func_r = 6U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xfU)))) {
        vlSelf->__PVT__alu_func_r = 9U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xdU)))) {
        vlSelf->__PVT__alu_func_r = 0xbU;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xeU)))) {
        vlSelf->__PVT__alu_func_r = 0xaU;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 1U)))) {
        vlSelf->__PVT__alu_func_r = 4U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
        vlSelf->__PVT__alu_func_r = 7U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 2U)))) {
        vlSelf->__PVT__alu_func_r = 0xbU;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 3U)))) {
        vlSelf->__PVT__alu_func_r = 0xaU;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 4U)))) {
        vlSelf->__PVT__alu_func_r = 8U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 5U)))) {
        vlSelf->__PVT__alu_func_r = 9U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 6U)))) {
        vlSelf->__PVT__alu_func_r = 1U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 7U)))) {
        vlSelf->__PVT__alu_func_r = 2U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 8U)))) {
        vlSelf->__PVT__alu_func_r = 3U;
        vlSelf->__PVT__write_rd_r = 1U;
    } else {
        if ((1U & (~ (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 9U))))) {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0xaU)))) {
                vlSelf->__PVT__alu_func_r = 4U;
            } else if ((IData)((0ULL != (0x600000ULL 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))) {
                vlSelf->__PVT__alu_func_r = 4U;
            }
        }
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 9U)))) {
            vlSelf->__PVT__write_rd_r = 1U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0xaU)))) {
            vlSelf->__PVT__write_rd_r = 1U;
        } else if ((IData)((0ULL != (0x600000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))) {
            vlSelf->__PVT__write_rd_r = 1U;
        }
    }
}

VL_INLINE_OPT void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2(Vriscv_soc_riscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2\n"); );
    // Body
    vlSelf->__PVT__imm12_r = (((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x14U));
}

VL_INLINE_OPT void Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0\n"); );
    // Body
    vlSelf->__PVT__alu_input_b_r = 0U;
    vlSelf->__PVT__alu_input_a_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0xbU)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x11U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x10U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x12U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x14U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x13U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xcU)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xfU)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xdU)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xeU)))) {
        vlSelf->__PVT__alu_input_b_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 1U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 2U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 3U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 4U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 5U)))) {
        vlSelf->__PVT__alu_input_b_r = vlSelf->__PVT__imm12_r;
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 6U)))) {
        vlSelf->__PVT__alu_input_b_r = (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x14U));
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 7U)))) {
        vlSelf->__PVT__alu_input_b_r = (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x14U));
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 8U)))) {
        vlSelf->__PVT__alu_input_b_r = (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x14U));
        vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else {
        if ((1U & (~ (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 9U))))) {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0xaU)))) {
                vlSelf->__PVT__alu_input_b_r = (0xfffff000U 
                                                & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q);
            } else if ((IData)((0ULL != (0x600000ULL 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))) {
                vlSelf->__PVT__alu_input_b_r = 4U;
            }
        }
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 9U)))) {
            vlSelf->__PVT__alu_input_a_r = (0xfffff000U 
                                            & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q);
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0xaU)))) {
            vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
        } else if ((IData)((0ULL != (0x600000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))) {
            vlSelf->__PVT__alu_input_a_r = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
        }
    }
    vlSelf->__PVT__branch_r = 0U;
    vlSelf->__PVT__branch_target_r = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                                      + (((- (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x1fU))) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                        >> 7U)))))));
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x15U)))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                                          + (((- (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 9U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                            >> 0x14U)))))));
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x16U)))) {
        vlSelf->__PVT__branch_r = 1U;
        vlSelf->__PVT__branch_target_r = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                          + vlSelf->__PVT__imm12_r);
        vlSelf->__PVT__branch_target_r = (0xfffffffeU 
                                          & vlSelf->__PVT__branch_target_r);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x17U)))) {
        vlSelf->__PVT__branch_r = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                   == vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x18U)))) {
        vlSelf->__PVT__branch_r = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                   != vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x19U)))) {
        vlSelf->__Vfunc_less_than_signed__0__y = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        vlSelf->__Vfunc_less_than_signed__0__x = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
        vlSelf->__PVT__less_than_signed__Vstatic__v 
            = (vlSelf->__Vfunc_less_than_signed__0__x 
               - vlSelf->__Vfunc_less_than_signed__0__y);
        vlSelf->__Vfunc_less_than_signed__0__Vfuncout 
            = (1U & (((vlSelf->__Vfunc_less_than_signed__0__x 
                       >> 0x1fU) != (vlSelf->__Vfunc_less_than_signed__0__y 
                                     >> 0x1fU)) ? (vlSelf->__Vfunc_less_than_signed__0__x 
                                                   >> 0x1fU)
                      : (vlSelf->__PVT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelf->__PVT__branch_r = vlSelf->__Vfunc_less_than_signed__0__Vfuncout;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x1aU)))) {
        vlSelf->__PVT__branch_r = (([&]() {
                    vlSelf->__Vfunc_greater_than_signed__1__y 
                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                    vlSelf->__Vfunc_greater_than_signed__1__x 
                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                    vlSelf->__PVT__greater_than_signed__Vstatic__v 
                        = (vlSelf->__Vfunc_greater_than_signed__1__y 
                           - vlSelf->__Vfunc_greater_than_signed__1__x);
                    vlSelf->__Vfunc_greater_than_signed__1__Vfuncout 
                        = (1U & (((vlSelf->__Vfunc_greater_than_signed__1__x 
                                   >> 0x1fU) != (vlSelf->__Vfunc_greater_than_signed__1__y 
                                                 >> 0x1fU))
                                  ? (vlSelf->__Vfunc_greater_than_signed__1__y 
                                     >> 0x1fU) : (vlSelf->__PVT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelf->__Vfunc_greater_than_signed__1__Vfuncout)) 
                                   | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                      == vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r));
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x1bU)))) {
        vlSelf->__PVT__branch_r = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                   < vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x1cU)))) {
        vlSelf->__PVT__branch_r = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                   >= vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r);
    }
    vlSelf->__PVT__u_alu__DOT__sub_res_w = (vlSelf->__PVT__alu_input_a_r 
                                            - vlSelf->__PVT__alu_input_b_r);
    vlSelf->__PVT__branch_request_o = ((IData)(vlSelf->__PVT__branch_r) 
                                       & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o));
    if ((8U & (IData)(vlSelf->__PVT__alu_func_r))) {
        vlSelf->__PVT__u_alu__DOT__result_r = ((4U 
                                                & (IData)(vlSelf->__PVT__alu_func_r))
                                                ? vlSelf->__PVT__alu_input_a_r
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__alu_func_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__alu_func_r))
                                                     ? 
                                                    (((vlSelf->__PVT__alu_input_a_r 
                                                       >> 0x1fU) 
                                                      != 
                                                      (vlSelf->__PVT__alu_input_b_r 
                                                       >> 0x1fU))
                                                      ? 
                                                     ((vlSelf->__PVT__alu_input_a_r 
                                                       >> 0x1fU)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((vlSelf->__PVT__u_alu__DOT__sub_res_w 
                                                       >> 0x1fU)
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((vlSelf->__PVT__alu_input_a_r 
                                                      < vlSelf->__PVT__alu_input_b_r)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__alu_func_r))
                                                     ? 
                                                    (vlSelf->__PVT__alu_input_a_r 
                                                     ^ vlSelf->__PVT__alu_input_b_r)
                                                     : 
                                                    (vlSelf->__PVT__alu_input_a_r 
                                                     | vlSelf->__PVT__alu_input_b_r))));
    } else if ((4U & (IData)(vlSelf->__PVT__alu_func_r))) {
        vlSelf->__PVT__u_alu__DOT__result_r = ((2U 
                                                & (IData)(vlSelf->__PVT__alu_func_r))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__alu_func_r))
                                                    ? 
                                                   (vlSelf->__PVT__alu_input_a_r 
                                                    & vlSelf->__PVT__alu_input_b_r)
                                                    : vlSelf->__PVT__u_alu__DOT__sub_res_w)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__alu_func_r))
                                                    ? vlSelf->__PVT__alu_input_a_r
                                                    : 
                                                   (vlSelf->__PVT__alu_input_a_r 
                                                    + vlSelf->__PVT__alu_input_b_r)));
    } else if ((2U & (IData)(vlSelf->__PVT__alu_func_r))) {
        vlSelf->__PVT__u_alu__DOT__shift_right_fill_r 
            = (((vlSelf->__PVT__alu_input_a_r >> 0x1fU) 
                & (3U == (IData)(vlSelf->__PVT__alu_func_r)))
                ? 0xffffU : 0U);
        vlSelf->__PVT__u_alu__DOT__shift_right_1_r 
            = ((1U & vlSelf->__PVT__alu_input_b_r) ? 
               ((0x80000000U & ((IData)(vlSelf->__PVT__u_alu__DOT__shift_right_fill_r) 
                                << 0x10U)) | (vlSelf->__PVT__alu_input_a_r 
                                              >> 1U))
                : vlSelf->__PVT__alu_input_a_r);
        vlSelf->__PVT__u_alu__DOT__shift_right_2_r 
            = ((2U & vlSelf->__PVT__alu_input_b_r) ? 
               ((0xc0000000U & ((IData)(vlSelf->__PVT__u_alu__DOT__shift_right_fill_r) 
                                << 0x10U)) | (vlSelf->__PVT__u_alu__DOT__shift_right_1_r 
                                              >> 2U))
                : vlSelf->__PVT__u_alu__DOT__shift_right_1_r);
        vlSelf->__PVT__u_alu__DOT__shift_right_4_r 
            = ((4U & vlSelf->__PVT__alu_input_b_r) ? 
               ((0xf0000000U & ((IData)(vlSelf->__PVT__u_alu__DOT__shift_right_fill_r) 
                                << 0x10U)) | (vlSelf->__PVT__u_alu__DOT__shift_right_2_r 
                                              >> 4U))
                : vlSelf->__PVT__u_alu__DOT__shift_right_2_r);
        vlSelf->__PVT__u_alu__DOT__shift_right_8_r 
            = ((8U & vlSelf->__PVT__alu_input_b_r) ? 
               ((0xff000000U & ((IData)(vlSelf->__PVT__u_alu__DOT__shift_right_fill_r) 
                                << 0x10U)) | (vlSelf->__PVT__u_alu__DOT__shift_right_4_r 
                                              >> 8U))
                : vlSelf->__PVT__u_alu__DOT__shift_right_4_r);
        vlSelf->__PVT__u_alu__DOT__result_r = ((0x10U 
                                                & vlSelf->__PVT__alu_input_b_r)
                                                ? (
                                                   ((IData)(vlSelf->__PVT__u_alu__DOT__shift_right_fill_r) 
                                                    << 0x10U) 
                                                   | (vlSelf->__PVT__u_alu__DOT__shift_right_8_r 
                                                      >> 0x10U))
                                                : vlSelf->__PVT__u_alu__DOT__shift_right_8_r);
    } else if ((1U & (IData)(vlSelf->__PVT__alu_func_r))) {
        vlSelf->__PVT__u_alu__DOT__shift_left_1_r = 
            ((1U & vlSelf->__PVT__alu_input_b_r) ? 
             (vlSelf->__PVT__alu_input_a_r << 1U) : vlSelf->__PVT__alu_input_a_r);
        vlSelf->__PVT__u_alu__DOT__shift_left_2_r = 
            ((2U & vlSelf->__PVT__alu_input_b_r) ? 
             (vlSelf->__PVT__u_alu__DOT__shift_left_1_r 
              << 2U) : vlSelf->__PVT__u_alu__DOT__shift_left_1_r);
        vlSelf->__PVT__u_alu__DOT__shift_left_4_r = 
            ((4U & vlSelf->__PVT__alu_input_b_r) ? 
             (vlSelf->__PVT__u_alu__DOT__shift_left_2_r 
              << 4U) : vlSelf->__PVT__u_alu__DOT__shift_left_2_r);
        vlSelf->__PVT__u_alu__DOT__shift_left_8_r = 
            ((8U & vlSelf->__PVT__alu_input_b_r) ? 
             (vlSelf->__PVT__u_alu__DOT__shift_left_4_r 
              << 8U) : vlSelf->__PVT__u_alu__DOT__shift_left_4_r);
        vlSelf->__PVT__u_alu__DOT__result_r = ((0x10U 
                                                & vlSelf->__PVT__alu_input_b_r)
                                                ? (vlSelf->__PVT__u_alu__DOT__shift_left_8_r 
                                                   << 0x10U)
                                                : vlSelf->__PVT__u_alu__DOT__shift_left_8_r);
    } else {
        vlSelf->__PVT__u_alu__DOT__result_r = vlSelf->__PVT__alu_input_a_r;
    }
}
