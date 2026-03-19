//=================================================================
//  tb_riscv_core.v  —  rv32imsu  Comprehensive Pipeline Testbench
//
//  Usage:
//    vvp sim.out                        <- runs built-in program
//    vvp sim.out +HEX_FILE=test.hex     <- loads your hex file
//
//  Built-in program:
//    addi x1, x0, 5
//    addi x2, x0, 3
//    add  x3, x1, x2   -> x3 = 8
//    jal  x0, halt
//=================================================================

module tb_riscv_core;

//------------------------------------------------------------------
// Parameters
//------------------------------------------------------------------
parameter MEM_SIZE   = 65536;
parameter RST_DELAY  = 8;
parameter SIM_CYCLES = 5000;

//------------------------------------------------------------------
// Clock / Reset
//------------------------------------------------------------------
reg clk_i, rst_i;
initial clk_i = 0;
always  #5 clk_i = ~clk_i;

//------------------------------------------------------------------
// DUT ports
//------------------------------------------------------------------
wire [31:0] mem_i_pc_w;
wire        mem_i_rd_w, mem_i_flush_w, mem_i_invalidate_w;
reg         mem_i_accept_r, mem_i_valid_r, mem_i_error_r;
reg  [31:0] mem_i_inst_r;

wire [31:0] mem_d_addr_w, mem_d_data_wr_w;
wire        mem_d_rd_w, mem_d_cacheable_w, mem_d_invalidate_w, mem_d_flush_w;
wire [ 3:0] mem_d_wr_w;
wire [10:0] mem_d_req_tag_w;
reg         mem_d_accept_r, mem_d_ack_r, mem_d_error_r;
reg  [31:0] mem_d_data_rd_r;
reg  [10:0] mem_d_resp_tag_r;

reg  [31:0] reset_vector_i, cpu_id_i;
reg         intr_i;

//------------------------------------------------------------------
// DUT
//------------------------------------------------------------------
riscv_core u_dut (
    .clk_i(clk_i), .rst_i(rst_i),
    .mem_i_accept_i(mem_i_accept_r), .mem_i_valid_i(mem_i_valid_r),
    .mem_i_error_i(mem_i_error_r),   .mem_i_inst_i(mem_i_inst_r),
    .mem_i_rd_o(mem_i_rd_w),         .mem_i_flush_o(mem_i_flush_w),
    .mem_i_invalidate_o(mem_i_invalidate_w), .mem_i_pc_o(mem_i_pc_w),
    .mem_d_data_rd_i(mem_d_data_rd_r), .mem_d_accept_i(mem_d_accept_r),
    .mem_d_ack_i(mem_d_ack_r),         .mem_d_error_i(mem_d_error_r),
    .mem_d_resp_tag_i(mem_d_resp_tag_r),.mem_d_addr_o(mem_d_addr_w),
    .mem_d_data_wr_o(mem_d_data_wr_w),  .mem_d_rd_o(mem_d_rd_w),
    .mem_d_wr_o(mem_d_wr_w),            .mem_d_cacheable_o(mem_d_cacheable_w),
    .mem_d_req_tag_o(mem_d_req_tag_w),  .mem_d_invalidate_o(mem_d_invalidate_w),
    .mem_d_flush_o(mem_d_flush_w),
    .intr_i(intr_i), .reset_vector_i(reset_vector_i), .cpu_id_i(cpu_id_i)
);

//==================================================================
//  PIPELINE SIGNAL TAPS
//==================================================================

// FETCH
wire        FETCH_rd_req      = mem_i_rd_w;
wire        FETCH_accept       = mem_i_accept_r;
wire        FETCH_valid        = mem_i_valid_r;
wire [31:0] FETCH_pc           = mem_i_pc_w;
wire [31:0] FETCH_instr        = mem_i_inst_r;
wire        FETCH_branch       = u_dut.u_fetch.fetch_branch_i;
wire [31:0] FETCH_branch_pc    = u_dut.u_fetch.fetch_branch_pc_i;
wire [31:0] FETCH_stage_pc     = u_dut.u_fetch.fetch_pc_o;
wire [31:0] FETCH_stage_instr  = u_dut.u_fetch.fetch_instr_o;
wire        FETCH_stage_valid  = u_dut.u_fetch.fetch_valid_o;
wire        FETCH_flush        = u_dut.u_fetch.icache_flush_o;
wire        FETCH_invalidate   = u_dut.u_fetch.icache_invalidate_o;

