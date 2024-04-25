// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_mux21.h for the primary calling header

#include "Vm_mux21__pch.h"
#include "Vm_mux21___024root.h"

VL_INLINE_OPT void Vm_mux21___024root___ico_sequent__TOP__0(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->y = ((IData)(vlSelf->s) ? (IData)(vlSelf->b)
                  : (IData)(vlSelf->a));
}

void Vm_mux21___024root___eval_ico(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vm_mux21___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vm_mux21___024root___eval_triggers__ico(Vm_mux21___024root* vlSelf);

bool Vm_mux21___024root___eval_phase__ico(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vm_mux21___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vm_mux21___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vm_mux21___024root___eval_act(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_act\n"); );
}

void Vm_mux21___024root___eval_nba(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_nba\n"); );
}

void Vm_mux21___024root___eval_triggers__act(Vm_mux21___024root* vlSelf);

bool Vm_mux21___024root___eval_phase__act(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vm_mux21___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vm_mux21___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vm_mux21___024root___eval_phase__nba(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vm_mux21___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__ico(Vm_mux21___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__nba(Vm_mux21___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__act(Vm_mux21___024root* vlSelf);
#endif  // VL_DEBUG

void Vm_mux21___024root___eval(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vm_mux21___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("m_mux21.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vm_mux21___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vm_mux21___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("m_mux21.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vm_mux21___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("m_mux21.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vm_mux21___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vm_mux21___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vm_mux21___024root___eval_debug_assertions(Vm_mux21___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->s & 0xfeU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
