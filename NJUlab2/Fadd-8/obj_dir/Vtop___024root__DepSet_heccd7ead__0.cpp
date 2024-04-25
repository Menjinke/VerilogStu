// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__fa1____pinNumber3 
        = (1U & (((IData)(vlSelf->x) & ((IData)(vlSelf->y) 
                                        | (IData)(vlSelf->cin))) 
                 | ((IData)(vlSelf->y) & (IData)(vlSelf->cin))));
    vlSelf->top__DOT____Vcellinp__fa2____pinNumber3 
        = (1U & ((((IData)(vlSelf->x) >> 1U) & (((IData)(vlSelf->y) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->top__DOT____Vcellinp__fa1____pinNumber3))) 
                 | (((IData)(vlSelf->y) >> 1U) & (IData)(vlSelf->top__DOT____Vcellinp__fa1____pinNumber3))));
    vlSelf->top__DOT____Vcellinp__fa3____pinNumber3 
        = (1U & ((((IData)(vlSelf->x) >> 2U) & (((IData)(vlSelf->y) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->top__DOT____Vcellinp__fa2____pinNumber3))) 
                 | (((IData)(vlSelf->y) >> 2U) & (IData)(vlSelf->top__DOT____Vcellinp__fa2____pinNumber3))));
    vlSelf->top__DOT____Vcellinp__fa4____pinNumber3 
        = (1U & ((((IData)(vlSelf->x) >> 3U) & (((IData)(vlSelf->y) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->top__DOT____Vcellinp__fa3____pinNumber3))) 
                 | (((IData)(vlSelf->y) >> 3U) & (IData)(vlSelf->top__DOT____Vcellinp__fa3____pinNumber3))));
    vlSelf->top__DOT____Vcellinp__fa5____pinNumber3 
        = (1U & ((((IData)(vlSelf->x) >> 4U) & (((IData)(vlSelf->y) 
                                                 >> 4U) 
                                                | (IData)(vlSelf->top__DOT____Vcellinp__fa4____pinNumber3))) 
                 | (((IData)(vlSelf->y) >> 4U) & (IData)(vlSelf->top__DOT____Vcellinp__fa4____pinNumber3))));
    vlSelf->top__DOT____Vcellinp__fa6____pinNumber3 
        = (1U & ((((IData)(vlSelf->x) >> 5U) & (((IData)(vlSelf->y) 
                                                 >> 5U) 
                                                | (IData)(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3))) 
                 | (((IData)(vlSelf->y) >> 5U) & (IData)(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3))));
    vlSelf->top__DOT____Vcellinp__fa7____pinNumber3 
        = (1U & ((((IData)(vlSelf->x) >> 6U) & (((IData)(vlSelf->y) 
                                                 >> 6U) 
                                                | (IData)(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3))) 
                 | (((IData)(vlSelf->y) >> 6U) & (IData)(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3))));
    vlSelf->cout = (1U & ((((IData)(vlSelf->x) >> 7U) 
                           & (((IData)(vlSelf->y) >> 7U) 
                              | (IData)(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3))) 
                          | (((IData)(vlSelf->y) >> 7U) 
                             & (IData)(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3))));
    vlSelf->f = (((IData)(((((IData)(vlSelf->x) ^ (IData)(vlSelf->y)) 
                            >> 7U) ^ (IData)(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3))) 
                  << 7U) | ((0x40U & ((0xffffffc0U 
                                       & (IData)(vlSelf->x)) 
                                      ^ ((0xffffffc0U 
                                          & (IData)(vlSelf->y)) 
                                         ^ ((IData)(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3) 
                                            << 6U)))) 
                            | ((0x20U & ((0xffffffe0U 
                                          & (IData)(vlSelf->x)) 
                                         ^ ((0xffffffe0U 
                                             & (IData)(vlSelf->y)) 
                                            ^ ((IData)(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3) 
                                               << 5U)))) 
                               | ((0x10U & ((0xfffffff0U 
                                             & (IData)(vlSelf->x)) 
                                            ^ ((0xfffffff0U 
                                                & (IData)(vlSelf->y)) 
                                               ^ ((IData)(vlSelf->top__DOT____Vcellinp__fa4____pinNumber3) 
                                                  << 4U)))) 
                                  | ((8U & ((0xfffffff8U 
                                             & (IData)(vlSelf->x)) 
                                            ^ ((0xfffffff8U 
                                                & (IData)(vlSelf->y)) 
                                               ^ ((IData)(vlSelf->top__DOT____Vcellinp__fa3____pinNumber3) 
                                                  << 3U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & (IData)(vlSelf->x)) 
                                               ^ ((0xfffffffcU 
                                                   & (IData)(vlSelf->y)) 
                                                  ^ 
                                                  ((IData)(vlSelf->top__DOT____Vcellinp__fa2____pinNumber3) 
                                                   << 2U)))) 
                                        | ((2U & ((0xfffffffeU 
                                                   & (IData)(vlSelf->x)) 
                                                  ^ 
                                                  ((0xfffffffeU 
                                                    & (IData)(vlSelf->y)) 
                                                   ^ 
                                                   ((IData)(vlSelf->top__DOT____Vcellinp__fa1____pinNumber3) 
                                                    << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->x) 
                                               ^ ((IData)(vlSelf->y) 
                                                  ^ (IData)(vlSelf->cin)))))))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
