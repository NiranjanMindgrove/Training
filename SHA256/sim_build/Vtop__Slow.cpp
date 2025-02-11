// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sha256__DOT__clk = vlTOPp->clk;
    vlTOPp->sha256__DOT__reset = vlTOPp->reset;
    vlTOPp->sha256__DOT__message[0U] = vlTOPp->message[0U];
    vlTOPp->sha256__DOT__message[1U] = vlTOPp->message[1U];
    vlTOPp->sha256__DOT__message[2U] = vlTOPp->message[2U];
    vlTOPp->sha256__DOT__message[3U] = vlTOPp->message[3U];
    vlTOPp->sha256__DOT__message[4U] = vlTOPp->message[4U];
    vlTOPp->sha256__DOT__message[5U] = vlTOPp->message[5U];
    vlTOPp->sha256__DOT__message[6U] = vlTOPp->message[6U];
    vlTOPp->sha256__DOT__message[7U] = vlTOPp->message[7U];
    vlTOPp->sha256__DOT__message[8U] = vlTOPp->message[8U];
    vlTOPp->sha256__DOT__message[9U] = vlTOPp->message[9U];
    vlTOPp->sha256__DOT__message[0xaU] = vlTOPp->message[0xaU];
    vlTOPp->sha256__DOT__message[0xbU] = vlTOPp->message[0xbU];
    vlTOPp->sha256__DOT__message[0xcU] = vlTOPp->message[0xcU];
    vlTOPp->sha256__DOT__message[0xdU] = vlTOPp->message[0xdU];
    vlTOPp->sha256__DOT__message[0xeU] = vlTOPp->message[0xeU];
    vlTOPp->sha256__DOT__message[0xfU] = vlTOPp->message[0xfU];
    vlTOPp->hash[0U] = vlTOPp->sha256__DOT__hash[0U];
    vlTOPp->hash[1U] = vlTOPp->sha256__DOT__hash[1U];
    vlTOPp->hash[2U] = vlTOPp->sha256__DOT__hash[2U];
    vlTOPp->hash[3U] = vlTOPp->sha256__DOT__hash[3U];
    vlTOPp->hash[4U] = vlTOPp->sha256__DOT__hash[4U];
    vlTOPp->hash[5U] = vlTOPp->sha256__DOT__hash[5U];
    vlTOPp->hash[6U] = vlTOPp->sha256__DOT__hash[6U];
    vlTOPp->hash[7U] = vlTOPp->sha256__DOT__hash[7U];
}

void Vtop::_initial__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sha256__DOT__H[0U] = 0x6a09e667U;
    vlTOPp->sha256__DOT__H[1U] = 0xbb67ae85U;
    vlTOPp->sha256__DOT__H[2U] = 0x3c6ef372U;
    vlTOPp->sha256__DOT__H[3U] = 0xa54ff53aU;
    vlTOPp->sha256__DOT__H[4U] = 0x510e527fU;
    vlTOPp->sha256__DOT__H[5U] = 0x9b05688cU;
    vlTOPp->sha256__DOT__H[6U] = 0x1f83d9abU;
    vlTOPp->sha256__DOT__H[7U] = 0x5be0cd19U;
    vlTOPp->sha256__DOT__K[0U] = 0x428a2f98U;
    vlTOPp->sha256__DOT__K[1U] = 0x71374491U;
    vlTOPp->sha256__DOT__K[2U] = 0xb5c0fbcfU;
    vlTOPp->sha256__DOT__K[3U] = 0xe9b5dba5U;
    vlTOPp->sha256__DOT__K[4U] = 0x3956c25bU;
    vlTOPp->sha256__DOT__K[5U] = 0x59f111f1U;
    vlTOPp->sha256__DOT__K[6U] = 0x923f82a4U;
    vlTOPp->sha256__DOT__K[7U] = 0xab1c5ed5U;
    vlTOPp->sha256__DOT__K[8U] = 0xd807aa98U;
    vlTOPp->sha256__DOT__K[9U] = 0x12835b01U;
    vlTOPp->sha256__DOT__K[0xaU] = 0x243185beU;
    vlTOPp->sha256__DOT__K[0xbU] = 0x550c7dc3U;
    vlTOPp->sha256__DOT__K[0xcU] = 0x72be5d74U;
    vlTOPp->sha256__DOT__K[0xdU] = 0x80deb1feU;
    vlTOPp->sha256__DOT__K[0xeU] = 0x9bdc06a7U;
    vlTOPp->sha256__DOT__K[0xfU] = 0xc19bf174U;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, message);
    VL_RAND_RESET_W(256, hash);
    sha256__DOT__clk = VL_RAND_RESET_I(1);
    sha256__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, sha256__DOT__message);
    VL_RAND_RESET_W(256, sha256__DOT__hash);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        sha256__DOT__K[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        sha256__DOT__H[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        sha256__DOT__W[__Vi0] = VL_RAND_RESET_I(32);
    }
    sha256__DOT__i = VL_RAND_RESET_I(32);
    sha256__DOT__a = VL_RAND_RESET_I(32);
    sha256__DOT__b = VL_RAND_RESET_I(32);
    sha256__DOT__c = VL_RAND_RESET_I(32);
    sha256__DOT__d = VL_RAND_RESET_I(32);
    sha256__DOT__e = VL_RAND_RESET_I(32);
    sha256__DOT__f = VL_RAND_RESET_I(32);
    sha256__DOT__g = VL_RAND_RESET_I(32);
    sha256__DOT__h = VL_RAND_RESET_I(32);
    sha256__DOT__temp1 = VL_RAND_RESET_I(32);
    sha256__DOT__temp2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
