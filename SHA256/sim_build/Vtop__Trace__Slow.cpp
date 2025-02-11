// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+3,"message",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
        tracep->declArray(c+19,"hash",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declBit(c+27,"sha256 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+28,"sha256 reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+29,"sha256 message",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
        tracep->declArray(c+45,"sha256 hash",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+53+i*1,"sha256 H",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        tracep->declBus(c+61,"sha256 i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+62,"sha256 a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+63,"sha256 b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+64,"sha256 c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+65,"sha256 d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+66,"sha256 e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+67,"sha256 f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+68,"sha256 g",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+69,"sha256 h",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+70,"sha256 temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+71,"sha256 temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    }
}

void Vtop::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset));
        tracep->fullWData(oldp+3,(vlTOPp->message),512);
        tracep->fullWData(oldp+19,(vlTOPp->hash),256);
        tracep->fullBit(oldp+27,(vlTOPp->sha256__DOT__clk));
        tracep->fullBit(oldp+28,(vlTOPp->sha256__DOT__reset));
        tracep->fullWData(oldp+29,(vlTOPp->sha256__DOT__message),512);
        tracep->fullWData(oldp+45,(vlTOPp->sha256__DOT__hash),256);
        tracep->fullIData(oldp+53,(vlTOPp->sha256__DOT__H[0]),32);
        tracep->fullIData(oldp+54,(vlTOPp->sha256__DOT__H[1]),32);
        tracep->fullIData(oldp+55,(vlTOPp->sha256__DOT__H[2]),32);
        tracep->fullIData(oldp+56,(vlTOPp->sha256__DOT__H[3]),32);
        tracep->fullIData(oldp+57,(vlTOPp->sha256__DOT__H[4]),32);
        tracep->fullIData(oldp+58,(vlTOPp->sha256__DOT__H[5]),32);
        tracep->fullIData(oldp+59,(vlTOPp->sha256__DOT__H[6]),32);
        tracep->fullIData(oldp+60,(vlTOPp->sha256__DOT__H[7]),32);
        tracep->fullIData(oldp+61,(vlTOPp->sha256__DOT__i),32);
        tracep->fullIData(oldp+62,(vlTOPp->sha256__DOT__a),32);
        tracep->fullIData(oldp+63,(vlTOPp->sha256__DOT__b),32);
        tracep->fullIData(oldp+64,(vlTOPp->sha256__DOT__c),32);
        tracep->fullIData(oldp+65,(vlTOPp->sha256__DOT__d),32);
        tracep->fullIData(oldp+66,(vlTOPp->sha256__DOT__e),32);
        tracep->fullIData(oldp+67,(vlTOPp->sha256__DOT__f),32);
        tracep->fullIData(oldp+68,(vlTOPp->sha256__DOT__g),32);
        tracep->fullIData(oldp+69,(vlTOPp->sha256__DOT__h),32);
        tracep->fullIData(oldp+70,(vlTOPp->sha256__DOT__temp1),32);
        tracep->fullIData(oldp+71,(vlTOPp->sha256__DOT__temp2),32);
    }
}