// DECODE
wire        DECODE_valid       = u_dut.u_decode.opcode_valid_r;
wire [31:0] DECODE_pc          = u_dut.u_decode.opcode_pc_o;
wire [31:0] DECODE_instr       = u_dut.u_decode.opcode_opcode_o;
wire [ 4:0] DECODE_rd          = u_dut.u_decode.opcode_rd_idx_o;
wire [ 4:0] DECODE_ra          = u_dut.u_decode.inst_q[19:15];
wire [ 4:0] DECODE_rb          = u_dut.u_decode.inst_q[24:20];
wire [31:0] DECODE_ra_value    = u_dut.u_decode.opcode_ra_operand_o;
wire [31:0] DECODE_rb_value    = u_dut.u_decode.opcode_rb_operand_o;
wire        DECODE_to_ALU      = u_dut.u_decode.exec_opcode_valid_o;
wire        DECODE_to_LSU      = u_dut.u_decode.lsu_opcode_valid_o;
wire        DECODE_to_CSR      = u_dut.u_decode.csr_opcode_valid_o;
wire        DECODE_to_MULDIV   = u_dut.u_decode.muldiv_opcode_valid_o;
wire        DECODE_stall       = u_dut.u_decode.stall_input_w;
wire        DECODE_stall_score = u_dut.u_decode.stall_scoreboard_r;
wire [31:0] DECODE_scoreboard  = u_dut.u_decode.scoreboard_q;

// ALU
wire        ALU_valid      = u_dut.u_decode.exec_opcode_valid_o;
wire [31:0] ALU_pc         = u_dut.u_exec.opcode_pc_i;
wire [31:0] ALU_instr      = u_dut.u_exec.opcode_opcode_i;
wire [31:0] ALU_input_a    = u_dut.u_exec.alu_input_a_r;
wire [31:0] ALU_input_b    = u_dut.u_exec.alu_input_b_r;
wire [ 3:0] ALU_func       = u_dut.u_exec.alu_func_r;
wire [31:0] ALU_result     = u_dut.u_exec.result_q;
wire [ 4:0] ALU_wb_rd      = u_dut.u_exec.writeback_idx_o;
wire [31:0] ALU_wb_val     = u_dut.u_exec.writeback_value_o;
wire        ALU_wb_squash  = u_dut.u_exec.writeback_squash_o;
wire        ALU_stall      = u_dut.u_exec.stall_o;
wire        ALU_branch     = u_dut.u_exec.branch_request_o;
wire [31:0] ALU_branch_pc  = u_dut.u_exec.branch_pc_o;

// MUL/DIV
wire        MULDIV_valid     = u_dut.u_decode.muldiv_opcode_valid_o;
wire [31:0] MULDIV_instr     = u_dut.u_muldiv.opcode_opcode_i;
wire [31:0] MULDIV_op_a      = u_dut.u_muldiv.opcode_ra_operand_i;
wire [31:0] MULDIV_op_b      = u_dut.u_muldiv.opcode_rb_operand_i;
wire        MULDIV_stall     = u_dut.u_muldiv.stall_o;
wire [ 4:0] MULDIV_wb_rd     = u_dut.u_muldiv.writeback_idx_o;
wire [31:0] MULDIV_wb_val    = u_dut.u_muldiv.writeback_value_o;
wire        MULDIV_wb_squash = u_dut.u_muldiv.writeback_squash_o;

// LSU
wire        LSU_valid              = u_dut.u_decode.lsu_opcode_valid_o;
wire [31:0] LSU_instr              = u_dut.u_lsu.opcode_opcode_i;
wire [31:0] LSU_addr               = u_dut.mem_d_addr_o;
wire [31:0] LSU_wdata              = u_dut.mem_d_data_wr_o;
wire        LSU_rd                 = u_dut.mem_d_rd_o;
wire [ 3:0] LSU_wr                 = u_dut.mem_d_wr_o;
wire        LSU_ack                = mem_d_ack_r;
wire [31:0] LSU_rdata              = mem_d_data_rd_r;
wire        LSU_stall              = u_dut.u_lsu.stall_o;
wire [ 4:0] LSU_wb_rd              = u_dut.u_lsu.writeback_idx_o;
wire [31:0] LSU_wb_val             = u_dut.u_lsu.writeback_value_o;
wire        LSU_wb_squash          = u_dut.u_lsu.writeback_squash_o;
wire        LSU_fault_load         = u_dut.u_lsu.fault_load_o;
wire        LSU_fault_store        = u_dut.u_lsu.fault_store_o;
wire        LSU_fault_misalign_load  = u_dut.u_lsu.fault_misaligned_load_o;
wire        LSU_fault_misalign_store = u_dut.u_lsu.fault_misaligned_store_o;

