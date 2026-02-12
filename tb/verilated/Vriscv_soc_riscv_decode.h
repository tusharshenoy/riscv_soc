// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_RISCV_DECODE_H_
#define VERILATED_VRISCV_SOC_RISCV_DECODE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_soc_riscv_regfile;


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_riscv_decode final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_soc_riscv_regfile* u_regfile;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__fetch_valid_i,0,0);
        VL_IN8(__PVT__branch_request_i,0,0);
        VL_IN8(__PVT__branch_csr_request_i,0,0);
        VL_IN8(__PVT__writeback_exec_idx_i,4,0);
        VL_IN8(__PVT__writeback_exec_squash_i,0,0);
        VL_IN8(__PVT__writeback_mem_idx_i,4,0);
        VL_IN8(__PVT__writeback_mem_squash_i,0,0);
        VL_IN8(__PVT__writeback_csr_idx_i,4,0);
        VL_IN8(__PVT__writeback_csr_squash_i,0,0);
        VL_IN8(__PVT__writeback_muldiv_idx_i,4,0);
        VL_IN8(__PVT__writeback_muldiv_squash_i,0,0);
        VL_IN8(__PVT__exec_stall_i,0,0);
        VL_IN8(__PVT__lsu_stall_i,0,0);
        VL_IN8(__PVT__csr_stall_i,0,0);
        VL_IN8(__PVT__muldiv_stall_i,0,0);
        VL_OUT8(__PVT__fetch_branch_o,0,0);
        VL_OUT8(__PVT__fetch_accept_o,0,0);
        VL_OUT8(__PVT__exec_opcode_valid_o,0,0);
        VL_OUT8(__PVT__lsu_opcode_valid_o,0,0);
        VL_OUT8(__PVT__csr_opcode_valid_o,0,0);
        VL_OUT8(__PVT__muldiv_opcode_valid_o,0,0);
        VL_OUT8(__PVT__opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__fetch_invalidate_o,0,0);
        CData/*0:0*/ __PVT__valid_q;
        CData/*0:0*/ __PVT__fault_fetch_q;
        CData/*0:0*/ __PVT__stall_scoreboard_r;
        CData/*0:0*/ __PVT__stall_input_w;
        CData/*4:0*/ __PVT__wb_csr_rd_w;
        CData/*0:0*/ __PVT__ifence_q;
        CData/*0:0*/ __PVT__opcode_valid_r;
        CData/*0:0*/ __VdfgTmp_h058363c8__0;
        CData/*0:0*/ __VdfgTmp_h53fea6f4__0;
        VL_IN(__PVT__fetch_instr_i,31,0);
        VL_IN(__PVT__fetch_pc_i,31,0);
        VL_IN(__PVT__branch_pc_i,31,0);
        VL_IN(__PVT__branch_csr_pc_i,31,0);
        VL_IN(__PVT__writeback_exec_value_i,31,0);
        VL_IN(__PVT__writeback_mem_value_i,31,0);
        VL_IN(__PVT__writeback_csr_value_i,31,0);
        VL_IN(__PVT__writeback_muldiv_value_i,31,0);
        VL_OUT(__PVT__fetch_branch_pc_o,31,0);
        VL_OUT(__PVT__opcode_opcode_o,31,0);
        VL_OUT(__PVT__opcode_pc_o,31,0);
        VL_OUT(__PVT__opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__opcode_rb_operand_o,31,0);
        IData/*31:0*/ __PVT__pc_q;
        IData/*31:0*/ __PVT__inst_q;
        IData/*31:0*/ __PVT__scoreboard_q;
        IData/*31:0*/ __PVT__scoreboard_r;
        IData/*31:0*/ __PVT__opcode_ra_operand_r;
        IData/*31:0*/ __PVT__opcode_rb_operand_r;
        IData/*31:0*/ __PVT__current_scoreboard_r;
        VlWide<3>/*79:0*/ __PVT__dbg_inst_str;
        VlWide<3>/*79:0*/ __PVT__dbg_inst_ra;
        VlWide<3>/*79:0*/ __PVT__dbg_inst_rb;
        VlWide<3>/*79:0*/ __PVT__dbg_inst_rd;
        IData/*31:0*/ __PVT__dbg_inst_imm;
        IData/*31:0*/ __PVT__dbg_inst_pc;
        VlWide<3>/*79:0*/ __VdfgExtracted_h3eca160f__0;
        VlWide<3>/*79:0*/ __VdfgExtracted_h09ef7aaa__0;
    };
    struct {
        VlWide<3>/*79:0*/ __VdfgExtracted_hf25855dd__0;
        IData/*31:0*/ __VdfgExtracted_h7a81245e__0;
        IData/*31:0*/ __Vdly__pc_q;
        VL_OUT64(__PVT__opcode_instr_o,57,0);
        QData/*57:0*/ __PVT__opcode_instr_q;
        QData/*56:0*/ __VdfgTmp_h709db973__0;
    };

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_soc_riscv_decode(Vriscv_soc__Syms* symsp, const char* v__name);
    ~Vriscv_soc_riscv_decode();
    VL_UNCOPYABLE(Vriscv_soc_riscv_decode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    bool get_reg_valid(uint32_t r);
    uint32_t get_register(uint32_t r);
    bool set_register(uint32_t r, uint32_t value);
};


#endif  // guard
