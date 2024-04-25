// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_mux21.h for the primary calling header

#include "Vm_mux21__pch.h"
#include "Vm_mux21__Syms.h"
#include "Vm_mux21___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__ico(Vm_mux21___024root* vlSelf);
#endif  // VL_DEBUG

void Vm_mux21___024root___eval_triggers__ico(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vm_mux21___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__act(Vm_mux21___024root* vlSelf);
#endif  // VL_DEBUG

void Vm_mux21___024root___eval_triggers__act(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vm_mux21___024root___dump_triggers__act(vlSelf);
    }
#endif
}