// CSR
wire        CSR_valid      = u_dut.u_decode.csr_opcode_valid_o;
wire [31:0] CSR_instr      = u_dut.u_csr.opcode_opcode_i;
wire        CSR_stall      = u_dut.u_csr.stall_o;
wire [ 4:0] CSR_wb_rd      = u_dut.u_csr.writeback_idx_o;
wire [31:0] CSR_wb_val     = u_dut.u_csr.writeback_value_o;
wire        CSR_branch     = u_dut.u_csr.branch_csr_request_o;
wire [31:0] CSR_branch_pc  = u_dut.u_csr.branch_csr_pc_o;

// REGISTER FILE — all x0..x31
wire [31:0] REG_x0  = 32'h0;
wire [31:0] REG_x1  = u_dut.u_decode.u_regfile.reg_r1_q;
wire [31:0] REG_x2  = u_dut.u_decode.u_regfile.reg_r2_q;
wire [31:0] REG_x3  = u_dut.u_decode.u_regfile.reg_r3_q;
wire [31:0] REG_x4  = u_dut.u_decode.u_regfile.reg_r4_q;
wire [31:0] REG_x5  = u_dut.u_decode.u_regfile.reg_r5_q;
wire [31:0] REG_x6  = u_dut.u_decode.u_regfile.reg_r6_q;
wire [31:0] REG_x7  = u_dut.u_decode.u_regfile.reg_r7_q;
wire [31:0] REG_x8  = u_dut.u_decode.u_regfile.reg_r8_q;
wire [31:0] REG_x9  = u_dut.u_decode.u_regfile.reg_r9_q;
wire [31:0] REG_x10 = u_dut.u_decode.u_regfile.reg_r10_q;
wire [31:0] REG_x11 = u_dut.u_decode.u_regfile.reg_r11_q;
wire [31:0] REG_x12 = u_dut.u_decode.u_regfile.reg_r12_q;
wire [31:0] REG_x13 = u_dut.u_decode.u_regfile.reg_r13_q;
wire [31:0] REG_x14 = u_dut.u_decode.u_regfile.reg_r14_q;
wire [31:0] REG_x15 = u_dut.u_decode.u_regfile.reg_r15_q;
wire [31:0] REG_x16 = u_dut.u_decode.u_regfile.reg_r16_q;
wire [31:0] REG_x17 = u_dut.u_decode.u_regfile.reg_r17_q;
wire [31:0] REG_x18 = u_dut.u_decode.u_regfile.reg_r18_q;
wire [31:0] REG_x19 = u_dut.u_decode.u_regfile.reg_r19_q;
wire [31:0] REG_x20 = u_dut.u_decode.u_regfile.reg_r20_q;
wire [31:0] REG_x21 = u_dut.u_decode.u_regfile.reg_r21_q;
wire [31:0] REG_x22 = u_dut.u_decode.u_regfile.reg_r22_q;
wire [31:0] REG_x23 = u_dut.u_decode.u_regfile.reg_r23_q;
wire [31:0] REG_x24 = u_dut.u_decode.u_regfile.reg_r24_q;
wire [31:0] REG_x25 = u_dut.u_decode.u_regfile.reg_r25_q;
wire [31:0] REG_x26 = u_dut.u_decode.u_regfile.reg_r26_q;
wire [31:0] REG_x27 = u_dut.u_decode.u_regfile.reg_r27_q;
wire [31:0] REG_x28 = u_dut.u_decode.u_regfile.reg_r28_q;
wire [31:0] REG_x29 = u_dut.u_decode.u_regfile.reg_r29_q;
wire [31:0] REG_x30 = u_dut.u_decode.u_regfile.reg_r30_q;
wire [31:0] REG_x31 = u_dut.u_decode.u_regfile.reg_r31_q;

//==================================================================
//  FLAT MEMORY
//==================================================================
reg [7:0] mem [0:MEM_SIZE-1];

function [31:0] mem_rd32;
    input [31:0] addr;
    mem_rd32 = {mem[addr+3], mem[addr+2], mem[addr+1], mem[addr+0]};
endfunction

task mem_wr32;
    input [31:0] addr; input [31:0] data; input [3:0] be;
    begin
        if (be[0]) mem[addr+0] = data[ 7: 0];
        if (be[1]) mem[addr+1] = data[15: 8];
        if (be[2]) mem[addr+2] = data[23:16];
        if (be[3]) mem[addr+3] = data[31:24];
    end
endtask

