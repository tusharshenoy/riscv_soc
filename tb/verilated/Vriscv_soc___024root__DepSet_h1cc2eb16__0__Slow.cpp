// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc___024root.h"

VL_ATTR_COLD void Vriscv_soc___024root___eval_static(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_final(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__stl(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vriscv_soc___024root___eval_phase__stl(Vriscv_soc___024root* vlSelf);

VL_ATTR_COLD void Vriscv_soc___024root___eval_settle(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vriscv_soc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../soc/../soc/riscv_soc.v", 46, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vriscv_soc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__stl(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___eval_triggers__stl(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_stl(Vriscv_soc___024root* vlSelf);

VL_ATTR_COLD bool Vriscv_soc___024root___eval_phase__stl(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vriscv_soc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vriscv_soc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge __Vcellinp__riscv_soc__clk_i or posedge __Vcellinp__riscv_soc__rst_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge __Vcellinp__riscv_soc__clk_i or posedge __Vcellinp__riscv_soc__rst_cpu_i)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge __Vcellinp__riscv_soc__clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__nba(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge __Vcellinp__riscv_soc__clk_i or posedge __Vcellinp__riscv_soc__rst_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge __Vcellinp__riscv_soc__clk_i or posedge __Vcellinp__riscv_soc__rst_cpu_i)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge __Vcellinp__riscv_soc__clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__riscv_soc__mem_rlast_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__mem_rid_i = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__riscv_soc__mem_rresp_i = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__riscv_soc__mem_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__riscv_soc__mem_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__mem_arready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__mem_bid_i = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__riscv_soc__mem_bresp_i = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__riscv_soc__mem_bvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__mem_wready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__mem_awready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__gpio_input_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__riscv_soc__uart_txd_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__spi_miso_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__rst_cpu_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__inport_rready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__inport_araddr_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__riscv_soc__inport_arvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__inport_bready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__inport_wstrb_i = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__riscv_soc__inport_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__riscv_soc__inport_wvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__inport_awaddr_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__riscv_soc__inport_awvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__reset_vector_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__riscv_soc__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__riscv_soc__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
