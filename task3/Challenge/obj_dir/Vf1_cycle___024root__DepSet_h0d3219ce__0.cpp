// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_cycle.h for the primary calling header

#include "verilated.h"

#include "Vf1_cycle___024root.h"

VL_INLINE_OPT void Vf1_cycle___024root___sequent__TOP__0(Vf1_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__f1_cycle__DOT__clktick__DOT__count;
    // Body
    __Vdly__f1_cycle__DOT__clktick__DOT__count = vlSelf->f1_cycle__DOT__clktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state = 0U;
        vlSelf->f1_cycle__DOT__tick = 0U;
        __Vdly__f1_cycle__DOT__clktick__DOT__count 
            = vlSelf->N;
    } else {
        if (vlSelf->f1_cycle__DOT__tick) {
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state 
                = vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state;
        }
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->f1_cycle__DOT__clktick__DOT__count))) {
                vlSelf->f1_cycle__DOT__tick = 1U;
                __Vdly__f1_cycle__DOT__clktick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__f1_cycle__DOT__clktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1_cycle__DOT__clktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->f1_cycle__DOT__tick = 0U;
            }
        }
    }
    if (((((((((0U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state) 
               | (1U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) 
              | (2U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) 
             | (3U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) 
            | (4U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) 
           | (5U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) 
          | (6U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) 
         | (7U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state))) {
        if ((0U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) {
            vlSelf->out = 0U;
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 1U;
        } else if ((1U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) {
            vlSelf->out = 1U;
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 2U;
        } else if ((2U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) {
            vlSelf->out = 3U;
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 3U;
        } else if ((3U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) {
            vlSelf->out = 7U;
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 4U;
        } else if ((4U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) {
            vlSelf->out = 0xfU;
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 5U;
        } else if ((5U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) {
            vlSelf->out = 0x1fU;
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 6U;
        } else if ((6U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)) {
            vlSelf->out = 0x3fU;
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 7U;
        } else {
            vlSelf->out = 0x7fU;
            vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 8U;
        }
    } else {
        vlSelf->out = ((8U == vlSelf->f1_cycle__DOT__f1_cycle__DOT__current_state)
                        ? 0xffU : 0U);
        vlSelf->f1_cycle__DOT__f1_cycle__DOT__next_state = 0U;
    }
    vlSelf->f1_cycle__DOT__clktick__DOT__count = __Vdly__f1_cycle__DOT__clktick__DOT__count;
}

void Vf1_cycle___024root___eval(Vf1_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_cycle___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vf1_cycle___024root___eval_debug_assertions(Vf1_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cycle___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
