// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_riscv_exec.h"

VL_ATTR_COLD void Vriscv_soc_riscv_exec___stl_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___stl_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0\n"); );
    // Body
    vlSelf->__PVT__write_rd_r = 0U;
    vlSelf->__PVT__alu_func_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0xbU)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 4U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x11U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 7U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x10U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 8U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x12U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x14U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 3U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x13U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 2U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xcU)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 6U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xfU)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 9U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xdU)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 0xbU;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0xeU)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 0xaU;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 1U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 4U;
    } else if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 7U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 2U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 0xbU;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 3U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 0xaU;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 4U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 8U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 5U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 9U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 6U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 7U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 2U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 8U)))) {
        vlSelf->__PVT__write_rd_r = 1U;
        vlSelf->__PVT__alu_func_r = 3U;
    } else {
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 9U)))) {
            vlSelf->__PVT__write_rd_r = 1U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0xaU)))) {
            vlSelf->__PVT__write_rd_r = 1U;
        } else if ((IData)((0ULL != (0x600000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))) {
            vlSelf->__PVT__write_rd_r = 1U;
        }
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
    }
    vlSelf->__PVT__imm12_r = (((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x14U));
}
