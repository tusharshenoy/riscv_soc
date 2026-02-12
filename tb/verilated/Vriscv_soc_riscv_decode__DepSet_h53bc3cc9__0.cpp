// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc_riscv_decode.h"

bool Vriscv_soc_riscv_decode::get_reg_valid(uint32_t r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode::get_reg_valid\n"); );
    VL_OUT8(get_reg_valid__Vfuncrtn,0,0);
    // Body
    get_reg_valid__Vfuncrtn = (1U & (~ (this->__PVT__scoreboard_q 
                                        >> (IData)(r))));
    // Final
    return (get_reg_valid__Vfuncrtn);
}

bool Vriscv_soc_riscv_decode::set_register(uint32_t r, uint32_t value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode::set_register\n"); );
    VL_OUT8(set_register__Vfuncrtn,0,0);
    // Body
    // Final
    return (set_register__Vfuncrtn);
}
