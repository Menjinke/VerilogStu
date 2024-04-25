// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT____Vcellinp__fa1____pinNumber3));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT____Vcellinp__fa2____pinNumber3));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT____Vcellinp__fa3____pinNumber3));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT____Vcellinp__fa4____pinNumber3));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3));
    }
    bufp->chgCData(oldp+7,(vlSelf->x),8);
    bufp->chgCData(oldp+8,(vlSelf->y),8);
    bufp->chgBit(oldp+9,(vlSelf->cin));
    bufp->chgCData(oldp+10,(vlSelf->f),8);
    bufp->chgBit(oldp+11,(vlSelf->cout));
    bufp->chgSData(oldp+12,((((IData)(vlSelf->cout) 
                              << 8U) | (((IData)(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT____Vcellinp__fa4____pinNumber3) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT____Vcellinp__fa3____pinNumber3) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT____Vcellinp__fa2____pinNumber3) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT____Vcellinp__fa1____pinNumber3) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->cin)))))))))),9);
    bufp->chgBit(oldp+13,((1U & (IData)(vlSelf->x))));
    bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->y))));
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->x) 
                                 ^ ((IData)(vlSelf->y) 
                                    ^ (IData)(vlSelf->cin))))));
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->x) 
                                 >> 1U))));
    bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->y) 
                                 >> 1U))));
    bufp->chgBit(oldp+18,((1U & (((IData)(vlSelf->x) 
                                  >> 1U) ^ (((IData)(vlSelf->y) 
                                             >> 1U) 
                                            ^ (IData)(vlSelf->top__DOT____Vcellinp__fa1____pinNumber3))))));
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->x) 
                                 >> 2U))));
    bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->y) 
                                 >> 2U))));
    bufp->chgBit(oldp+21,((1U & (((IData)(vlSelf->x) 
                                  >> 2U) ^ (((IData)(vlSelf->y) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->top__DOT____Vcellinp__fa2____pinNumber3))))));
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->x) 
                                 >> 3U))));
    bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->y) 
                                 >> 3U))));
    bufp->chgBit(oldp+24,((1U & (((IData)(vlSelf->x) 
                                  >> 3U) ^ (((IData)(vlSelf->y) 
                                             >> 3U) 
                                            ^ (IData)(vlSelf->top__DOT____Vcellinp__fa3____pinNumber3))))));
    bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->x) 
                                 >> 4U))));
    bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->y) 
                                 >> 4U))));
    bufp->chgBit(oldp+27,((1U & (((IData)(vlSelf->x) 
                                  >> 4U) ^ (((IData)(vlSelf->y) 
                                             >> 4U) 
                                            ^ (IData)(vlSelf->top__DOT____Vcellinp__fa4____pinNumber3))))));
    bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->x) 
                                 >> 5U))));
    bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->y) 
                                 >> 5U))));
    bufp->chgBit(oldp+30,((1U & (((IData)(vlSelf->x) 
                                  >> 5U) ^ (((IData)(vlSelf->y) 
                                             >> 5U) 
                                            ^ (IData)(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3))))));
    bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->x) 
                                 >> 6U))));
    bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->y) 
                                 >> 6U))));
    bufp->chgBit(oldp+33,((1U & (((IData)(vlSelf->x) 
                                  >> 6U) ^ (((IData)(vlSelf->y) 
                                             >> 6U) 
                                            ^ (IData)(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3))))));
    bufp->chgBit(oldp+34,((1U & ((IData)(vlSelf->x) 
                                 >> 7U))));
    bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->y) 
                                 >> 7U))));
    bufp->chgBit(oldp+36,((IData)(((((IData)(vlSelf->x) 
                                     ^ (IData)(vlSelf->y)) 
                                    >> 7U) ^ (IData)(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