//------------------------------------------------------------------
// load_program:
//   - If +HEX_FILE=xxx passed on command line  -> load that file
//   - Otherwise                                 -> run built-in program
//------------------------------------------------------------------
task load_program;
    integer i;
    reg [31:0] prog [0:3];
    reg [255:0] hex_path;
    begin
        for (i = 0; i < MEM_SIZE; i = i+1) mem[i] = 8'h0;

        if ($value$plusargs("HEX_FILE=%s", hex_path)) begin
            $readmemh(hex_path, mem);
            $display("[SIM  ] Loaded hex file: %0s", hex_path);
        end else begin
            prog[0] = 32'h00500093; // addi x1, x0, 5
            prog[1] = 32'h00300113; // addi x2, x0, 3
            prog[2] = 32'h002081B3; // add  x3, x1, x2  -> x3=8
            prog[3] = 32'h0000006F; // jal  x0, 0 (halt)
            for (i = 0; i < 4; i = i+1) begin
                mem[i*4+0] = prog[i][ 7: 0];
                mem[i*4+1] = prog[i][15: 8];
                mem[i*4+2] = prog[i][23:16];
                mem[i*4+3] = prog[i][31:24];
            end
            $display("[SIM  ] Running built-in program (addi/add)");
        end
    end
endtask

//==================================================================
//  MEMORY MODELS
//==================================================================

// Instruction fetch (1-cycle latency)
reg [31:0] ifetch_addr_d;
reg        ifetch_pending;
always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        mem_i_accept_r <= 1; mem_i_valid_r  <= 0;
        mem_i_error_r  <= 0; mem_i_inst_r   <= 0;
        ifetch_pending <= 0; ifetch_addr_d  <= 0;
    end else begin
        mem_i_accept_r <= 1;
        ifetch_pending <= mem_i_rd_w & mem_i_accept_r;
        if (mem_i_rd_w & mem_i_accept_r) ifetch_addr_d <= mem_i_pc_w;
        mem_i_valid_r <= ifetch_pending;
        if (ifetch_pending) mem_i_inst_r <= mem_rd32(ifetch_addr_d);
    end
end

// Data memory (1-cycle accept + 1-cycle ack)
reg        dmem_pending;
reg [10:0] dmem_tag_d;
reg [31:0] dmem_addr_d;
reg        dmem_rd_d;
reg [ 3:0] dmem_wr_d;
reg [31:0] dmem_wdata_d;
always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        mem_d_accept_r   <= 1; mem_d_ack_r      <= 0;
        mem_d_error_r    <= 0; mem_d_data_rd_r  <= 0;
        mem_d_resp_tag_r <= 0; dmem_pending     <= 0;
    end else begin
        mem_d_accept_r <= 1;
        if ((mem_d_rd_w || |mem_d_wr_w) && mem_d_accept_r) begin
            dmem_pending <= 1; dmem_tag_d   <= mem_d_req_tag_w;
            dmem_addr_d  <= mem_d_addr_w;  dmem_rd_d    <= mem_d_rd_w;
            dmem_wr_d    <= mem_d_wr_w;    dmem_wdata_d <= mem_d_data_wr_w;
        end else
            dmem_pending <= 0;
        mem_d_ack_r <= dmem_pending;
        if (dmem_pending) begin
            mem_d_resp_tag_r <= dmem_tag_d;
            if (dmem_rd_d)  mem_d_data_rd_r <= mem_rd32(dmem_addr_d);
            if (|dmem_wr_d) mem_wr32(dmem_addr_d, dmem_wdata_d, dmem_wr_d);
        end
    end
end

