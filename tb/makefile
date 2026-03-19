#==============================================================
#  Makefile — rv32imsu RISC-V Core Simulation
#
#  Targets:
#    make compile  — compile RTL + testbench with iverilog
#    make run      — run the simulation with vvp
#    make wave     — open waveform in GTKWave
#    make clean    — remove build artefacts
#
#  Tools required:
#    iverilog / vvp   (apt install iverilog)
#    gtkwave          (apt install gtkwave)  — for 'make wave'
#==============================================================

# ---- Source files ------------------------------------------
RTL_SRCS = \
    rv32imsu/riscv_defs.v      \
    rv32imsu/riscv_alu.v       \
    rv32imsu/riscv_regfile.v   \
    rv32imsu/riscv_fetch.v     \
    rv32imsu/riscv_decode.v    \
    rv32imsu/riscv_exec.v      \
    rv32imsu/riscv_lsu.v       \
    rv32imsu/riscv_muldiv.v    \
    rv32imsu/riscv_csr.v       \
    rv32imsu/riscv_mmu.v       \
    rv32imsu/riscv_mmu_arb.v   \
    rv32imsu/riscv_core.v

TB_SRC  = tb_riscv_core.v

SIM_OUT = sim.out
VCD_OUT = sim.vcd

# ---- Targets -----------------------------------------------

.PHONY: compile run wave clean

## Step 1 — Compile RTL + testbench
compile: $(SIM_OUT)

$(SIM_OUT): $(RTL_SRCS) $(TB_SRC)
	iverilog -g2012 \
	         -Wall \
	         -I rv32imsu \
	         -o $(SIM_OUT) \
	         $(RTL_SRCS) $(TB_SRC)
	@echo "-------------------------------"
	@echo " Compile OK  →  $(SIM_OUT)"
	@echo "-------------------------------"

## Step 2 — Run simulation
run: $(SIM_OUT)
	vvp $(SIM_OUT)

## Step 3 — Open waveform in GTKWave
wave: $(VCD_OUT)
	gtkwave $(VCD_OUT) &

## Remove build artefacts
clean:
	rm -f $(SIM_OUT) $(VCD_OUT) *.hex *.elf
