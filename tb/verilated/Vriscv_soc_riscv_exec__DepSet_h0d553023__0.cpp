// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc_riscv_exec.h"

bool Vriscv_soc_riscv_exec::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::get_valid\n"); );
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    // Body
    get_valid__Vfuncrtn = this->__PVT__v_dbg_valid_q;
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vriscv_soc_riscv_exec::get_pc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::get_pc\n"); );
    VL_OUT(get_pc__Vfuncrtn,31,0);
    // Body
    get_pc__Vfuncrtn = this->__PVT__v_dbg_pc_q;
    // Final
    return (get_pc__Vfuncrtn);
}
