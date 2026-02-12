# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vriscv_soc.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vriscv_soc \
	Vriscv_soc___024root__DepSet_ha0c86116__0 \
	Vriscv_soc___024root__DepSet_h1cc2eb16__0 \
	Vriscv_soc_riscv_soc__DepSet_hd94806ea__0 \
	Vriscv_soc_riscv_top__DepSet_h04839109__0 \
	Vriscv_soc_riscv_top__DepSet_h807cbb2f__0 \
	Vriscv_soc_riscv_core__DepSet_h1c66d807__0 \
	Vriscv_soc_icache__DepSet_h2a051fee__0 \
	Vriscv_soc_riscv_exec__DepSet_hb75a2c05__0 \
	Vriscv_soc_riscv_exec__DepSet_h0d553023__0 \
	Vriscv_soc_riscv_decode__DepSet_h69c310e3__0 \
	Vriscv_soc_riscv_decode__DepSet_h53bc3cc9__0 \
	Vriscv_soc_icache_tag_ram__DepSet_hb0b058a2__0 \
	Vriscv_soc_icache_data_ram__DepSet_h04a37a78__0 \
	Vriscv_soc_riscv_regfile__DepSet_h41093cef__0 \
	Vriscv_soc_riscv_regfile__DepSet_h3b0220cd__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vriscv_soc__ConstPool_0 \
	Vriscv_soc___024root__Slow \
	Vriscv_soc___024root__DepSet_ha0c86116__0__Slow \
	Vriscv_soc___024root__DepSet_h1cc2eb16__0__Slow \
	Vriscv_soc_riscv_soc__Slow \
	Vriscv_soc_riscv_soc__DepSet_hd94806ea__0__Slow \
	Vriscv_soc_riscv_soc__DepSet_ha34346d2__0__Slow \
	Vriscv_soc_riscv_top__Slow \
	Vriscv_soc_riscv_top__DepSet_h04839109__0__Slow \
	Vriscv_soc_riscv_top__DepSet_h807cbb2f__0__Slow \
	Vriscv_soc_riscv_core__Slow \
	Vriscv_soc_riscv_core__DepSet_h1c66d807__0__Slow \
	Vriscv_soc_riscv_core__DepSet_h68218425__0__Slow \
	Vriscv_soc_icache__Slow \
	Vriscv_soc_icache__DepSet_h2a051fee__0__Slow \
	Vriscv_soc_icache__DepSet_h91fe3dce__0__Slow \
	Vriscv_soc_riscv_exec__Slow \
	Vriscv_soc_riscv_exec__DepSet_hb75a2c05__0__Slow \
	Vriscv_soc_riscv_exec__DepSet_h0d553023__0__Slow \
	Vriscv_soc_riscv_decode__Slow \
	Vriscv_soc_riscv_decode__DepSet_h69c310e3__0__Slow \
	Vriscv_soc_riscv_decode__DepSet_h53bc3cc9__0__Slow \
	Vriscv_soc_icache_tag_ram__Slow \
	Vriscv_soc_icache_tag_ram__DepSet_h0c6b048a__0__Slow \
	Vriscv_soc_icache_data_ram__Slow \
	Vriscv_soc_icache_data_ram__DepSet_h805be240__0__Slow \
	Vriscv_soc_riscv_regfile__Slow \
	Vriscv_soc_riscv_regfile__DepSet_h3b0220cd__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vriscv_soc__Dpi \
	Vriscv_soc__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vriscv_soc__Syms \
	Vriscv_soc__Trace__0__Slow \
	Vriscv_soc__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
