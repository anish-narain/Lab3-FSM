// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_cycle.h for the primary calling header

#ifndef VERILATED_VF1_CYCLE___024ROOT_H_
#define VERILATED_VF1_CYCLE___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_cycle__Syms;

class Vf1_cycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ f1_cycle__DOT__tick;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(N,15,0);
    SData/*15:0*/ f1_cycle__DOT__clktick_instance__DOT__count;
    IData/*31:0*/ f1_cycle__DOT__f1_fsm_instance__DOT__current_state;
    IData/*31:0*/ f1_cycle__DOT__f1_fsm_instance__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_cycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_cycle___024root(Vf1_cycle__Syms* symsp, const char* name);
    ~Vf1_cycle___024root();
    VL_UNCOPYABLE(Vf1_cycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
