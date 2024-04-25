// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,7,0);
    VL_IN8(y,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(f,7,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ top__DOT____Vcellinp__fa1____pinNumber3;
    CData/*0:0*/ top__DOT____Vcellinp__fa2____pinNumber3;
    CData/*0:0*/ top__DOT____Vcellinp__fa3____pinNumber3;
    CData/*0:0*/ top__DOT____Vcellinp__fa4____pinNumber3;
    CData/*0:0*/ top__DOT____Vcellinp__fa5____pinNumber3;
    CData/*0:0*/ top__DOT____Vcellinp__fa6____pinNumber3;
    CData/*0:0*/ top__DOT____Vcellinp__fa7____pinNumber3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
