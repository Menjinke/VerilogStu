// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode24.h for the primary calling header

#include "Vdecode24__pch.h"
#include "Vdecode24__Syms.h"
#include "Vdecode24___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode24___024root___dump_triggers__stl(Vdecode24___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecode24___024root___eval_triggers__stl(Vdecode24___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecode24___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
