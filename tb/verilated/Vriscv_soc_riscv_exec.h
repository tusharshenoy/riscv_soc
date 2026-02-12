// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_RISCV_EXEC_H_
#define VERILATED_VRISCV_SOC_RISCV_EXEC_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_riscv_exec final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__opcode_valid_i,0,0);
    VL_IN8(__PVT__opcode_rd_idx_i,4,0);
    VL_IN8(__PVT__opcode_ra_idx_i,4,0);
    VL_IN8(__PVT__opcode_rb_idx_i,4,0);
    VL_OUT8(__PVT__branch_request_o,0,0);
    VL_OUT8(__PVT__writeback_idx_o,4,0);
    VL_OUT8(__PVT__writeback_squash_o,0,0);
    VL_OUT8(__PVT__stall_o,0,0);
    CData/*4:0*/ __PVT__rd_x_q;
    CData/*3:0*/ __PVT__alu_func_r;
    CData/*0:0*/ __PVT__write_rd_r;
    CData/*0:0*/ __PVT__branch_r;
    CData/*0:0*/ __PVT__v_dbg_valid_q;
    CData/*0:0*/ __Vfunc_less_than_signed__0__Vfuncout;
    CData/*0:0*/ __Vfunc_greater_than_signed__1__Vfuncout;
    SData/*15:0*/ __PVT__u_alu__DOT__shift_right_fill_r;
    VL_IN(__PVT__opcode_opcode_i,31,0);
    VL_IN(__PVT__opcode_pc_i,31,0);
    VL_IN(__PVT__opcode_ra_operand_i,31,0);
    VL_IN(__PVT__opcode_rb_operand_i,31,0);
    VL_OUT(__PVT__branch_pc_o,31,0);
    VL_OUT(__PVT__writeback_value_o,31,0);
    IData/*31:0*/ __PVT__imm12_r;
    IData/*31:0*/ __PVT__alu_input_a_r;
    IData/*31:0*/ __PVT__alu_input_b_r;
    IData/*31:0*/ __PVT__less_than_signed__Vstatic__v;
    IData/*31:0*/ __PVT__greater_than_signed__Vstatic__v;
    IData/*31:0*/ __PVT__branch_target_r;
    IData/*31:0*/ __PVT__result_q;
    IData/*31:0*/ __PVT__v_dbg_pc_q;
    IData/*31:0*/ __PVT__u_alu__DOT__result_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_right_1_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_right_2_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_right_4_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_right_8_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_left_1_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_left_2_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_left_4_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_left_8_r;
    IData/*31:0*/ __PVT__u_alu__DOT__sub_res_w;
    IData/*31:0*/ __Vfunc_less_than_signed__0__x;
    IData/*31:0*/ __Vfunc_less_than_signed__0__y;
    IData/*31:0*/ __Vfunc_greater_than_signed__1__x;
    IData/*31:0*/ __Vfunc_greater_than_signed__1__y;
    VL_IN64(__PVT__opcode_instr_i,57,0);

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_soc_riscv_exec(Vriscv_soc__Syms* symsp, const char* v__name);
    ~Vriscv_soc_riscv_exec();
    VL_UNCOPYABLE(Vriscv_soc_riscv_exec);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t get_pc();
    bool get_valid();
};


#endif  // guard
