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
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgWData(oldp+2,(vlTOPp->message),512);
        tracep->chgWData(oldp+18,(vlTOPp->hash),256);
        tracep->chgBit(oldp+26,(vlTOPp->sha256__DOT__clk));
        tracep->chgBit(oldp+27,(vlTOPp->sha256__DOT__reset));
        tracep->chgWData(oldp+28,(vlTOPp->sha256__DOT__message),512);
        tracep->chgWData(oldp+44,(vlTOPp->sha256__DOT__hash),256);
        tracep->chgIData(oldp+52,(vlTOPp->sha256__DOT__H[0]),32);
        tracep->chgIData(oldp+53,(vlTOPp->sha256__DOT__H[1]),32);
        tracep->chgIData(oldp+54,(vlTOPp->sha256__DOT__H[2]),32);
        tracep->chgIData(oldp+55,(vlTOPp->sha256__DOT__H[3]),32);
        tracep->chgIData(oldp+56,(vlTOPp->sha256__DOT__H[4]),32);
        tracep->chgIData(oldp+57,(vlTOPp->sha256__DOT__H[5]),32);
        tracep->chgIData(oldp+58,(vlTOPp->sha256__DOT__H[6]),32);
        tracep->chgIData(oldp+59,(vlTOPp->sha256__DOT__H[7]),32);
        tracep->chgIData(oldp+60,(vlTOPp->sha256__DOT__i),32);
        tracep->chgIData(oldp+61,(vlTOPp->sha256__DOT__a),32);
        tracep->chgIData(oldp+62,(vlTOPp->sha256__DOT__b),32);
        tracep->chgIData(oldp+63,(vlTOPp->sha256__DOT__c),32);
        tracep->chgIData(oldp+64,(vlTOPp->sha256__DOT__d),32);
        tracep->chgIData(oldp+65,(vlTOPp->sha256__DOT__e),32);
        tracep->chgIData(oldp+66,(vlTOPp->sha256__DOT__f),32);
        tracep->chgIData(oldp+67,(vlTOPp->sha256__DOT__g),32);
        tracep->chgIData(oldp+68,(vlTOPp->sha256__DOT__h),32);
        tracep->chgIData(oldp+69,(vlTOPp->sha256__DOT__temp1),32);
        tracep->chgIData(oldp+70,(vlTOPp->sha256__DOT__temp2),32);
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
