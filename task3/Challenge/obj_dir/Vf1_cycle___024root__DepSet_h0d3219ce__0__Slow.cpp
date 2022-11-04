// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_cycle.h for the primary calling header

#include "verilated.h"

#include "Vf1_cycle___024root.h"

VL_ATTR_COLD void Vf1_cycle___024root___settle__TOP__0(Vf1_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state) 
               | (1U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
              | (2U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
             | (3U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
            | (4U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
           | (5U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
          | (6U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) 
         | (7U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state))) {
        if ((0U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) {
            vlSelf->out = 0U;
            vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 1U;
        } else if ((1U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) {
            vlSelf->out = 1U;
            vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 2U;
        } else if ((2U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) {
            vlSelf->out = 3U;
            vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 3U;
        } else if ((3U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) {
            vlSelf->out = 7U;
            vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 4U;
        } else if ((4U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) {
            vlSelf->out = 0xfU;
            vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 5U;
        } else if ((5U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) {
            vlSelf->out = 0x1fU;
            vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 6U;
        } else if ((6U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)) {
            vlSelf->out = 0x3fU;
            vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 7U;
        } else {
            vlSelf->out = 0x7fU;
            vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 8U;
        }
    } else {
        vlSelf->out = ((8U == vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state)
                        ? 0xffU : 0U);
        vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vf1_cycle___024root___eval_initial(Vf1_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vf1_cycle___024root___eval_settle(Vf1_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root___eval_settle\n"); );
    // Body
    Vf1_cycle___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vf1_cycle___024root___final(Vf1_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_cycle___024root___ctor_var_reset(Vf1_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->f1_cycle__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->f1_cycle__DOT__clktick_instance__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__current_state = 0;
    vlSelf->f1_cycle__DOT__f1_fsm_instance__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
