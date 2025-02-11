// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/niranjan/Documents/Training_Projects/HDL_Codes/SHA256/SHA.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/niranjan/Documents/Training_Projects/HDL_Codes/SHA256/SHA.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__1\n"); );
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
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->sha256__DOT__i = 1U;
        vlTOPp->sha256__DOT__i = 2U;
        vlTOPp->sha256__DOT__i = 3U;
        vlTOPp->sha256__DOT__i = 4U;
        vlTOPp->sha256__DOT__i = 5U;
        vlTOPp->sha256__DOT__i = 6U;
        vlTOPp->sha256__DOT__i = 7U;
        vlTOPp->sha256__DOT__i = 8U;
        vlTOPp->sha256__DOT__i = 9U;
        vlTOPp->sha256__DOT__i = 0xaU;
        vlTOPp->sha256__DOT__i = 0xbU;
        vlTOPp->sha256__DOT__i = 0xcU;
        vlTOPp->sha256__DOT__i = 0xdU;
        vlTOPp->sha256__DOT__i = 0xeU;
        vlTOPp->sha256__DOT__i = 0xfU;
        vlTOPp->sha256__DOT__i = 0x10U;
        vlTOPp->sha256__DOT__i = 0x11U;
        vlTOPp->sha256__DOT__i = 0x12U;
        vlTOPp->sha256__DOT__i = 0x13U;
        vlTOPp->sha256__DOT__i = 0x14U;
        vlTOPp->sha256__DOT__i = 0x15U;
        vlTOPp->sha256__DOT__i = 0x16U;
        vlTOPp->sha256__DOT__i = 0x17U;
        vlTOPp->sha256__DOT__i = 0x18U;
        vlTOPp->sha256__DOT__i = 0x19U;
        vlTOPp->sha256__DOT__i = 0x1aU;
        vlTOPp->sha256__DOT__i = 0x1bU;
        vlTOPp->sha256__DOT__i = 0x1cU;
        vlTOPp->sha256__DOT__i = 0x1dU;
        vlTOPp->sha256__DOT__i = 0x1eU;
        vlTOPp->sha256__DOT__i = 0x1fU;
        vlTOPp->sha256__DOT__i = 0x20U;
        vlTOPp->sha256__DOT__i = 0x21U;
        vlTOPp->sha256__DOT__i = 0x22U;
        vlTOPp->sha256__DOT__i = 0x23U;
        vlTOPp->sha256__DOT__i = 0x24U;
        vlTOPp->sha256__DOT__i = 0x25U;
        vlTOPp->sha256__DOT__i = 0x26U;
        vlTOPp->sha256__DOT__i = 0x27U;
        vlTOPp->sha256__DOT__i = 0x28U;
        vlTOPp->sha256__DOT__i = 0x29U;
        vlTOPp->sha256__DOT__i = 0x2aU;
        vlTOPp->sha256__DOT__i = 0x2bU;
        vlTOPp->sha256__DOT__i = 0x2cU;
        vlTOPp->sha256__DOT__i = 0x2dU;
        vlTOPp->sha256__DOT__i = 0x2eU;
        vlTOPp->sha256__DOT__i = 0x2fU;
        vlTOPp->sha256__DOT__i = 0x30U;
        vlTOPp->sha256__DOT__i = 0x31U;
        vlTOPp->sha256__DOT__i = 0x32U;
        vlTOPp->sha256__DOT__i = 0x33U;
        vlTOPp->sha256__DOT__i = 0x34U;
        vlTOPp->sha256__DOT__i = 0x35U;
        vlTOPp->sha256__DOT__i = 0x36U;
        vlTOPp->sha256__DOT__i = 0x37U;
        vlTOPp->sha256__DOT__i = 0x38U;
        vlTOPp->sha256__DOT__i = 0x39U;
        vlTOPp->sha256__DOT__i = 0x3aU;
        vlTOPp->sha256__DOT__i = 0x3bU;
        vlTOPp->sha256__DOT__i = 0x3cU;
        vlTOPp->sha256__DOT__i = 0x3dU;
        vlTOPp->sha256__DOT__i = 0x3eU;
        vlTOPp->sha256__DOT__i = 0x3fU;
        vlTOPp->sha256__DOT__i = 0x40U;
        vlTOPp->sha256__DOT__i = 1U;
        vlTOPp->sha256__DOT__i = 2U;
        vlTOPp->sha256__DOT__i = 3U;
        vlTOPp->sha256__DOT__i = 4U;
        vlTOPp->sha256__DOT__i = 5U;
        vlTOPp->sha256__DOT__i = 6U;
        vlTOPp->sha256__DOT__i = 7U;
        vlTOPp->sha256__DOT__i = 8U;
        vlTOPp->sha256__DOT__i = 9U;
        vlTOPp->sha256__DOT__i = 0xaU;
        vlTOPp->sha256__DOT__i = 0xbU;
        vlTOPp->sha256__DOT__i = 0xcU;
        vlTOPp->sha256__DOT__i = 0xdU;
        vlTOPp->sha256__DOT__i = 0xeU;
        vlTOPp->sha256__DOT__i = 0xfU;
        vlTOPp->sha256__DOT__i = 0x10U;
        vlTOPp->sha256__DOT__i = 0x11U;
        vlTOPp->sha256__DOT__i = 0x12U;
        vlTOPp->sha256__DOT__i = 0x13U;
        vlTOPp->sha256__DOT__i = 0x14U;
        vlTOPp->sha256__DOT__i = 0x15U;
        vlTOPp->sha256__DOT__i = 0x16U;
        vlTOPp->sha256__DOT__i = 0x17U;
        vlTOPp->sha256__DOT__i = 0x18U;
        vlTOPp->sha256__DOT__i = 0x19U;
        vlTOPp->sha256__DOT__i = 0x1aU;
        vlTOPp->sha256__DOT__i = 0x1bU;
        vlTOPp->sha256__DOT__i = 0x1cU;
        vlTOPp->sha256__DOT__i = 0x1dU;
        vlTOPp->sha256__DOT__i = 0x1eU;
        vlTOPp->sha256__DOT__i = 0x1fU;
        vlTOPp->sha256__DOT__i = 0x20U;
        vlTOPp->sha256__DOT__i = 0x21U;
        vlTOPp->sha256__DOT__i = 0x22U;
        vlTOPp->sha256__DOT__i = 0x23U;
        vlTOPp->sha256__DOT__i = 0x24U;
        vlTOPp->sha256__DOT__i = 0x25U;
        vlTOPp->sha256__DOT__i = 0x26U;
        vlTOPp->sha256__DOT__i = 0x27U;
        vlTOPp->sha256__DOT__i = 0x28U;
        vlTOPp->sha256__DOT__i = 0x29U;
        vlTOPp->sha256__DOT__i = 0x2aU;
        vlTOPp->sha256__DOT__i = 0x2bU;
        vlTOPp->sha256__DOT__i = 0x2cU;
        vlTOPp->sha256__DOT__i = 0x2dU;
        vlTOPp->sha256__DOT__i = 0x2eU;
        vlTOPp->sha256__DOT__i = 0x2fU;
        vlTOPp->sha256__DOT__i = 0x30U;
        vlTOPp->sha256__DOT__i = 0x31U;
        vlTOPp->sha256__DOT__i = 0x32U;
        vlTOPp->sha256__DOT__i = 0x33U;
        vlTOPp->sha256__DOT__i = 0x34U;
        vlTOPp->sha256__DOT__i = 0x35U;
        vlTOPp->sha256__DOT__i = 0x36U;
        vlTOPp->sha256__DOT__i = 0x37U;
        vlTOPp->sha256__DOT__i = 0x38U;
        vlTOPp->sha256__DOT__i = 0x39U;
        vlTOPp->sha256__DOT__i = 0x3aU;
        vlTOPp->sha256__DOT__i = 0x3bU;
        vlTOPp->sha256__DOT__i = 0x3cU;
        vlTOPp->sha256__DOT__i = 0x3dU;
        vlTOPp->sha256__DOT__i = 0x3eU;
        vlTOPp->sha256__DOT__i = 0x3fU;
        vlTOPp->sha256__DOT__i = 0x40U;
    }
    if (vlTOPp->reset) {
        vlTOPp->sha256__DOT__hash[0U] = 0U;
        vlTOPp->sha256__DOT__hash[1U] = 0U;
        vlTOPp->sha256__DOT__hash[2U] = 0U;
        vlTOPp->sha256__DOT__hash[3U] = 0U;
        vlTOPp->sha256__DOT__hash[4U] = 0U;
        vlTOPp->sha256__DOT__hash[5U] = 0U;
        vlTOPp->sha256__DOT__hash[6U] = 0U;
        vlTOPp->sha256__DOT__hash[7U] = 0U;
    } else {
        vlTOPp->sha256__DOT__W[0U] = vlTOPp->message[0xfU];
        vlTOPp->sha256__DOT__W[1U] = vlTOPp->message[0xeU];
        vlTOPp->sha256__DOT__W[2U] = vlTOPp->message[0xdU];
        vlTOPp->sha256__DOT__W[3U] = vlTOPp->message[0xcU];
        vlTOPp->sha256__DOT__W[4U] = vlTOPp->message[0xbU];
        vlTOPp->sha256__DOT__W[5U] = vlTOPp->message[0xaU];
        vlTOPp->sha256__DOT__W[6U] = vlTOPp->message[9U];
        vlTOPp->sha256__DOT__W[7U] = vlTOPp->message[8U];
        vlTOPp->sha256__DOT__W[8U] = vlTOPp->message[7U];
        vlTOPp->sha256__DOT__W[9U] = vlTOPp->message[6U];
        vlTOPp->sha256__DOT__W[0xaU] = vlTOPp->message[5U];
        vlTOPp->sha256__DOT__W[0xbU] = vlTOPp->message[4U];
        vlTOPp->sha256__DOT__W[0xcU] = vlTOPp->message[3U];
        vlTOPp->sha256__DOT__W[0xdU] = vlTOPp->message[2U];
        vlTOPp->sha256__DOT__W[0xeU] = vlTOPp->message[1U];
        vlTOPp->sha256__DOT__W[0xfU] = vlTOPp->message[0U];
        vlTOPp->sha256__DOT__W[0x10U] = (((vlTOPp->sha256__DOT__W
                                           [0U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [1U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [9U]) + (
                                                   vlTOPp->sha256__DOT__W
                                                   [0xeU] 
                                                   >> 0xaU));
        vlTOPp->sha256__DOT__W[0x11U] = (((vlTOPp->sha256__DOT__W
                                           [1U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [2U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0xaU]) + 
                                         (vlTOPp->sha256__DOT__W
                                          [0xfU] >> 0xaU));
        vlTOPp->sha256__DOT__W[0x12U] = (((vlTOPp->sha256__DOT__W
                                           [2U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [3U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0xbU]) + 
                                         (vlTOPp->sha256__DOT__W
                                          [0x10U] >> 0xaU));
        vlTOPp->sha256__DOT__W[0x13U] = (((vlTOPp->sha256__DOT__W
                                           [3U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [4U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0xcU]) + 
                                         (vlTOPp->sha256__DOT__W
                                          [0x11U] >> 0xaU));
        vlTOPp->sha256__DOT__W[0x14U] = (((vlTOPp->sha256__DOT__W
                                           [4U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [5U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0xdU]) + 
                                         (vlTOPp->sha256__DOT__W
                                          [0x12U] >> 0xaU));
        vlTOPp->sha256__DOT__W[0x15U] = (((vlTOPp->sha256__DOT__W
                                           [5U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [6U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0xeU]) + 
                                         (vlTOPp->sha256__DOT__W
                                          [0x13U] >> 0xaU));
        vlTOPp->sha256__DOT__W[0x16U] = (((vlTOPp->sha256__DOT__W
                                           [6U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [7U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0xfU]) + 
                                         (vlTOPp->sha256__DOT__W
                                          [0x14U] >> 0xaU));
        vlTOPp->sha256__DOT__W[0x17U] = (((vlTOPp->sha256__DOT__W
                                           [7U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [8U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x10U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x15U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x18U] = (((vlTOPp->sha256__DOT__W
                                           [8U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [9U] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x11U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x16U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x19U] = (((vlTOPp->sha256__DOT__W
                                           [9U] + (
                                                   vlTOPp->sha256__DOT__W
                                                   [0xaU] 
                                                   >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x12U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x17U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x1aU] = (((vlTOPp->sha256__DOT__W
                                           [0xaU] + 
                                           (vlTOPp->sha256__DOT__W
                                            [0xbU] 
                                            >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x13U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x18U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x1bU] = (((vlTOPp->sha256__DOT__W
                                           [0xbU] + 
                                           (vlTOPp->sha256__DOT__W
                                            [0xcU] 
                                            >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x14U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x19U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x1cU] = (((vlTOPp->sha256__DOT__W
                                           [0xcU] + 
                                           (vlTOPp->sha256__DOT__W
                                            [0xdU] 
                                            >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x15U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x1aU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x1dU] = (((vlTOPp->sha256__DOT__W
                                           [0xdU] + 
                                           (vlTOPp->sha256__DOT__W
                                            [0xeU] 
                                            >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x16U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x1bU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x1eU] = (((vlTOPp->sha256__DOT__W
                                           [0xeU] + 
                                           (vlTOPp->sha256__DOT__W
                                            [0xfU] 
                                            >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x17U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x1cU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x1fU] = (((vlTOPp->sha256__DOT__W
                                           [0xfU] + 
                                           (vlTOPp->sha256__DOT__W
                                            [0x10U] 
                                            >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x18U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x1dU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x20U] = (((vlTOPp->sha256__DOT__W
                                           [0x10U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x11U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x19U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x1eU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x21U] = (((vlTOPp->sha256__DOT__W
                                           [0x11U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x12U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x1aU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x1fU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x22U] = (((vlTOPp->sha256__DOT__W
                                           [0x12U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x13U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x1bU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x20U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x23U] = (((vlTOPp->sha256__DOT__W
                                           [0x13U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x14U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x1cU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x21U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x24U] = (((vlTOPp->sha256__DOT__W
                                           [0x14U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x15U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x1dU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x22U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x25U] = (((vlTOPp->sha256__DOT__W
                                           [0x15U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x16U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x1eU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x23U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x26U] = (((vlTOPp->sha256__DOT__W
                                           [0x16U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x17U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x1fU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x24U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x27U] = (((vlTOPp->sha256__DOT__W
                                           [0x17U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x18U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x20U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x25U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x28U] = (((vlTOPp->sha256__DOT__W
                                           [0x18U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x19U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x21U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x26U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x29U] = (((vlTOPp->sha256__DOT__W
                                           [0x19U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x1aU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x22U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x27U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x2aU] = (((vlTOPp->sha256__DOT__W
                                           [0x1aU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x1bU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x23U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x28U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x2bU] = (((vlTOPp->sha256__DOT__W
                                           [0x1bU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x1cU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x24U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x29U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x2cU] = (((vlTOPp->sha256__DOT__W
                                           [0x1cU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x1dU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x25U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x2aU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x2dU] = (((vlTOPp->sha256__DOT__W
                                           [0x1dU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x1eU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x26U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x2bU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x2eU] = (((vlTOPp->sha256__DOT__W
                                           [0x1eU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x1fU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x27U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x2cU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x2fU] = (((vlTOPp->sha256__DOT__W
                                           [0x1fU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x20U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x28U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x2dU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x30U] = (((vlTOPp->sha256__DOT__W
                                           [0x20U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x21U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x29U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x2eU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x31U] = (((vlTOPp->sha256__DOT__W
                                           [0x21U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x22U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x2aU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x2fU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x32U] = (((vlTOPp->sha256__DOT__W
                                           [0x22U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x23U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x2bU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x30U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x33U] = (((vlTOPp->sha256__DOT__W
                                           [0x23U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x24U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x2cU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x31U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x34U] = (((vlTOPp->sha256__DOT__W
                                           [0x24U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x25U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x2dU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x32U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x35U] = (((vlTOPp->sha256__DOT__W
                                           [0x25U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x26U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x2eU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x33U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x36U] = (((vlTOPp->sha256__DOT__W
                                           [0x26U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x27U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x2fU]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x34U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x37U] = (((vlTOPp->sha256__DOT__W
                                           [0x27U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x28U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x30U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x35U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x38U] = (((vlTOPp->sha256__DOT__W
                                           [0x28U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x29U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x31U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x36U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x39U] = (((vlTOPp->sha256__DOT__W
                                           [0x29U] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x2aU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x32U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x37U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x3aU] = (((vlTOPp->sha256__DOT__W
                                           [0x2aU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x2bU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x33U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x38U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x3bU] = (((vlTOPp->sha256__DOT__W
                                           [0x2bU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x2cU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x34U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x39U] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x3cU] = (((vlTOPp->sha256__DOT__W
                                           [0x2cU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x2dU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x35U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x3aU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x3dU] = (((vlTOPp->sha256__DOT__W
                                           [0x2dU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x2eU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x36U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x3bU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x3eU] = (((vlTOPp->sha256__DOT__W
                                           [0x2eU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x2fU] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x37U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x3cU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__W[0x3fU] = (((vlTOPp->sha256__DOT__W
                                           [0x2fU] 
                                           + (vlTOPp->sha256__DOT__W
                                              [0x30U] 
                                              >> 3U)) 
                                          + vlTOPp->sha256__DOT__W
                                          [0x38U]) 
                                         + (vlTOPp->sha256__DOT__W
                                            [0x3dU] 
                                            >> 0xaU));
        vlTOPp->sha256__DOT__a = vlTOPp->sha256__DOT__H
            [0U];
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__H
            [1U];
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__H
            [2U];
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__H
            [3U];
        vlTOPp->sha256__DOT__e = vlTOPp->sha256__DOT__H
            [4U];
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__H
            [5U];
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__H
            [6U];
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__H
            [7U];
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0U]) + vlTOPp->sha256__DOT__W
                                      [0U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [1U]) + vlTOPp->sha256__DOT__W
                                      [1U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [2U]) + vlTOPp->sha256__DOT__W
                                      [2U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [3U]) + vlTOPp->sha256__DOT__W
                                      [3U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [4U]) + vlTOPp->sha256__DOT__W
                                      [4U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [5U]) + vlTOPp->sha256__DOT__W
                                      [5U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [6U]) + vlTOPp->sha256__DOT__W
                                      [6U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [7U]) + vlTOPp->sha256__DOT__W
                                      [7U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [8U]) + vlTOPp->sha256__DOT__W
                                      [8U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [9U]) + vlTOPp->sha256__DOT__W
                                      [9U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0xaU]) + vlTOPp->sha256__DOT__W
                                      [0xaU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0xbU]) + vlTOPp->sha256__DOT__W
                                      [0xbU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0xcU]) + vlTOPp->sha256__DOT__W
                                      [0xcU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0xdU]) + vlTOPp->sha256__DOT__W
                                      [0xdU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0xeU]) + vlTOPp->sha256__DOT__W
                                      [0xeU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0xfU]) + vlTOPp->sha256__DOT__W
                                      [0xfU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x10U]) + vlTOPp->sha256__DOT__W
                                      [0x10U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x11U]) + vlTOPp->sha256__DOT__W
                                      [0x11U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x12U]) + vlTOPp->sha256__DOT__W
                                      [0x12U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x13U]) + vlTOPp->sha256__DOT__W
                                      [0x13U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x14U]) + vlTOPp->sha256__DOT__W
                                      [0x14U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x15U]) + vlTOPp->sha256__DOT__W
                                      [0x15U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x16U]) + vlTOPp->sha256__DOT__W
                                      [0x16U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x17U]) + vlTOPp->sha256__DOT__W
                                      [0x17U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x18U]) + vlTOPp->sha256__DOT__W
                                      [0x18U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x19U]) + vlTOPp->sha256__DOT__W
                                      [0x19U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x1aU]) + vlTOPp->sha256__DOT__W
                                      [0x1aU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x1bU]) + vlTOPp->sha256__DOT__W
                                      [0x1bU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x1cU]) + vlTOPp->sha256__DOT__W
                                      [0x1cU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x1dU]) + vlTOPp->sha256__DOT__W
                                      [0x1dU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x1eU]) + vlTOPp->sha256__DOT__W
                                      [0x1eU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x1fU]) + vlTOPp->sha256__DOT__W
                                      [0x1fU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x20U]) + vlTOPp->sha256__DOT__W
                                      [0x20U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x21U]) + vlTOPp->sha256__DOT__W
                                      [0x21U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x22U]) + vlTOPp->sha256__DOT__W
                                      [0x22U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x23U]) + vlTOPp->sha256__DOT__W
                                      [0x23U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x24U]) + vlTOPp->sha256__DOT__W
                                      [0x24U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x25U]) + vlTOPp->sha256__DOT__W
                                      [0x25U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x26U]) + vlTOPp->sha256__DOT__W
                                      [0x26U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x27U]) + vlTOPp->sha256__DOT__W
                                      [0x27U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x28U]) + vlTOPp->sha256__DOT__W
                                      [0x28U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x29U]) + vlTOPp->sha256__DOT__W
                                      [0x29U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x2aU]) + vlTOPp->sha256__DOT__W
                                      [0x2aU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x2bU]) + vlTOPp->sha256__DOT__W
                                      [0x2bU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x2cU]) + vlTOPp->sha256__DOT__W
                                      [0x2cU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x2dU]) + vlTOPp->sha256__DOT__W
                                      [0x2dU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x2eU]) + vlTOPp->sha256__DOT__W
                                      [0x2eU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x2fU]) + vlTOPp->sha256__DOT__W
                                      [0x2fU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x30U]) + vlTOPp->sha256__DOT__W
                                      [0x30U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x31U]) + vlTOPp->sha256__DOT__W
                                      [0x31U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x32U]) + vlTOPp->sha256__DOT__W
                                      [0x32U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x33U]) + vlTOPp->sha256__DOT__W
                                      [0x33U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x34U]) + vlTOPp->sha256__DOT__W
                                      [0x34U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x35U]) + vlTOPp->sha256__DOT__W
                                      [0x35U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x36U]) + vlTOPp->sha256__DOT__W
                                      [0x36U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x37U]) + vlTOPp->sha256__DOT__W
                                      [0x37U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x38U]) + vlTOPp->sha256__DOT__W
                                      [0x38U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x39U]) + vlTOPp->sha256__DOT__W
                                      [0x39U]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x3aU]) + vlTOPp->sha256__DOT__W
                                      [0x3aU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x3bU]) + vlTOPp->sha256__DOT__W
                                      [0x3bU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x3cU]) + vlTOPp->sha256__DOT__W
                                      [0x3cU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x3dU]) + vlTOPp->sha256__DOT__W
                                      [0x3dU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x3eU]) + vlTOPp->sha256__DOT__W
                                      [0x3eU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__temp1 = ((((vlTOPp->sha256__DOT__h 
                                         + (((vlTOPp->sha256__DOT__e 
                                              >> 6U) 
                                             ^ (vlTOPp->sha256__DOT__e 
                                                >> 0xbU)) 
                                            ^ (vlTOPp->sha256__DOT__e 
                                               >> 0x19U))) 
                                        + ((vlTOPp->sha256__DOT__e 
                                            & vlTOPp->sha256__DOT__f) 
                                           ^ ((~ vlTOPp->sha256__DOT__e) 
                                              & vlTOPp->sha256__DOT__g))) 
                                       + vlTOPp->sha256__DOT__K
                                       [0x3fU]) + vlTOPp->sha256__DOT__W
                                      [0x3fU]);
        vlTOPp->sha256__DOT__temp2 = ((((vlTOPp->sha256__DOT__a 
                                         >> 2U) ^ (vlTOPp->sha256__DOT__a 
                                                   >> 0xdU)) 
                                       ^ (vlTOPp->sha256__DOT__a 
                                          >> 0x16U)) 
                                      + (((vlTOPp->sha256__DOT__a 
                                           & vlTOPp->sha256__DOT__b) 
                                          ^ (vlTOPp->sha256__DOT__a 
                                             & vlTOPp->sha256__DOT__c)) 
                                         ^ (vlTOPp->sha256__DOT__b 
                                            & vlTOPp->sha256__DOT__c)));
        vlTOPp->sha256__DOT__h = vlTOPp->sha256__DOT__g;
        vlTOPp->sha256__DOT__g = vlTOPp->sha256__DOT__f;
        vlTOPp->sha256__DOT__f = vlTOPp->sha256__DOT__e;
        vlTOPp->sha256__DOT__e = (vlTOPp->sha256__DOT__d 
                                  + vlTOPp->sha256__DOT__temp1);
        vlTOPp->sha256__DOT__d = vlTOPp->sha256__DOT__c;
        vlTOPp->sha256__DOT__c = vlTOPp->sha256__DOT__b;
        vlTOPp->sha256__DOT__b = vlTOPp->sha256__DOT__a;
        vlTOPp->sha256__DOT__a = (vlTOPp->sha256__DOT__temp1 
                                  + vlTOPp->sha256__DOT__temp2);
        vlTOPp->sha256__DOT__H[0U] = (vlTOPp->sha256__DOT__H
                                      [0U] + vlTOPp->sha256__DOT__a);
        vlTOPp->sha256__DOT__H[1U] = (vlTOPp->sha256__DOT__H
                                      [1U] + vlTOPp->sha256__DOT__b);
        vlTOPp->sha256__DOT__H[2U] = (vlTOPp->sha256__DOT__H
                                      [2U] + vlTOPp->sha256__DOT__c);
        vlTOPp->sha256__DOT__H[3U] = (vlTOPp->sha256__DOT__H
                                      [3U] + vlTOPp->sha256__DOT__d);
        vlTOPp->sha256__DOT__H[4U] = (vlTOPp->sha256__DOT__H
                                      [4U] + vlTOPp->sha256__DOT__e);
        vlTOPp->sha256__DOT__H[5U] = (vlTOPp->sha256__DOT__H
                                      [5U] + vlTOPp->sha256__DOT__f);
        vlTOPp->sha256__DOT__H[6U] = (vlTOPp->sha256__DOT__H
                                      [6U] + vlTOPp->sha256__DOT__g);
        vlTOPp->sha256__DOT__H[7U] = (vlTOPp->sha256__DOT__H
                                      [7U] + vlTOPp->sha256__DOT__h);
        vlTOPp->sha256__DOT__hash[0U] = vlTOPp->sha256__DOT__H
            [7U];
        vlTOPp->sha256__DOT__hash[1U] = vlTOPp->sha256__DOT__H
            [6U];
        vlTOPp->sha256__DOT__hash[2U] = vlTOPp->sha256__DOT__H
            [5U];
        vlTOPp->sha256__DOT__hash[3U] = vlTOPp->sha256__DOT__H
            [4U];
        vlTOPp->sha256__DOT__hash[4U] = vlTOPp->sha256__DOT__H
            [3U];
        vlTOPp->sha256__DOT__hash[5U] = vlTOPp->sha256__DOT__H
            [2U];
        vlTOPp->sha256__DOT__hash[6U] = (IData)((((QData)((IData)(
                                                                  vlTOPp->sha256__DOT__H
                                                                  [0U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->sha256__DOT__H
                                                                   [1U]))));
        vlTOPp->sha256__DOT__hash[7U] = (IData)(((((QData)((IData)(
                                                                   vlTOPp->sha256__DOT__H
                                                                   [0U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->sha256__DOT__H
                                                                    [1U]))) 
                                                 >> 0x20U));
    }
    vlTOPp->hash[0U] = vlTOPp->sha256__DOT__hash[0U];
    vlTOPp->hash[1U] = vlTOPp->sha256__DOT__hash[1U];
    vlTOPp->hash[2U] = vlTOPp->sha256__DOT__hash[2U];
    vlTOPp->hash[3U] = vlTOPp->sha256__DOT__hash[3U];
    vlTOPp->hash[4U] = vlTOPp->sha256__DOT__hash[4U];
    vlTOPp->hash[5U] = vlTOPp->sha256__DOT__hash[5U];
    vlTOPp->hash[6U] = vlTOPp->sha256__DOT__hash[6U];
    vlTOPp->hash[7U] = vlTOPp->sha256__DOT__hash[7U];
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
