// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_soc__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vriscv_soc::Vriscv_soc(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vriscv_soc__Syms(contextp(), name(), this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , inport_awvalid_i{vlSymsp->TOP.inport_awvalid_i}
    , inport_wvalid_i{vlSymsp->TOP.inport_wvalid_i}
    , inport_wstrb_i{vlSymsp->TOP.inport_wstrb_i}
    , inport_bready_i{vlSymsp->TOP.inport_bready_i}
    , inport_arvalid_i{vlSymsp->TOP.inport_arvalid_i}
    , inport_rready_i{vlSymsp->TOP.inport_rready_i}
    , rst_cpu_i{vlSymsp->TOP.rst_cpu_i}
    , spi_miso_i{vlSymsp->TOP.spi_miso_i}
    , uart_txd_i{vlSymsp->TOP.uart_txd_i}
    , mem_awready_i{vlSymsp->TOP.mem_awready_i}
    , mem_wready_i{vlSymsp->TOP.mem_wready_i}
    , mem_bvalid_i{vlSymsp->TOP.mem_bvalid_i}
    , mem_bresp_i{vlSymsp->TOP.mem_bresp_i}
    , mem_bid_i{vlSymsp->TOP.mem_bid_i}
    , mem_arready_i{vlSymsp->TOP.mem_arready_i}
    , mem_rvalid_i{vlSymsp->TOP.mem_rvalid_i}
    , mem_rresp_i{vlSymsp->TOP.mem_rresp_i}
    , mem_rid_i{vlSymsp->TOP.mem_rid_i}
    , mem_rlast_i{vlSymsp->TOP.mem_rlast_i}
    , inport_awready_o{vlSymsp->TOP.inport_awready_o}
    , inport_wready_o{vlSymsp->TOP.inport_wready_o}
    , inport_bvalid_o{vlSymsp->TOP.inport_bvalid_o}
    , inport_bresp_o{vlSymsp->TOP.inport_bresp_o}
    , inport_arready_o{vlSymsp->TOP.inport_arready_o}
    , inport_rvalid_o{vlSymsp->TOP.inport_rvalid_o}
    , inport_rresp_o{vlSymsp->TOP.inport_rresp_o}
    , spi_clk_o{vlSymsp->TOP.spi_clk_o}
    , spi_mosi_o{vlSymsp->TOP.spi_mosi_o}
    , spi_cs_o{vlSymsp->TOP.spi_cs_o}
    , uart_rxd_o{vlSymsp->TOP.uart_rxd_o}
    , mem_awvalid_o{vlSymsp->TOP.mem_awvalid_o}
    , mem_awid_o{vlSymsp->TOP.mem_awid_o}
    , mem_awlen_o{vlSymsp->TOP.mem_awlen_o}
    , mem_awburst_o{vlSymsp->TOP.mem_awburst_o}
    , mem_wvalid_o{vlSymsp->TOP.mem_wvalid_o}
    , mem_wstrb_o{vlSymsp->TOP.mem_wstrb_o}
    , mem_wlast_o{vlSymsp->TOP.mem_wlast_o}
    , mem_bready_o{vlSymsp->TOP.mem_bready_o}
    , mem_arvalid_o{vlSymsp->TOP.mem_arvalid_o}
    , mem_arid_o{vlSymsp->TOP.mem_arid_o}
    , mem_arlen_o{vlSymsp->TOP.mem_arlen_o}
    , mem_arburst_o{vlSymsp->TOP.mem_arburst_o}
    , mem_rready_o{vlSymsp->TOP.mem_rready_o}
    , reset_vector_i{vlSymsp->TOP.reset_vector_i}
    , inport_awaddr_i{vlSymsp->TOP.inport_awaddr_i}
    , inport_wdata_i{vlSymsp->TOP.inport_wdata_i}
    , inport_araddr_i{vlSymsp->TOP.inport_araddr_i}
    , gpio_input_i{vlSymsp->TOP.gpio_input_i}
    , mem_rdata_i{vlSymsp->TOP.mem_rdata_i}
    , inport_rdata_o{vlSymsp->TOP.inport_rdata_o}
    , gpio_output_o{vlSymsp->TOP.gpio_output_o}
    , gpio_output_enable_o{vlSymsp->TOP.gpio_output_enable_o}
    , mem_awaddr_o{vlSymsp->TOP.mem_awaddr_o}
    , mem_wdata_o{vlSymsp->TOP.mem_wdata_o}
    , mem_araddr_o{vlSymsp->TOP.mem_araddr_o}
    , riscv_soc{vlSymsp->TOP.riscv_soc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk_i;
    sensitive << rst_i;
    sensitive << inport_awvalid_i;
    sensitive << inport_wvalid_i;
    sensitive << inport_wstrb_i;
    sensitive << inport_bready_i;
    sensitive << inport_arvalid_i;
    sensitive << inport_rready_i;
    sensitive << rst_cpu_i;
    sensitive << spi_miso_i;
    sensitive << uart_txd_i;
    sensitive << mem_awready_i;
    sensitive << mem_wready_i;
    sensitive << mem_bvalid_i;
    sensitive << mem_bresp_i;
    sensitive << mem_bid_i;
    sensitive << mem_arready_i;
    sensitive << mem_rvalid_i;
    sensitive << mem_rresp_i;
    sensitive << mem_rid_i;
    sensitive << mem_rlast_i;
    sensitive << reset_vector_i;
    sensitive << inport_awaddr_i;
    sensitive << inport_wdata_i;
    sensitive << inport_araddr_i;
    sensitive << gpio_input_i;
    sensitive << mem_rdata_i;

}

//============================================================
// Destructor

Vriscv_soc::~Vriscv_soc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_soc___024root___eval_static(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval_settle(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf);

void Vriscv_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_soc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_soc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vriscv_soc___024root___eval_static(&(vlSymsp->TOP));
        Vriscv_soc___024root___eval_initial(&(vlSymsp->TOP));
        Vriscv_soc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vriscv_soc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vriscv_soc::eventsPending() { return false; }

uint64_t Vriscv_soc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vriscv_soc___024root___eval_final(Vriscv_soc___024root* vlSelf);

VL_ATTR_COLD void Vriscv_soc::final() {
    Vriscv_soc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vriscv_soc::hierName() const { return vlSymsp->name(); }
const char* Vriscv_soc::modelName() const { return "Vriscv_soc"; }
unsigned Vriscv_soc::threads() const { return 1; }
void Vriscv_soc::prepareClone() const { contextp()->prepareClone(); }
void Vriscv_soc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vriscv_soc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vriscv_soc___024root__trace_decl_types(VerilatedVcd* tracep);

void Vriscv_soc___024root__trace_init_top(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_soc___024root__trace_decl_types(tracep);
    Vriscv_soc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_register(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_soc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vriscv_soc::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vriscv_soc::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vriscv_soc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
