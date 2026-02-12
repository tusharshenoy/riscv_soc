// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"
#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc_riscv_decode.h"

VL_ATTR_COLD void Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0\n"); );
    // Init
    CData/*0:0*/ __VdfgExtracted_h3cb01ac5__0;
    __VdfgExtracted_h3cb01ac5__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha6e97792__0;
    __VdfgTmp_ha6e97792__0 = 0;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__2__Vfuncout;
    VL_ZERO_W(80, __Vfunc_get_regname_str__2__Vfuncout);
    CData/*4:0*/ __Vfunc_get_regname_str__2__regnum;
    __Vfunc_get_regname_str__2__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__3__Vfuncout;
    VL_ZERO_W(80, __Vfunc_get_regname_str__3__Vfuncout);
    CData/*4:0*/ __Vfunc_get_regname_str__3__regnum;
    __Vfunc_get_regname_str__3__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_get_regname_str__4__Vfuncout;
    VL_ZERO_W(80, __Vfunc_get_regname_str__4__Vfuncout);
    CData/*4:0*/ __Vfunc_get_regname_str__4__regnum;
    __Vfunc_get_regname_str__4__regnum = 0;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    // Body
    __Vfunc_get_regname_str__2__regnum = (0x1fU & (vlSelf->__PVT__inst_q 
                                                   >> 0xfU));
    if ((8U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
        if ((4U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
            if ((2U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
                if ((1U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
            if ((1U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
        if ((2U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
            if ((1U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
        if ((1U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    __Vtemp_92[1U] = 0U;
    __Vtemp_92[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_get_regname_str__2__regnum))) {
        __Vfunc_get_regname_str__2__Vfuncout[0U] = 
            __Vtemp_46[0U];
        __Vfunc_get_regname_str__2__Vfuncout[1U] = 
            __Vtemp_46[1U];
        __Vfunc_get_regname_str__2__Vfuncout[2U] = 
            __Vtemp_46[2U];
    } else {
        __Vfunc_get_regname_str__2__Vfuncout[0U] = 
            __Vtemp_92[0U];
        __Vfunc_get_regname_str__2__Vfuncout[1U] = 
            __Vtemp_92[1U];
        __Vfunc_get_regname_str__2__Vfuncout[2U] = 
            __Vtemp_92[2U];
    }
    vlSelf->__VdfgExtracted_h3eca160f__0[0U] = __Vfunc_get_regname_str__2__Vfuncout[0U];
    vlSelf->__VdfgExtracted_h3eca160f__0[1U] = __Vfunc_get_regname_str__2__Vfuncout[1U];
    vlSelf->__VdfgExtracted_h3eca160f__0[2U] = __Vfunc_get_regname_str__2__Vfuncout[2U];
    __Vfunc_get_regname_str__3__regnum = (0x1fU & (vlSelf->__PVT__inst_q 
                                                   >> 0x14U));
    if ((8U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
        if ((4U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
            if ((2U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
                if ((1U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
        if ((2U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
        if ((1U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    __Vtemp_139[1U] = 0U;
    __Vtemp_139[2U] = 0U;
    __Vtemp_185[1U] = 0U;
    __Vtemp_185[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_get_regname_str__3__regnum))) {
        __Vfunc_get_regname_str__3__Vfuncout[0U] = 
            __Vtemp_139[0U];
        __Vfunc_get_regname_str__3__Vfuncout[1U] = 
            __Vtemp_139[1U];
        __Vfunc_get_regname_str__3__Vfuncout[2U] = 
            __Vtemp_139[2U];
    } else {
        __Vfunc_get_regname_str__3__Vfuncout[0U] = 
            __Vtemp_185[0U];
        __Vfunc_get_regname_str__3__Vfuncout[1U] = 
            __Vtemp_185[1U];
        __Vfunc_get_regname_str__3__Vfuncout[2U] = 
            __Vtemp_185[2U];
    }
    vlSelf->__VdfgExtracted_h09ef7aaa__0[0U] = __Vfunc_get_regname_str__3__Vfuncout[0U];
    vlSelf->__VdfgExtracted_h09ef7aaa__0[1U] = __Vfunc_get_regname_str__3__Vfuncout[1U];
    vlSelf->__VdfgExtracted_h09ef7aaa__0[2U] = __Vfunc_get_regname_str__3__Vfuncout[2U];
    __Vfunc_get_regname_str__4__regnum = (0x1fU & (vlSelf->__PVT__inst_q 
                                                   >> 7U));
    if ((8U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
        if ((4U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
            if ((2U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
                if ((1U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
            if ((1U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
        if ((2U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
            if ((1U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
        if ((1U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    __Vtemp_232[1U] = 0U;
    __Vtemp_232[2U] = 0U;
    __Vtemp_278[1U] = 0U;
    __Vtemp_278[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_get_regname_str__4__regnum))) {
        __Vfunc_get_regname_str__4__Vfuncout[0U] = 
            __Vtemp_232[0U];
        __Vfunc_get_regname_str__4__Vfuncout[1U] = 
            __Vtemp_232[1U];
        __Vfunc_get_regname_str__4__Vfuncout[2U] = 
            __Vtemp_232[2U];
    } else {
        __Vfunc_get_regname_str__4__Vfuncout[0U] = 
            __Vtemp_278[0U];
        __Vfunc_get_regname_str__4__Vfuncout[1U] = 
            __Vtemp_278[1U];
        __Vfunc_get_regname_str__4__Vfuncout[2U] = 
            __Vtemp_278[2U];
    }
    vlSelf->__VdfgExtracted_hf25855dd__0[0U] = __Vfunc_get_regname_str__4__Vfuncout[0U];
    vlSelf->__VdfgExtracted_hf25855dd__0[1U] = __Vfunc_get_regname_str__4__Vfuncout[1U];
    vlSelf->__VdfgExtracted_hf25855dd__0[2U] = __Vfunc_get_regname_str__4__Vfuncout[2U];
    vlSelf->__VdfgExtracted_h7a81245e__0 = (((- (IData)(
                                                        (vlSelf->__PVT__inst_q 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->__PVT__inst_q 
                                               >> 0x14U));
    vlSelf->__PVT__wb_csr_rd_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w) 
                                  & (- (IData)((1U 
                                                & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q))))));
    vlSelf->__PVT__opcode_valid_r = ((IData)(vlSelf->__PVT__valid_q) 
                                     & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)));
    vlSelf->__PVT__stall_scoreboard_r = 0U;
    vlSelf->__PVT__current_scoreboard_r = vlSelf->__PVT__scoreboard_q;
    vlSelf->__PVT__current_scoreboard_r = ((~ ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) 
                                           & vlSelf->__PVT__current_scoreboard_r);
    if ((1U & (((vlSelf->__PVT__current_scoreboard_r 
                 >> (0x1fU & (vlSelf->__PVT__inst_q 
                              >> 0xfU))) | (vlSelf->__PVT__current_scoreboard_r 
                                            >> (0x1fU 
                                                & (vlSelf->__PVT__inst_q 
                                                   >> 0x14U)))) 
               | (vlSelf->__PVT__current_scoreboard_r 
                  >> (0x1fU & (vlSelf->__PVT__inst_q 
                               >> 7U)))))) {
        vlSelf->__PVT__stall_scoreboard_r = 1U;
        vlSelf->__PVT__opcode_valid_r = 0U;
    }
    vlSelf->__VdfgTmp_h53fea6f4__0 = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w)) 
                                            & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w))));
    vlSelf->__PVT__stall_input_w = ((IData)(vlSelf->__PVT__stall_scoreboard_r) 
                                    | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w) 
                                       | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w) 
                                          | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w))));
    vlSelf->__PVT__dbg_inst_str[0U] = 0x2dU;
    vlSelf->__PVT__dbg_inst_str[1U] = 0U;
    vlSelf->__PVT__dbg_inst_str[2U] = 0U;
    vlSelf->__PVT__dbg_inst_pc = 0U;
    vlSelf->__PVT__dbg_inst_ra[0U] = 0x2dU;
    vlSelf->__PVT__dbg_inst_ra[1U] = 0U;
    vlSelf->__PVT__dbg_inst_ra[2U] = 0U;
    vlSelf->__PVT__dbg_inst_rb[0U] = 0x2dU;
    vlSelf->__PVT__dbg_inst_rb[1U] = 0U;
    vlSelf->__PVT__dbg_inst_rb[2U] = 0U;
    vlSelf->__PVT__dbg_inst_rd[0U] = 0x2dU;
    vlSelf->__PVT__dbg_inst_rd[1U] = 0U;
    vlSelf->__PVT__dbg_inst_rd[2U] = 0U;
    if (vlSelf->__PVT__opcode_valid_r) {
        if ((IData)((0ULL != (0xffULL & vlSelf->__PVT__opcode_instr_q)))) {
            if ((1U & (IData)(vlSelf->__PVT__opcode_instr_q))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 1U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x61646469U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 2U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 3U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x73U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 4U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 5U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelf->__PVT__dbg_inst_str[0U] = (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__opcode_instr_q 
                                                               >> 6U)))
                                                    ? 0x736c6c69U
                                                    : 0x73726c69U);
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if ((IData)((0ULL != (0xff00ULL & vlSelf->__PVT__opcode_instr_q)))) {
            if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                               >> 8U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x73726169U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 9U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0xaU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x75697063U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x61U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0xbU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x616464U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0xcU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x737562U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0xdU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x736c74U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelf->__PVT__dbg_inst_str[0U] = (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__opcode_instr_q 
                                                               >> 0xeU)))
                                                    ? 0x736c7475U
                                                    : 0x786f72U);
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if ((IData)((0ULL != (0xff0000ULL & vlSelf->__PVT__opcode_instr_q)))) {
            if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                               >> 0x10U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6f72U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x11U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x616e64U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x12U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x13U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x73726cU;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x14U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x737261U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x15U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelf->__PVT__dbg_inst_str[0U] = (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__opcode_instr_q 
                                                               >> 0x16U)))
                                                    ? 0x6a616c72U
                                                    : 0x626571U);
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if ((IData)((0ULL != (0xff000000ULL 
                                     & vlSelf->__PVT__opcode_instr_q)))) {
            if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                               >> 0x18U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x626e65U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x19U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x626c74U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x1aU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x626765U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x1bU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x1cU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x62676575U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x1dU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6c62U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelf->__PVT__dbg_inst_str[0U] = (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__opcode_instr_q 
                                                               >> 0x1eU)))
                                                    ? 0x6c68U
                                                    : 0x6c77U);
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if ((IData)((0ULL != (0xff00000000ULL 
                                     & vlSelf->__PVT__opcode_instr_q)))) {
            if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                               >> 0x20U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x21U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x22U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x23U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x7362U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x24U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x7368U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x25U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x7377U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                   >> 0x26U)))) {
                    vlSelf->__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelf->__PVT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelf->__PVT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelf->__PVT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if ((IData)((0ULL != (0xff0000000000ULL 
                                     & vlSelf->__PVT__opcode_instr_q)))) {
            if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                               >> 0x28U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x65726574U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x29U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x73727277U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x2aU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x73727273U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x2bU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x73727263U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x2cU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x72727769U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x2dU)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x72727369U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                   >> 0x2eU)))) {
                    vlSelf->__PVT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelf->__PVT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelf->__PVT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                }
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if ((IData)((0ULL != (0xff000000000000ULL 
                                     & vlSelf->__PVT__opcode_instr_q)))) {
            if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                               >> 0x30U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x31U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x6d75U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x32U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0x6dU;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x33U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x646976U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x34U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x64697675U;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x35U)))) {
                vlSelf->__PVT__dbg_inst_str[0U] = 0x72656dU;
                vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                   >> 0x36U)))) {
                    vlSelf->__PVT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelf->__PVT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelf->__PVT__dbg_inst_str[0U] = 0x41554c54U;
                    vlSelf->__PVT__dbg_inst_str[1U] = 0x46U;
                }
                vlSelf->__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                  >> 0x38U)))) {
            vlSelf->__PVT__dbg_inst_str[0U] = 0x41554c54U;
            vlSelf->__PVT__dbg_inst_str[1U] = 0x47455f46U;
            vlSelf->__PVT__dbg_inst_str[2U] = 0x5041U;
        }
        vlSelf->__PVT__dbg_inst_pc = vlSelf->__PVT__pc_q;
        vlSelf->__PVT__dbg_inst_ra[0U] = vlSelf->__VdfgExtracted_h3eca160f__0[0U];
        vlSelf->__PVT__dbg_inst_ra[1U] = vlSelf->__VdfgExtracted_h3eca160f__0[1U];
        vlSelf->__PVT__dbg_inst_ra[2U] = vlSelf->__VdfgExtracted_h3eca160f__0[2U];
        vlSelf->__PVT__dbg_inst_rb[0U] = vlSelf->__VdfgExtracted_h09ef7aaa__0[0U];
        vlSelf->__PVT__dbg_inst_rb[1U] = vlSelf->__VdfgExtracted_h09ef7aaa__0[1U];
        vlSelf->__PVT__dbg_inst_rb[2U] = vlSelf->__VdfgExtracted_h09ef7aaa__0[2U];
        vlSelf->__PVT__dbg_inst_rd[0U] = vlSelf->__VdfgExtracted_hf25855dd__0[0U];
        vlSelf->__PVT__dbg_inst_rd[1U] = vlSelf->__VdfgExtracted_hf25855dd__0[1U];
        vlSelf->__PVT__dbg_inst_rd[2U] = vlSelf->__VdfgExtracted_hf25855dd__0[2U];
        if ((1U & ((0ULL != (0x600600ULL & vlSelf->__PVT__opcode_instr_q)) 
                   | (((((((((((((((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                  >> 1U))) 
                                   || (1U & (IData)(vlSelf->__PVT__opcode_instr_q))) 
                                  || (1U & (IData)(
                                                   (vlSelf->__PVT__opcode_instr_q 
                                                    >> 2U)))) 
                                 || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                   >> 3U)))) 
                                || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                  >> 4U)))) 
                               || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                 >> 5U)))) 
                              || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                >> 0x29U)))) 
                             || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                               >> 0x2aU)))) 
                            || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0x2bU)))) 
                           || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 0x2cU)))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 0x2dU)))) 
                         || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 0x2eU)))) 
                        | (((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 6U))) 
                            || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 7U)))) 
                           || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 8U))))) 
                       | ((((((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 0x1dU))) 
                              || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                >> 0x1eU)))) 
                             || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                               >> 0x1fU)))) 
                            || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0x20U)))) 
                           || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 0x21U)))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 0x22U))))) 
                      | (((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                         >> 0x23U))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 0x24U)))) 
                         || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 0x25U)))))))) {
            if ((1U & (~ ((((((((((((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                   >> 1U))) 
                                    || (1U & (IData)(vlSelf->__PVT__opcode_instr_q))) 
                                   || (1U & (IData)(
                                                    (vlSelf->__PVT__opcode_instr_q 
                                                     >> 2U)))) 
                                  || (1U & (IData)(
                                                   (vlSelf->__PVT__opcode_instr_q 
                                                    >> 3U)))) 
                                 || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                   >> 4U)))) 
                                || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                  >> 5U)))) 
                               || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                 >> 0x29U)))) 
                              || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                >> 0x2aU)))) 
                             || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                               >> 0x2bU)))) 
                            || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0x2cU)))) 
                           || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 0x2dU)))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 0x2eU))))))) {
                if ((1U & (~ (((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 6U))) 
                               || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                 >> 7U)))) 
                              || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                >> 8U))))))) {
                    if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                       >> 9U)))) {
                        vlSelf->__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelf->__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelf->__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0xaU)))) {
                        vlSelf->__PVT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelf->__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelf->__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0x15U)))) {
                        vlSelf->__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelf->__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelf->__PVT__dbg_inst_ra[2U] = 0U;
                    }
                    if ((1U & (~ (IData)((vlSelf->__PVT__opcode_instr_q 
                                          >> 9U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0xaU))))) {
                            if ((1U & (~ (IData)((vlSelf->__PVT__opcode_instr_q 
                                                  >> 0x15U))))) {
                                if ((1U & (~ (IData)(
                                                     (vlSelf->__PVT__opcode_instr_q 
                                                      >> 0x16U))))) {
                                    if ((1U & (~ ((
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__opcode_instr_q 
                                                                  >> 0x1dU))) 
                                                      || (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__opcode_instr_q 
                                                                     >> 0x1eU)))) 
                                                     || (1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__opcode_instr_q 
                                                                    >> 0x1fU)))) 
                                                    || (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__opcode_instr_q 
                                                                   >> 0x20U)))) 
                                                   || (1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__opcode_instr_q 
                                                                  >> 0x21U)))) 
                                                  || (1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__opcode_instr_q 
                                                                 >> 0x22U))))))) {
                                        vlSelf->__PVT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelf->__PVT__dbg_inst_rd[1U] = 0U;
                                        vlSelf->__PVT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((((((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                          >> 1U))) 
                           || (1U & (IData)(vlSelf->__PVT__opcode_instr_q))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 2U)))) 
                         || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 3U)))) 
                        || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                          >> 4U)))) 
                       || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                         >> 5U)))) 
                      || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                        >> 0x29U)))) 
                     || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                       >> 0x2aU)))) 
                    || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x2bU)))) 
                   || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                     >> 0x2cU)))) || 
                  (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                 >> 0x2dU)))) || (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__opcode_instr_q 
                                                             >> 0x2eU))))) {
                vlSelf->__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelf->__PVT__dbg_inst_rb[1U] = 0U;
                vlSelf->__PVT__dbg_inst_rb[2U] = 0U;
            } else if ((((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                        >> 6U))) || 
                         (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                        >> 7U)))) || 
                        (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                       >> 8U))))) {
                vlSelf->__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelf->__PVT__dbg_inst_rb[1U] = 0U;
                vlSelf->__PVT__dbg_inst_rb[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 9U)))) {
                vlSelf->__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelf->__PVT__dbg_inst_rb[1U] = 0U;
                vlSelf->__PVT__dbg_inst_rb[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0xaU)))) {
                vlSelf->__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelf->__PVT__dbg_inst_rb[1U] = 0U;
                vlSelf->__PVT__dbg_inst_rb[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x15U)))) {
                vlSelf->__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelf->__PVT__dbg_inst_rb[1U] = 0U;
                vlSelf->__PVT__dbg_inst_rb[2U] = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                      >> 0x16U)))) {
                vlSelf->__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelf->__PVT__dbg_inst_rb[1U] = 0U;
                vlSelf->__PVT__dbg_inst_rb[2U] = 0U;
            } else if (((((((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 0x1dU))) 
                            || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0x1eU)))) 
                           || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 0x1fU)))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 0x20U)))) 
                         || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 0x21U)))) 
                        || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                          >> 0x22U))))) {
                vlSelf->__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelf->__PVT__dbg_inst_rb[1U] = 0U;
                vlSelf->__PVT__dbg_inst_rb[2U] = 0U;
            }
        }
        __VdfgTmp_ha6e97792__0 = (1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w)));
        vlSelf->__PVT__lsu_opcode_valid_o = vlSelf->__VdfgTmp_h53fea6f4__0;
    } else {
        __VdfgTmp_ha6e97792__0 = 0U;
        vlSelf->__PVT__lsu_opcode_valid_o = 0U;
    }
    vlSelf->__VdfgTmp_h058363c8__0 = ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w)) 
                                      & (IData)(vlSelf->__VdfgTmp_h53fea6f4__0));
    vlSelf->__PVT__muldiv_opcode_valid_o = ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w)) 
                                            & (IData)(__VdfgTmp_ha6e97792__0));
    vlSelf->__PVT__csr_opcode_valid_o = ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w)) 
                                         & (IData)(__VdfgTmp_ha6e97792__0));
    vlSelf->__PVT__fetch_accept_o = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q) 
                                     | ((~ (IData)(vlSelf->__PVT__stall_scoreboard_r)) 
                                        & (IData)(vlSelf->__VdfgTmp_h058363c8__0)));
    vlSelf->__PVT__exec_opcode_valid_o = ((IData)(vlSelf->__PVT__opcode_valid_r) 
                                          & (IData)(vlSelf->__VdfgTmp_h058363c8__0));
    __VdfgExtracted_h3cb01ac5__0 = ((IData)((0ULL != 
                                             (0x7ffe07e0000000ULL 
                                              & vlSelf->__PVT__opcode_instr_q))) 
                                    & ((IData)(vlSelf->__PVT__exec_opcode_valid_o) 
                                       & ((IData)(vlSelf->__PVT__lsu_opcode_valid_o) 
                                          & ((IData)(vlSelf->__PVT__csr_opcode_valid_o) 
                                             & (IData)(vlSelf->__PVT__muldiv_opcode_valid_o)))));
    vlSelf->__PVT__scoreboard_r = vlSelf->__PVT__scoreboard_q;
    vlSelf->__PVT__scoreboard_r = ((~ ((IData)(1U) 
                                       << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) 
                                   & vlSelf->__PVT__scoreboard_r);
    if (__VdfgExtracted_h3cb01ac5__0) {
        vlSelf->__PVT__scoreboard_r = (vlSelf->__PVT__scoreboard_r 
                                       | (0xffffffffULL 
                                          & ((IData)(1U) 
                                             << (0x1fU 
                                                 & (vlSelf->__PVT__inst_q 
                                                    >> 7U)))));
    }
    vlSelf->__PVT__scoreboard_r = ((~ ((IData)(1U) 
                                       << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w))) 
                                   & vlSelf->__PVT__scoreboard_r);
    vlSelf->__PVT__scoreboard_r = ((~ ((IData)(1U) 
                                       << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) 
                                   & vlSelf->__PVT__scoreboard_r);
}

