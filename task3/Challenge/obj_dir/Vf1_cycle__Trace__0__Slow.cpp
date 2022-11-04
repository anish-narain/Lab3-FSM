// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_cycle__Syms.h"


VL_ATTR_COLD void Vf1_cycle___024root__trace_init_sub__TOP__0(Vf1_cycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"N", false,-1, 15,0);
    tracep->declBus(c+10,"out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_cycle ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"N", false,-1, 15,0);
    tracep->declBus(c+10,"out", false,-1, 7,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->pushNamePrefix("clktick_instance ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+2,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_fsm_instance ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBus(c+3,"out", false,-1, 8,1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+4,"current_state", false,-1, 31,0);
    tracep->declBus(c+5,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_cycle___024root__trace_init_top(Vf1_cycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root__trace_init_top\n"); );
    // Body
    Vf1_cycle___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_cycle___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_cycle___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_cycle___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_cycle___024root__trace_register(Vf1_cycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_cycle___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_cycle___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_cycle___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_cycle___024root__trace_full_sub_0(Vf1_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_cycle___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root__trace_full_top_0\n"); );
    // Init
    Vf1_cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_cycle___024root*>(voidSelf);
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_cycle___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_cycle___024root__trace_full_sub_0(Vf1_cycle___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->f1_cycle__DOT__tick));
    bufp->fullSData(oldp+2,(vlSelf->f1_cycle__DOT__clktick_instance__DOT__count),16);
    bufp->fullCData(oldp+3,((((((((((0U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state) 
                                    | (1U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                                   | (2U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                                  | (3U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                                 | (4U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                                | (5U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                               | (6U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                              | (7U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state))
                              ? ((0U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                  ? 0U : ((1U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                           ? 1U : (
                                                   (2U 
                                                    == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                      ? 0xfU
                                                      : 
                                                     ((5U 
                                                       == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                       ? 0x1fU
                                                       : 
                                                      ((6U 
                                                        == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                        ? 0x3fU
                                                        : 0x7fU)))))))
                              : ((8U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                  ? 0xffU : 0U))),8);
    bufp->fullIData(oldp+4,(vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state),32);
    bufp->fullIData(oldp+5,((((((((((0U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state) 
                                    | (1U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                                   | (2U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                                  | (3U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                                 | (4U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                                | (5U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                               | (6U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
                              | (7U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state))
                              ? ((0U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                  ? 1U : ((1U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                           ? 2U : (
                                                   (2U 
                                                    == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                       ? 6U
                                                       : 
                                                      ((6U 
                                                        == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                                                        ? 7U
                                                        : 8U)))))))
                              : 0U)),32);
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullBit(oldp+7,(vlSelf->rst));
    bufp->fullBit(oldp+8,(vlSelf->en));
    bufp->fullSData(oldp+9,(vlSelf->N),16);
    bufp->fullCData(oldp+10,(vlSelf->out),8);
    bufp->fullIData(oldp+11,(0x10U),32);
}
