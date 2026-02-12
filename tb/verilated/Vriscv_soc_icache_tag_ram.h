// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_ICACHE_TAG_RAM_H_
#define VERILATED_VRISCV_SOC_ICACHE_TAG_RAM_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_icache_tag_ram final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__addr_i,7,0);
    VL_IN8(__PVT__wr_i,0,0);
    VL_IN(__PVT__data_i,19,0);
    VL_OUT(__PVT__data_o,19,0);
    IData/*19:0*/ __PVT__ram_read_q;
    VlUnpacked<IData/*19:0*/, 256> ram;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_soc_icache_tag_ram(Vriscv_soc__Syms* symsp, const char* v__name);
    ~Vriscv_soc_icache_tag_ram();
    VL_UNCOPYABLE(Vriscv_soc_icache_tag_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
