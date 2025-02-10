// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->J));
        tracep->chgBit(oldp+1,(vlTOPp->K));
        tracep->chgBit(oldp+2,(vlTOPp->clk));
        tracep->chgBit(oldp+3,(vlTOPp->reset));
        tracep->chgBit(oldp+4,(vlTOPp->q));
        tracep->chgBit(oldp+5,(vlTOPp->qbar));
        tracep->chgBit(oldp+6,(vlTOPp->JK__DOT__J));
        tracep->chgBit(oldp+7,(vlTOPp->JK__DOT__K));
        tracep->chgBit(oldp+8,(vlTOPp->JK__DOT__clk));
        tracep->chgBit(oldp+9,(vlTOPp->JK__DOT__reset));
        tracep->chgBit(oldp+10,(vlTOPp->JK__DOT__q));
        tracep->chgBit(oldp+11,(vlTOPp->JK__DOT__qbar));
    }
}

void Vtop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