VL_ATTR_COLD void Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1\n"); );
    // Init
    IData/*31:0*/ __VdfgExtracted_h2b3b98c0__0;
    __VdfgExtracted_h2b3b98c0__0 = 0;
    // Body
    vlSelf->__PVT__opcode_rb_operand_r = (((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q)) 
                                           & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q) 
                                              == (0x1fU 
                                                  & (vlSelf->__PVT__inst_q 
                                                     >> 0x14U))))
                                           ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q
                                           : (((0U 
                                                != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r)) 
                                               & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__inst_q 
                                                      >> 0x14U))))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__rb_value_r));
    vlSelf->__PVT__opcode_ra_operand_r = (((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q)) 
                                           & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q) 
                                              == (0x1fU 
                                                  & (vlSelf->__PVT__inst_q 
                                                     >> 0xfU))))
                                           ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q
                                           : (((0U 
                                                != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r)) 
                                               & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__inst_q 
                                                      >> 0xfU))))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__ra_value_r));
    vlSelf->__VdfgTmp_h709db973__0 = (((QData)((IData)(
                                                       (0x8000053U 
                                                        == 
                                                        (0xfe00007fU 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                       << 0x38U) | 
                                      (((QData)((IData)(
                                                        (0x53U 
                                                         == 
                                                         (0xfe00007fU 
                                                          & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         (0x2007033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            (0x2006033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               (0x2005033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  (0x2004033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     (0x2003033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        (0x2002033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           (0x2001033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              (0x2000033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                (0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(
                                                                                (0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(
                                                                                (0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                       << 0x2cU) 
                                                                      | (((QData)((IData)(
                                                                                (0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                          << 0x2bU) 
                                                                         | (((QData)((IData)(
                                                                                (0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                             << 0x2aU) 
                                                                            | (((QData)((IData)(
                                                                                (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                                << 0x29U) 
                                                                               | (((QData)((IData)(
                                                                                (0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x100073U 
                                                                                == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x73U 
                                                                                == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x1eU) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x1dU) 
                                                                                | (((0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x1cU) 
                                                                                | (((0x6063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x1bU) 
                                                                                | (((0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x1aU) 
                                                                                | (((0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x19U) 
                                                                                | (((0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x18U) 
                                                                                | (((0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x17U) 
                                                                                | (((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x16U) 
                                                                                | (((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x15U) 
                                                                                | (((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x14U) 
                                                                                | (((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x13U) 
                                                                                | (((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x12U) 
                                                                                | (((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x11U) 
                                                                                | (((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0x10U) 
                                                                                | (((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0xfU) 
                                                                                | (((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0xeU) 
                                                                                | (((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0xdU) 
                                                                                | (((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0xcU) 
                                                                                | (((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0xbU) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 0xaU) 
                                                                                | (((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 9U) 
                                                                                | (((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 8U) 
                                                                                | (((0x5013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 7U) 
                                                                                | (((0x1013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 6U) 
                                                                                | (((0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 5U) 
                                                                                | (((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 4U) 
                                                                                | (((0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 3U) 
                                                                                | (((0x2013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 2U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                << 1U) 
                                                                                | (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __VdfgExtracted_h2b3b98c0__0 = (vlSelf->__PVT__opcode_ra_operand_r 
                                    + vlSelf->__VdfgExtracted_h7a81245e__0);
    if (vlSelf->__PVT__opcode_valid_r) {
        if ((1U & ((0ULL != (0x600600ULL & vlSelf->__PVT__opcode_instr_q)) 
                   | (((((((((((((((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                  >> 1U))) 
                                   || (1U & (IData)(vlSelf->__PVT__opcode_instr_q))) 
                                  || (1U & (IData)(
                                                   (vlSelf->__PVT__opcode_instr_q 
                                                    >> 2U)))) 
                                 || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                   >> 3U)))) 
                                || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                  >> 4U)))) 
                               || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                 >> 5U)))) 
                              || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                >> 0x29U)))) 
                             || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                               >> 0x2aU)))) 
                            || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0x2bU)))) 
                           || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 0x2cU)))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 0x2dU)))) 
                         || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 0x2eU)))) 
                        | (((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 6U))) 
                            || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 7U)))) 
                           || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 8U))))) 
                       | ((((((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 0x1dU))) 
                              || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                                >> 0x1eU)))) 
                             || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                               >> 0x1fU)))) 
                            || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                              >> 0x20U)))) 
                           || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                             >> 0x21U)))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 0x22U))))) 
                      | (((1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                         >> 0x23U))) 
                          || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                            >> 0x24U)))) 
                         || (1U & (IData)((vlSelf->__PVT__opcode_instr_q 
                                           >> 0x25U)))))))) {
            vlSelf->__PVT__dbg_inst_imm = (((((((((
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__opcode_instr_q 
                                                                  >> 1U))) 
                                                      || (1U 
                                                          & (IData)(vlSelf->__PVT__opcode_instr_q))) 
                                                     || (1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__opcode_instr_q 
                                                                    >> 2U)))) 
                                                    || (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__opcode_instr_q 
                                                                   >> 3U)))) 
                                                   || (1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__opcode_instr_q 
                                                                  >> 4U)))) 
                                                  || (1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__opcode_instr_q 
                                                                 >> 5U)))) 
                                                 || (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__opcode_instr_q 
                                                                >> 0x29U)))) 
                                                || (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__opcode_instr_q 
                                                               >> 0x2aU)))) 
                                               || (1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__opcode_instr_q 
                                                              >> 0x2bU)))) 
                                              || (1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__opcode_instr_q 
                                                             >> 0x2cU)))) 
                                             || (1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__opcode_instr_q 
                                                            >> 0x2dU)))) 
                                            || (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__opcode_instr_q 
                                                           >> 0x2eU))))
                                            ? vlSelf->__VdfgExtracted_h7a81245e__0
                                            : ((((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__opcode_instr_q 
                                                             >> 6U))) 
                                                 || (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__opcode_instr_q 
                                                                >> 7U)))) 
                                                || (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__opcode_instr_q 
                                                               >> 8U))))
                                                ? (0x1fU 
                                                   & (vlSelf->__PVT__inst_q 
                                                      >> 0x14U))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__opcode_instr_q 
                                                               >> 9U)))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->__PVT__inst_q)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__opcode_instr_q 
                                                                >> 0xaU)))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->__PVT__inst_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__opcode_instr_q 
                                                                 >> 0x15U)))
                                                      ? 
                                                     (vlSelf->__PVT__pc_q 
                                                      + 
                                                      (((- (IData)(
                                                                   (vlSelf->__PVT__inst_q 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSelf->__PVT__inst_q) 
                                                          | ((0x800U 
                                                              & (vlSelf->__PVT__inst_q 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->__PVT__inst_q 
                                                                   >> 0x14U))))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__opcode_instr_q 
                                                                  >> 0x16U)))
                                                       ? __VdfgExtracted_h2b3b98c0__0
                                                       : 
                                                      (((((((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__opcode_instr_q 
                                                                        >> 0x1dU))) 
                                                            || (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__opcode_instr_q 
                                                                           >> 0x1eU)))) 
                                                           || (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__opcode_instr_q 
                                                                          >> 0x1fU)))) 
                                                          || (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__opcode_instr_q 
                                                                         >> 0x20U)))) 
                                                         || (1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__opcode_instr_q 
                                                                        >> 0x21U)))) 
                                                        || (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__opcode_instr_q 
                                                                       >> 0x22U))))
                                                        ? __VdfgExtracted_h2b3b98c0__0
                                                        : 
                                                       (vlSelf->__PVT__opcode_ra_operand_r 
                                                        + 
                                                        (((- (IData)(
                                                                     (vlSelf->__PVT__inst_q 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (vlSelf->__PVT__inst_q 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->__PVT__inst_q 
                                                                  >> 7U))))))))))));
        }
    }
}
