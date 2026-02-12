// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc___024root.h"

VL_INLINE_OPT void Vriscv_soc___024root___ico_sequent__TOP__0(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ico_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__clk_i, vlSelf->clk_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__rst_i, vlSelf->rst_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__rst_cpu_i, vlSelf->rst_cpu_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__reset_vector_i, vlSelf->reset_vector_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__uart_txd_i, vlSelf->uart_txd_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__gpio_input_i, vlSelf->gpio_input_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_awready_i, vlSelf->mem_awready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_wready_i, vlSelf->mem_wready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_bvalid_i, vlSelf->mem_bvalid_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__riscv_soc__mem_bresp_i, vlSelf->mem_bresp_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__riscv_soc__mem_bid_i, vlSelf->mem_bid_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_arready_i, vlSelf->mem_arready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_rvalid_i, vlSelf->mem_rvalid_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__mem_rdata_i, vlSelf->mem_rdata_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__riscv_soc__mem_rresp_i, vlSelf->mem_rresp_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__riscv_soc__mem_rid_i, vlSelf->mem_rid_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__mem_rlast_i, vlSelf->mem_rlast_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__inport_wdata_i, vlSelf->inport_wdata_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__riscv_soc__inport_wstrb_i, vlSelf->inport_wstrb_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__spi_miso_i, vlSelf->spi_miso_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_bready_i, vlSelf->inport_bready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_rready_i, vlSelf->inport_rready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_wvalid_i, vlSelf->inport_wvalid_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__inport_awaddr_i, vlSelf->inport_awaddr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_awvalid_i, vlSelf->inport_awvalid_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__riscv_soc__inport_araddr_i, vlSelf->inport_araddr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__riscv_soc__inport_arvalid_i, vlSelf->inport_arvalid_i);
}

void Vriscv_soc___024root___eval_triggers__ico(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval_ico(Vriscv_soc___024root* vlSelf);

bool Vriscv_soc___024root___eval_phase__ico(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vriscv_soc___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vriscv_soc___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vriscv_soc___024root___eval_act(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_act\n"); );
}

void Vriscv_soc___024root___eval_triggers__act(Vriscv_soc___024root* vlSelf);

bool Vriscv_soc___024root___eval_phase__act(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vriscv_soc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vriscv_soc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vriscv_soc___024root___eval_nba(Vriscv_soc___024root* vlSelf);

bool Vriscv_soc___024root___eval_phase__nba(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vriscv_soc___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__nba(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vriscv_soc___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../soc/../soc/riscv_soc.v", 46, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vriscv_soc___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vriscv_soc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../soc/../soc/riscv_soc.v", 46, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vriscv_soc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../soc/../soc/riscv_soc.v", 46, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vriscv_soc___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vriscv_soc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
