// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+8,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+32,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT____Vcellinp__fa1____pinNumber3));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT____Vcellinp__fa2____pinNumber3));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT____Vcellinp__fa3____pinNumber3));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT____Vcellinp__fa4____pinNumber3));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3));
    bufp->fullCData(oldp+8,(vlSelf->x),8);
    bufp->fullCData(oldp+9,(vlSelf->y),8);
    bufp->fullBit(oldp+10,(vlSelf->cin));
    bufp->fullCData(oldp+11,(vlSelf->f),8);
    bufp->fullBit(oldp+12,(vlSelf->cout));
    bufp->fullSData(oldp+13,((((IData)(vlSelf->cout) 
                               << 8U) | (((IData)(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3) 
                                          << 7U) | 
                                         (((IData)(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3) 
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
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->x))));
    bufp->fullBit(oldp+15,((1U & (IData)(vlSelf->y))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->x) 
                                  ^ ((IData)(vlSelf->y) 
                                     ^ (IData)(vlSelf->cin))))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->x) 
                                  >> 1U))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->y) 
                                  >> 1U))));
    bufp->fullBit(oldp+19,((1U & (((IData)(vlSelf->x) 
                                   >> 1U) ^ (((IData)(vlSelf->y) 
                                              >> 1U) 
                                             ^ (IData)(vlSelf->top__DOT____Vcellinp__fa1____pinNumber3))))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->x) 
                                  >> 2U))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->y) 
                                  >> 2U))));
    bufp->fullBit(oldp+22,((1U & (((IData)(vlSelf->x) 
                                   >> 2U) ^ (((IData)(vlSelf->y) 
                                              >> 2U) 
                                             ^ (IData)(vlSelf->top__DOT____Vcellinp__fa2____pinNumber3))))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->x) 
                                  >> 3U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->y) 
                                  >> 3U))));
    bufp->fullBit(oldp+25,((1U & (((IData)(vlSelf->x) 
                                   >> 3U) ^ (((IData)(vlSelf->y) 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->top__DOT____Vcellinp__fa3____pinNumber3))))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->x) 
                                  >> 4U))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->y) 
                                  >> 4U))));
    bufp->fullBit(oldp+28,((1U & (((IData)(vlSelf->x) 
                                   >> 4U) ^ (((IData)(vlSelf->y) 
                                              >> 4U) 
                                             ^ (IData)(vlSelf->top__DOT____Vcellinp__fa4____pinNumber3))))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->x) 
                                  >> 5U))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->y) 
                                  >> 5U))));
    bufp->fullBit(oldp+31,((1U & (((IData)(vlSelf->x) 
                                   >> 5U) ^ (((IData)(vlSelf->y) 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->top__DOT____Vcellinp__fa5____pinNumber3))))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->x) 
                                  >> 6U))));
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->y) 
                                  >> 6U))));
    bufp->fullBit(oldp+34,((1U & (((IData)(vlSelf->x) 
                                   >> 6U) ^ (((IData)(vlSelf->y) 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->top__DOT____Vcellinp__fa6____pinNumber3))))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->x) 
                                  >> 7U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->y) 
                                  >> 7U))));
    bufp->fullBit(oldp+37,((IData)(((((IData)(vlSelf->x) 
                                      ^ (IData)(vlSelf->y)) 
                                     >> 7U) ^ (IData)(vlSelf->top__DOT____Vcellinp__fa7____pinNumber3)))));
}