//==================================================================
//  INSTRUCTION DISASSEMBLER
//==================================================================
task print_instr;
    input [31:0] instr;
    reg [6:0] op; reg [2:0] f3; reg [6:0] f7;
    reg [4:0] rd, rs1, rs2; reg [11:0] imm12;
    begin
        op=instr[6:0]; f3=instr[14:12]; f7=instr[31:25];
        rd=instr[11:7]; rs1=instr[19:15]; rs2=instr[24:20]; imm12=instr[31:20];
        case (op)
            7'b0010011: case(f3)
                3'b000: $write("ADDI  x%0d, x%0d, %0d",    rd, rs1, $signed(imm12));
                3'b111: $write("ANDI  x%0d, x%0d, %0d",    rd, rs1, $signed(imm12));
                3'b110: $write("ORI   x%0d, x%0d, %0d",    rd, rs1, $signed(imm12));
                3'b100: $write("XORI  x%0d, x%0d, %0d",    rd, rs1, $signed(imm12));
                3'b001: $write("SLLI  x%0d, x%0d, %0d",    rd, rs1, rs2[4:0]);
                3'b101: $write("%s x%0d, x%0d, %0d", (f7[5])?"SRAI ":"SRLI ", rd, rs1, rs2[4:0]);
                3'b010: $write("SLTI  x%0d, x%0d, %0d",    rd, rs1, $signed(imm12));
                default:$write("I-ALU x%0d, x%0d, 0x%X",   rd, rs1, imm12);
            endcase
            7'b0110011: begin
                if (f7 == 7'b0000001) case(f3)
                    3'b000: $write("MUL   x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b001: $write("MULH  x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b100: $write("DIV   x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b101: $write("DIVU  x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b110: $write("REM   x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b111: $write("REMU  x%0d, x%0d, x%0d", rd, rs1, rs2);
                    default:$write("M-EXT x%0d, x%0d, x%0d", rd, rs1, rs2);
                endcase else case(f3)
                    3'b000: $write("%s  x%0d, x%0d, x%0d", (f7[5])?"SUB":"ADD", rd, rs1, rs2);
                    3'b111: $write("AND   x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b110: $write("OR    x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b100: $write("XOR   x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b001: $write("SLL   x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b101: $write("%s  x%0d, x%0d, x%0d", (f7[5])?"SRA":"SRL", rd, rs1, rs2);
                    3'b010: $write("SLT   x%0d, x%0d, x%0d", rd, rs1, rs2);
                    3'b011: $write("SLTU  x%0d, x%0d, x%0d", rd, rs1, rs2);
                    default:$write("R-TYPE x%0d, x%0d, x%0d", rd, rs1, rs2);
                endcase
            end
            7'b0000011: case(f3)
                3'b010: $write("LW    x%0d, %0d(x%0d)", rd, $signed(imm12), rs1);
                3'b000: $write("LB    x%0d, %0d(x%0d)", rd, $signed(imm12), rs1);
                3'b001: $write("LH    x%0d, %0d(x%0d)", rd, $signed(imm12), rs1);
                3'b100: $write("LBU   x%0d, %0d(x%0d)", rd, $signed(imm12), rs1);
                3'b101: $write("LHU   x%0d, %0d(x%0d)", rd, $signed(imm12), rs1);
                default:$write("LOAD  x%0d, %0d(x%0d)", rd, $signed(imm12), rs1);
            endcase
            7'b0100011: case(f3)
                3'b010: $write("SW    x%0d, %0d(x%0d)", rs2, $signed({instr[31:25],instr[11:7]}), rs1);
                3'b000: $write("SB    x%0d, %0d(x%0d)", rs2, $signed({instr[31:25],instr[11:7]}), rs1);
                3'b001: $write("SH    x%0d, %0d(x%0d)", rs2, $signed({instr[31:25],instr[11:7]}), rs1);
                default:$write("STORE x%0d, %0d(x%0d)", rs2, $signed({instr[31:25],instr[11:7]}), rs1);
            endcase
            7'b1100011: case(f3)
                3'b000: $write("BEQ   x%0d, x%0d", rs1, rs2);
                3'b001: $write("BNE   x%0d, x%0d", rs1, rs2);
                3'b100: $write("BLT   x%0d, x%0d", rs1, rs2);
                3'b101: $write("BGE   x%0d, x%0d", rs1, rs2);
                3'b110: $write("BLTU  x%0d, x%0d", rs1, rs2);
                3'b111: $write("BGEU  x%0d, x%0d", rs1, rs2);
                default:$write("BRANCH x%0d, x%0d", rs1, rs2);
            endcase
            7'b1101111: $write("JAL   x%0d", rd);
            7'b1100111: $write("JALR  x%0d, x%0d, %0d", rd, rs1, $signed(imm12));
            7'b0110111: $write("LUI   x%0d, 0x%05X", rd, instr[31:12]);
            7'b0010111: $write("AUIPC x%0d, 0x%05X", rd, instr[31:12]);
            7'b1110011: case(f3)
                3'b000: $write("ECALL/EBREAK");
                3'b001: $write("CSRRW x%0d, csr0x%03X", rd, instr[31:20]);
                3'b010: $write("CSRRS x%0d, csr0x%03X", rd, instr[31:20]);
                3'b011: $write("CSRRC x%0d, csr0x%03X", rd, instr[31:20]);
                default:$write("SYSTEM 0x%08X", instr);
            endcase
            default: $write("UNKNOWN op=0x%02X", op);
        endcase
    end
endtask

//==================================================================
//  CONSOLE MONITORS
//==================================================================

// FETCH
always @(posedge clk_i) begin
    if (!rst_i && FETCH_stage_valid) begin
        $write("[FETCH ] PC=0x%08X  raw=0x%08X  ", FETCH_stage_pc, FETCH_stage_instr);
        print_instr(FETCH_stage_instr);
        $display("");
    end
end

// DECODE
always @(posedge clk_i) begin
    if (!rst_i && DECODE_valid) begin
        $write("[DECODE] PC=0x%08X  ", DECODE_pc);
        print_instr(DECODE_instr);
        $display("  | ra=x%0d=0x%08X  rb=x%0d=0x%08X  rd=x%0d  ->%s%s%s%s",
            DECODE_ra, DECODE_ra_value,
            DECODE_rb, DECODE_rb_value,
            DECODE_rd,
            DECODE_to_ALU    ? " [ALU]"    : "",
            DECODE_to_LSU    ? " [LSU]"    : "",
            DECODE_to_MULDIV ? " [MULDIV]" : "",
            DECODE_to_CSR    ? " [CSR]"    : "");
    end
end

// STALL
always @(posedge clk_i) begin
    if (!rst_i && DECODE_stall)
        $display("[STALL ] hazard  scoreboard=0x%08X", DECODE_scoreboard);
end

// ALU
always @(posedge clk_i) begin
    if (!rst_i && ALU_valid)
        $display("[ALU   ] A=0x%08X  B=0x%08X  func=%0d  result=0x%08X (%0d)",
            ALU_input_a, ALU_input_b, ALU_func, ALU_result, $signed(ALU_result));
end

// ALU writeback
always @(posedge clk_i) begin
    if (!rst_i && !ALU_wb_squash && ALU_wb_rd != 0)
        $display("[WB-ALU] x%0d <= 0x%08X (%0d)", ALU_wb_rd, ALU_wb_val, $signed(ALU_wb_val));
end

// Branch
always @(posedge clk_i) begin
    if (!rst_i && ALU_branch)
        $display("[BRANCH] taken  new_PC=0x%08X", ALU_branch_pc);
end

// MUL/DIV
always @(posedge clk_i) begin
    if (!rst_i && MULDIV_valid && MULDIV_stall)
        $display("[MULDIV] A=0x%08X  B=0x%08X  computing...", MULDIV_op_a, MULDIV_op_b);
end
always @(posedge clk_i) begin
    if (!rst_i && !MULDIV_wb_squash && MULDIV_wb_rd != 0 && !MULDIV_stall)
        $display("[WB-MUL] x%0d <= 0x%08X (%0d)", MULDIV_wb_rd, MULDIV_wb_val, $signed(MULDIV_wb_val));
end

// STORE
always @(posedge clk_i) begin
    if (!rst_i && |LSU_wr && mem_d_accept_r)
        $display("[STORE ] addr=0x%08X  data=0x%08X  be=%04b", LSU_addr, LSU_wdata, LSU_wr);
end

// LOAD
always @(posedge clk_i) begin
    if (!rst_i && LSU_rd && mem_d_accept_r)
        $display("[LOAD  ] addr=0x%08X  waiting...", LSU_addr);
end
always @(posedge clk_i) begin
    if (!rst_i && LSU_ack && !LSU_wb_squash && LSU_wb_rd != 0)
        $display("[WB-LD ] x%0d <= 0x%08X (%0d)  from addr=0x%08X",
            LSU_wb_rd, LSU_wb_val, $signed(LSU_wb_val), dmem_addr_d);
end

// Faults
always @(posedge clk_i) begin
    if (!rst_i && LSU_fault_load)           $display("[FAULT ] Load fault   addr=0x%08X", LSU_addr);
    if (!rst_i && LSU_fault_store)          $display("[FAULT ] Store fault  addr=0x%08X", LSU_addr);
    if (!rst_i && LSU_fault_misalign_load)  $display("[FAULT ] Misalign LD  addr=0x%08X", LSU_addr);
    if (!rst_i && LSU_fault_misalign_store) $display("[FAULT ] Misalign ST  addr=0x%08X", LSU_addr);
end

// CSR
always @(posedge clk_i) begin
    if (!rst_i && CSR_valid && CSR_wb_rd != 0)
        $display("[CSR   ] x%0d <= 0x%08X", CSR_wb_rd, CSR_wb_val);
    if (!rst_i && CSR_branch)
        $display("[TRAP  ] jump to PC=0x%08X", CSR_branch_pc);
end

// Register file — print only on change
reg [31:0] prev_x [1:31];
integer k;
always @(posedge clk_i) begin
    if (rst_i) begin
        for (k=1; k<=31; k=k+1) prev_x[k] = 32'h0;
    end else begin
        if (REG_x1 !==prev_x[1])  begin $display("[REG   ] x1  = 0x%08X (%0d)", REG_x1,  $signed(REG_x1 )); prev_x[1]  <= REG_x1;  end
        if (REG_x2 !==prev_x[2])  begin $display("[REG   ] x2  = 0x%08X (%0d)", REG_x2,  $signed(REG_x2 )); prev_x[2]  <= REG_x2;  end
        if (REG_x3 !==prev_x[3])  begin $display("[REG   ] x3  = 0x%08X (%0d)", REG_x3,  $signed(REG_x3 )); prev_x[3]  <= REG_x3;  end
        if (REG_x4 !==prev_x[4])  begin $display("[REG   ] x4  = 0x%08X (%0d)", REG_x4,  $signed(REG_x4 )); prev_x[4]  <= REG_x4;  end
        if (REG_x5 !==prev_x[5])  begin $display("[REG   ] x5  = 0x%08X (%0d)", REG_x5,  $signed(REG_x5 )); prev_x[5]  <= REG_x5;  end
        if (REG_x6 !==prev_x[6])  begin $display("[REG   ] x6  = 0x%08X (%0d)", REG_x6,  $signed(REG_x6 )); prev_x[6]  <= REG_x6;  end
        if (REG_x7 !==prev_x[7])  begin $display("[REG   ] x7  = 0x%08X (%0d)", REG_x7,  $signed(REG_x7 )); prev_x[7]  <= REG_x7;  end
        if (REG_x8 !==prev_x[8])  begin $display("[REG   ] x8  = 0x%08X (%0d)", REG_x8,  $signed(REG_x8 )); prev_x[8]  <= REG_x8;  end
        if (REG_x9 !==prev_x[9])  begin $display("[REG   ] x9  = 0x%08X (%0d)", REG_x9,  $signed(REG_x9 )); prev_x[9]  <= REG_x9;  end
        if (REG_x10!==prev_x[10]) begin $display("[REG   ] x10 = 0x%08X (%0d)", REG_x10, $signed(REG_x10)); prev_x[10] <= REG_x10; end
        if (REG_x11!==prev_x[11]) begin $display("[REG   ] x11 = 0x%08X (%0d)", REG_x11, $signed(REG_x11)); prev_x[11] <= REG_x11; end
        if (REG_x12!==prev_x[12]) begin $display("[REG   ] x12 = 0x%08X (%0d)", REG_x12, $signed(REG_x12)); prev_x[12] <= REG_x12; end
        if (REG_x13!==prev_x[13]) begin $display("[REG   ] x13 = 0x%08X (%0d)", REG_x13, $signed(REG_x13)); prev_x[13] <= REG_x13; end
        if (REG_x14!==prev_x[14]) begin $display("[REG   ] x14 = 0x%08X (%0d)", REG_x14, $signed(REG_x14)); prev_x[14] <= REG_x14; end
        if (REG_x15!==prev_x[15]) begin $display("[REG   ] x15 = 0x%08X (%0d)", REG_x15, $signed(REG_x15)); prev_x[15] <= REG_x15; end
        if (REG_x16!==prev_x[16]) begin $display("[REG   ] x16 = 0x%08X (%0d)", REG_x16, $signed(REG_x16)); prev_x[16] <= REG_x16; end
        if (REG_x17!==prev_x[17]) begin $display("[REG   ] x17 = 0x%08X (%0d)", REG_x17, $signed(REG_x17)); prev_x[17] <= REG_x17; end
        if (REG_x18!==prev_x[18]) begin $display("[REG   ] x18 = 0x%08X (%0d)", REG_x18, $signed(REG_x18)); prev_x[18] <= REG_x18; end
        if (REG_x19!==prev_x[19]) begin $display("[REG   ] x19 = 0x%08X (%0d)", REG_x19, $signed(REG_x19)); prev_x[19] <= REG_x19; end
        if (REG_x20!==prev_x[20]) begin $display("[REG   ] x20 = 0x%08X (%0d)", REG_x20, $signed(REG_x20)); prev_x[20] <= REG_x20; end
        if (REG_x21!==prev_x[21]) begin $display("[REG   ] x21 = 0x%08X (%0d)", REG_x21, $signed(REG_x21)); prev_x[21] <= REG_x21; end
        if (REG_x22!==prev_x[22]) begin $display("[REG   ] x22 = 0x%08X (%0d)", REG_x22, $signed(REG_x22)); prev_x[22] <= REG_x22; end
        if (REG_x23!==prev_x[23]) begin $display("[REG   ] x23 = 0x%08X (%0d)", REG_x23, $signed(REG_x23)); prev_x[23] <= REG_x23; end
        if (REG_x24!==prev_x[24]) begin $display("[REG   ] x24 = 0x%08X (%0d)", REG_x24, $signed(REG_x24)); prev_x[24] <= REG_x24; end
        if (REG_x25!==prev_x[25]) begin $display("[REG   ] x25 = 0x%08X (%0d)", REG_x25, $signed(REG_x25)); prev_x[25] <= REG_x25; end
        if (REG_x26!==prev_x[26]) begin $display("[REG   ] x26 = 0x%08X (%0d)", REG_x26, $signed(REG_x26)); prev_x[26] <= REG_x26; end
        if (REG_x27!==prev_x[27]) begin $display("[REG   ] x27 = 0x%08X (%0d)", REG_x27, $signed(REG_x27)); prev_x[27] <= REG_x27; end
        if (REG_x28!==prev_x[28]) begin $display("[REG   ] x28 = 0x%08X (%0d)", REG_x28, $signed(REG_x28)); prev_x[28] <= REG_x28; end
        if (REG_x29!==prev_x[29]) begin $display("[REG   ] x29 = 0x%08X (%0d)", REG_x29, $signed(REG_x29)); prev_x[29] <= REG_x29; end
        if (REG_x30!==prev_x[30]) begin $display("[REG   ] x30 = 0x%08X (%0d)", REG_x30, $signed(REG_x30)); prev_x[30] <= REG_x30; end
        if (REG_x31!==prev_x[31]) begin $display("[REG   ] x31 = 0x%08X (%0d)", REG_x31, $signed(REG_x31)); prev_x[31] <= REG_x31; end
    end
end

//==================================================================
//  STIMULUS
//==================================================================
initial begin
    $dumpfile("sim.vcd");
    $dumpvars(0, tb_riscv_core);

    rst_i = 1; intr_i = 0;
    reset_vector_i = 32'h0;
    cpu_id_i       = 32'h0;

    load_program;

    $display("=======================================================");
    $display("  rv32imsu — Pipeline Simulation");
    $display("=======================================================");

    repeat (RST_DELAY) @(posedge clk_i);
    @(negedge clk_i); rst_i = 0;
    $display("[SIM  ] Reset released\n");

    repeat (SIM_CYCLES) @(posedge clk_i);

    // ---- FINAL REGISTER FILE ----
    $display("\n=======================================================");
    $display("  FINAL REGISTER FILE");
    $display("  x0  = 0x%08X  x1  = 0x%08X  x2  = 0x%08X  x3  = 0x%08X", 32'h0,  REG_x1,  REG_x2,  REG_x3 );
    $display("  x4  = 0x%08X  x5  = 0x%08X  x6  = 0x%08X  x7  = 0x%08X", REG_x4,  REG_x5,  REG_x6,  REG_x7 );
    $display("  x8  = 0x%08X  x9  = 0x%08X  x10 = 0x%08X  x11 = 0x%08X", REG_x8,  REG_x9,  REG_x10, REG_x11);
    $display("  x12 = 0x%08X  x13 = 0x%08X  x14 = 0x%08X  x15 = 0x%08X", REG_x12, REG_x13, REG_x14, REG_x15);
    $display("  x16 = 0x%08X  x17 = 0x%08X  x18 = 0x%08X  x19 = 0x%08X", REG_x16, REG_x17, REG_x18, REG_x19);
    $display("  x20 = 0x%08X  x21 = 0x%08X  x22 = 0x%08X  x23 = 0x%08X", REG_x20, REG_x21, REG_x22, REG_x23);
    $display("  x24 = 0x%08X  x25 = 0x%08X  x26 = 0x%08X  x27 = 0x%08X", REG_x24, REG_x25, REG_x26, REG_x27);
    $display("  x28 = 0x%08X  x29 = 0x%08X  x30 = 0x%08X  x31 = 0x%08X", REG_x28, REG_x29, REG_x30, REG_x31);
    $display("=======================================================");

    // ---- DATA MEMORY DUMP ----
    $display("\n-------------------------------------------------------");
    $display("  DATA MEMORY DUMP  [0x1000 .. 0x102C]");
    $display("  addr        hex          decimal");
    $display("-------------------------------------------------------");
    begin : memdump
        integer d;
        for (d = 0; d < 12; d = d+1) begin
            $display("  MEM[0x%04X] = 0x%08X  (%0d)",
                32'h1000 + d*4,
                mem_rd32(32'h1000 + d*4),
                $signed(mem_rd32(32'h1000 + d*4)));
        end
    end
    $display("-------------------------------------------------------");

    $finish;
end

endmodule
