// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========
IData/*31:0*/ Vtop::__Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[64];

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

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_reset = 1U;
    vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE___05F_me_check_0 = 1U;
    vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE___05F_me_check_0 = 1U;
    vlTOPp->mksequential_sha_engine__DOT__RDY_reset = 1U;
    vlTOPp->mksequential_sha_engine__DOT__RDY_ready = 1U;
    vlTOPp->mksequential_sha_engine__DOT__i = 0x2aU;
    vlTOPp->mksequential_sha_engine__DOT__i_h_0 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__i_h_1 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__i_h_2 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__i_h_3 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__i_h_4 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__i_h_5 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__i_h_6 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__i_h_7 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_0 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_1 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_2 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_3 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_4 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_5 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_6 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_7 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__pre_comp = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__state = 2U;
    vlTOPp->mksequential_sha_engine__DOT__w_0 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_1 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_10 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_11 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_12 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_13 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_14 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_15 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_2 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_3 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_4 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_5 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_6 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_7 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_8 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__w_9 = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[4U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[5U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[6U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[7U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[0U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[1U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[2U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[3U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[4U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[5U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[6U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[7U] = 0xaaaaaaaaU;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg = 0U;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg = 1U;
    vlTOPp->RDY_reset = vlTOPp->mksequential_sha_engine__DOT__RDY_reset;
    vlTOPp->RDY_ready = vlTOPp->mksequential_sha_engine__DOT__RDY_ready;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mksequential_sha_engine__DOT__EN_reset 
        = vlTOPp->EN_reset;
    vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash[0U] 
        = vlTOPp->input_engine_pre_hash[0U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash[1U] 
        = vlTOPp->input_engine_pre_hash[1U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash[2U] 
        = vlTOPp->input_engine_pre_hash[2U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash[3U] 
        = vlTOPp->input_engine_pre_hash[3U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash[4U] 
        = vlTOPp->input_engine_pre_hash[4U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash[5U] 
        = vlTOPp->input_engine_pre_hash[5U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash[6U] 
        = vlTOPp->input_engine_pre_hash[6U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash[7U] 
        = vlTOPp->input_engine_pre_hash[7U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[0U] 
        = vlTOPp->input_engine_input_val[0U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[1U] 
        = vlTOPp->input_engine_input_val[1U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[2U] 
        = vlTOPp->input_engine_input_val[2U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[3U] 
        = vlTOPp->input_engine_input_val[3U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[4U] 
        = vlTOPp->input_engine_input_val[4U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[5U] 
        = vlTOPp->input_engine_input_val[5U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[6U] 
        = vlTOPp->input_engine_input_val[6U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[7U] 
        = vlTOPp->input_engine_input_val[7U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[8U] 
        = vlTOPp->input_engine_input_val[8U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[9U] 
        = vlTOPp->input_engine_input_val[9U];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[0xaU] 
        = vlTOPp->input_engine_input_val[0xaU];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[0xbU] 
        = vlTOPp->input_engine_input_val[0xbU];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[0xcU] 
        = vlTOPp->input_engine_input_val[0xcU];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[0xdU] 
        = vlTOPp->input_engine_input_val[0xdU];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[0xeU] 
        = vlTOPp->input_engine_input_val[0xeU];
    vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val[0xfU] 
        = vlTOPp->input_engine_input_val[0xfU];
    vlTOPp->mksequential_sha_engine__DOT__EN_input_engine 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__EN_output_engine_get 
        = vlTOPp->EN_output_engine_get;
    vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_reset 
        = vlTOPp->EN_reset;
    vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_input_engine 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_output_engine_get 
        = vlTOPp->EN_output_engine_get;
    vlTOPp->mksequential_sha_engine__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mksequential_sha_engine__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh7036 
        = ((IData)(0x428a2f98U) + vlTOPp->input_engine_input_val[0xfU]);
    vlTOPp->mksequential_sha_engine__DOT__initial_val_0_D_IN 
        = vlTOPp->input_engine_pre_hash[7U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_0_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_1_D_IN 
        = vlTOPp->input_engine_pre_hash[6U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_1_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_2_D_IN 
        = vlTOPp->input_engine_pre_hash[5U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_2_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_3_D_IN 
        = vlTOPp->input_engine_pre_hash[4U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_3_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_4_D_IN 
        = vlTOPp->input_engine_pre_hash[3U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_4_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_5_D_IN 
        = vlTOPp->input_engine_pre_hash[2U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_5_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_6_D_IN 
        = vlTOPp->input_engine_pre_hash[1U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_6_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_7_D_IN 
        = vlTOPp->input_engine_pre_hash[0U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_7_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_CLR 
        = vlTOPp->EN_reset;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ 
        = vlTOPp->EN_output_engine_get;
    vlTOPp->RDY_reset = vlTOPp->mksequential_sha_engine__DOT__RDY_reset;
    vlTOPp->RDY_ready = vlTOPp->mksequential_sha_engine__DOT__RDY_ready;
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5133 
        = (vlTOPp->mksequential_sha_engine__DOT__w_0 
           + vlTOPp->mksequential_sha_engine__DOT__w_9);
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3905 
        = (vlTOPp->mksequential_sha_engine__DOT__i_h_1 
           & vlTOPp->mksequential_sha_engine__DOT__i_h_2);
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh5297 
        = (0x3fffffU & (vlTOPp->mksequential_sha_engine__DOT__w_14 
                        >> 0xaU));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5298 
        = ((0xffff8000U & (vlTOPp->mksequential_sha_engine__DOT__w_14 
                           << 0xfU)) | (0x7fffU & (vlTOPp->mksequential_sha_engine__DOT__w_14 
                                                   >> 0x11U)));
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh5299 
        = ((0xffffe000U & (vlTOPp->mksequential_sha_engine__DOT__w_14 
                           << 0xdU)) | (0x1fffU & (vlTOPp->mksequential_sha_engine__DOT__w_14 
                                                   >> 0x13U)));
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3718 
        = ((0xfffffc00U & (vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                           << 0xaU)) | (0x3ffU & (vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                                                  >> 0x16U)));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3719 
        = ((0xc0000000U & (vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                           << 0x1eU)) | (0x3fffffffU 
                                         & (vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                                            >> 2U)));
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3720 
        = ((0xfff80000U & (vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                           << 0x13U)) | (0x7ffffU & 
                                         (vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                                          >> 0xdU)));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3906 
        = (vlTOPp->mksequential_sha_engine__DOT__i_h_0 
           & vlTOPp->mksequential_sha_engine__DOT__i_h_1);
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3907 
        = (vlTOPp->mksequential_sha_engine__DOT__i_h_0 
           & vlTOPp->mksequential_sha_engine__DOT__i_h_2);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh2477 
        = (vlTOPp->mksequential_sha_engine__DOT__i_h_6 
           + vlTOPp->mksequential_sha_engine__DOT__w_1);
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh5165 
        = (0x1fffffffU & (vlTOPp->mksequential_sha_engine__DOT__w_1 
                          >> 3U));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5166 
        = ((0xfe000000U & (vlTOPp->mksequential_sha_engine__DOT__w_1 
                           << 0x19U)) | (0x1ffffffU 
                                         & (vlTOPp->mksequential_sha_engine__DOT__w_1 
                                            >> 7U)));
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh5167 
        = ((0xffffc000U & (vlTOPp->mksequential_sha_engine__DOT__w_1 
                           << 0xeU)) | (0x3fffU & (vlTOPp->mksequential_sha_engine__DOT__w_1 
                                                   >> 0x12U)));
    vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_input_engine 
        = (0U == (IData)(vlTOPp->mksequential_sha_engine__DOT__state));
    vlTOPp->mksequential_sha_engine__DOT__ready = (0U 
                                                   == (IData)(vlTOPp->mksequential_sha_engine__DOT__state));
    vlTOPp->mksequential_sha_engine__DOT__RDY_input_engine 
        = (0U == (IData)(vlTOPp->mksequential_sha_engine__DOT__state));
    vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_hash 
        = (1U == (IData)(vlTOPp->mksequential_sha_engine__DOT__state));
    vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[0U] 
        = (vlTOPp->mksequential_sha_engine__DOT__initial_val_7 
           + vlTOPp->mksequential_sha_engine__DOT__i_h_7);
    vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[1U] 
        = (vlTOPp->mksequential_sha_engine__DOT__i_h_6 
           + vlTOPp->mksequential_sha_engine__DOT__initial_val_6);
    vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[2U] 
        = (IData)((((QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                                     + vlTOPp->mksequential_sha_engine__DOT__initial_val_4))) 
                    << 0x20U) | (QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_5 
                                                 + vlTOPp->mksequential_sha_engine__DOT__initial_val_5)))));
    vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[3U] 
        = (IData)(((((QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                                      + vlTOPp->mksequential_sha_engine__DOT__initial_val_4))) 
                     << 0x20U) | (QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_5 
                                                  + vlTOPp->mksequential_sha_engine__DOT__initial_val_5)))) 
                   >> 0x20U));
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3490 
        = ((0xffffff80U & (vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                           << 7U)) | (0x7fU & (vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                                               >> 0x19U)));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3678 
        = (vlTOPp->mksequential_sha_engine__DOT__i_h_4 
           & vlTOPp->mksequential_sha_engine__DOT__i_h_5);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3491 
        = ((0xfc000000U & (vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                           << 0x1aU)) | (0x3ffffffU 
                                         & (vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                                            >> 6U)));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3695 
        = (~ vlTOPp->mksequential_sha_engine__DOT__i_h_4);
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3492 
        = ((0xffe00000U & (vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                           << 0x15U)) | (0x1fffffU 
                                         & (vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                                            >> 0xbU)));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5420 
        = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mksequential_sha_engine__DOT__i)));
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[0U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[0U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[1U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[1U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[2U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[2U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[3U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[3U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[4U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[4U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[5U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[5U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[6U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[6U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[7U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[7U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__EMPTY_N 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__FULL_N 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__CLK 
        = vlTOPp->mksequential_sha_engine__DOT__CLK;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__RST 
        = vlTOPp->mksequential_sha_engine__DOT__RST_N;
    vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_2 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh7036 
           + vlTOPp->input_engine_pre_hash[0U]);
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__CLR 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_CLR;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__DEQ 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ) 
           & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg)));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5296 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh5298 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh5299);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3717 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3719 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3720);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3904 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3906 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3907);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5164 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh5166 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh5167);
    vlTOPp->ready = vlTOPp->mksequential_sha_engine__DOT__ready;
    vlTOPp->RDY_input_engine = vlTOPp->mksequential_sha_engine__DOT__RDY_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash 
        = vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_hash;
    vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[0U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[0U];
    vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[1U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[1U];
    vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[2U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[2U];
    vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[3U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[3U];
    vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[4U] 
        = (IData)((((QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_2 
                                     + vlTOPp->mksequential_sha_engine__DOT__initial_val_2))) 
                    << 0x20U) | (QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_3 
                                                 + vlTOPp->mksequential_sha_engine__DOT__initial_val_3)))));
    vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[5U] 
        = (IData)(((((QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_2 
                                      + vlTOPp->mksequential_sha_engine__DOT__initial_val_2))) 
                     << 0x20U) | (QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_3 
                                                  + vlTOPp->mksequential_sha_engine__DOT__initial_val_3)))) 
                   >> 0x20U));
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3679 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3695 
           & vlTOPp->mksequential_sha_engine__DOT__i_h_6);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3489 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3491 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3492);
    vlTOPp->__Vtableidx1 = vlTOPp->mksequential_sha_engine__DOT__x___05Fh5420;
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh2478 
        = vlTOPp->__Vtable1_mksequential_sha_engine__DOT__y___05Fh2478
        [vlTOPp->__Vtableidx1];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[0U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[0U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[1U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[1U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[2U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[2U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[3U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[3U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[4U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[4U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[5U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[5U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[6U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[6U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[7U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[7U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_EMPTY_N 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__EMPTY_N;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_FULL_N 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__FULL_N;
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh5132 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh5296 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh5297);
    vlTOPp->mksequential_sha_engine__DOT__tmp2___05Fh2404 
        = ((vlTOPp->mksequential_sha_engine__DOT__x___05Fh3717 
            ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3718) 
           + (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3904 
              ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3905));
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh5134 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh5164 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh5165);
    vlTOPp->mksequential_sha_engine__DOT__i_h_0_EN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__i_h_1_EN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__i_h_2_EN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__i_h_3_EN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__i_h_4_EN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__i_h_5_EN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__i_h_6_EN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__i_h_7_EN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           | (IData)(vlTOPp->EN_input_engine));
    if (vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) {
        vlTOPp->mksequential_sha_engine__DOT__i_h_1_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__i_h_0;
        vlTOPp->mksequential_sha_engine__DOT__i_h_2_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__i_h_1;
        vlTOPp->mksequential_sha_engine__DOT__i_h_3_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__i_h_2;
        vlTOPp->mksequential_sha_engine__DOT__i_h_5_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__i_h_4;
        vlTOPp->mksequential_sha_engine__DOT__i_h_6_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__i_h_5;
        vlTOPp->mksequential_sha_engine__DOT__i_h_7_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__i_h_6;
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_1_D_IN 
            = vlTOPp->input_engine_pre_hash[6U];
        vlTOPp->mksequential_sha_engine__DOT__i_h_2_D_IN 
            = vlTOPp->input_engine_pre_hash[5U];
        vlTOPp->mksequential_sha_engine__DOT__i_h_3_D_IN 
            = vlTOPp->input_engine_pre_hash[4U];
        vlTOPp->mksequential_sha_engine__DOT__i_h_5_D_IN 
            = vlTOPp->input_engine_pre_hash[2U];
        vlTOPp->mksequential_sha_engine__DOT__i_h_6_D_IN 
            = vlTOPp->input_engine_pre_hash[1U];
        vlTOPp->mksequential_sha_engine__DOT__i_h_7_D_IN 
            = vlTOPp->input_engine_pre_hash[0U];
    }
    vlTOPp->mksequential_sha_engine__DOT__pre_comp_EN 
        = (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
            & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
           | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_0_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_1_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_10_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_11_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_12_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_13_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_14_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_15_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_2_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_3_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_4_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_5_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_6_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_7_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_8_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__w_9_EN = 
        (((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
          & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
         | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__i_EN = ((
                                                   ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
                                                    & (0x3fU 
                                                       != (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
                                                   | (IData)(vlTOPp->EN_input_engine)) 
                                                  | (IData)(vlTOPp->EN_reset));
    vlTOPp->mksequential_sha_engine__DOT__MUX_state_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           & (0x3fU == (IData)(vlTOPp->mksequential_sha_engine__DOT__i)));
    vlTOPp->mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i)));
    vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[0U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[0U];
    vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[1U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[1U];
    vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[2U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[2U];
    vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[3U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[3U];
    vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[4U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[4U];
    vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[5U] 
        = vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[5U];
    vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[6U] 
        = (IData)((((QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                                     + vlTOPp->mksequential_sha_engine__DOT__initial_val_0))) 
                    << 0x20U) | (QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_1 
                                                 + vlTOPp->mksequential_sha_engine__DOT__initial_val_1)))));
    vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[7U] 
        = (IData)(((((QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                                      + vlTOPp->mksequential_sha_engine__DOT__initial_val_0))) 
                     << 0x20U) | (QData)((IData)((vlTOPp->mksequential_sha_engine__DOT__i_h_1 
                                                  + vlTOPp->mksequential_sha_engine__DOT__initial_val_1)))) 
                   >> 0x20U));
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3476 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3678 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3679);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3475 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3489 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3490);
    vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_1 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh2477 
           + vlTOPp->mksequential_sha_engine__DOT__y___05Fh2478);
    vlTOPp->mksequential_sha_engine__DOT__output_engine_get[0U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[0U];
    vlTOPp->mksequential_sha_engine__DOT__output_engine_get[1U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[1U];
    vlTOPp->mksequential_sha_engine__DOT__output_engine_get[2U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[2U];
    vlTOPp->mksequential_sha_engine__DOT__output_engine_get[3U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[3U];
    vlTOPp->mksequential_sha_engine__DOT__output_engine_get[4U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[4U];
    vlTOPp->mksequential_sha_engine__DOT__output_engine_get[5U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[5U];
    vlTOPp->mksequential_sha_engine__DOT__output_engine_get[6U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[6U];
    vlTOPp->mksequential_sha_engine__DOT__output_engine_get[7U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT[7U];
    vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_output_engine_get 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_EMPTY_N;
    vlTOPp->mksequential_sha_engine__DOT__RDY_output_engine_get 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_EMPTY_N;
    vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_routput 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_FULL_N) 
           & (2U == (IData)(vlTOPp->mksequential_sha_engine__DOT__state)));
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5131 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh5133 
           + vlTOPp->mksequential_sha_engine__DOT__y___05Fh5134);
    vlTOPp->mksequential_sha_engine__DOT__i_D_IN = 
        ((IData)(vlTOPp->EN_reset) ? 0U : ((IData)(vlTOPp->mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2)
                                            ? (IData)(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5420)
                                            : 0U));
    if (vlTOPp->mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2) {
        vlTOPp->mksequential_sha_engine__DOT__w_0_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_1;
        vlTOPp->mksequential_sha_engine__DOT__w_1_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_2;
        vlTOPp->mksequential_sha_engine__DOT__w_10_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_11;
        vlTOPp->mksequential_sha_engine__DOT__w_11_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_12;
        vlTOPp->mksequential_sha_engine__DOT__w_12_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_13;
        vlTOPp->mksequential_sha_engine__DOT__w_13_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_14;
        vlTOPp->mksequential_sha_engine__DOT__w_14_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_15;
        vlTOPp->mksequential_sha_engine__DOT__w_2_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_3;
        vlTOPp->mksequential_sha_engine__DOT__w_3_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_4;
        vlTOPp->mksequential_sha_engine__DOT__w_4_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_5;
        vlTOPp->mksequential_sha_engine__DOT__w_5_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_6;
        vlTOPp->mksequential_sha_engine__DOT__w_6_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_7;
        vlTOPp->mksequential_sha_engine__DOT__w_7_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_8;
        vlTOPp->mksequential_sha_engine__DOT__w_8_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_9;
        vlTOPp->mksequential_sha_engine__DOT__w_9_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__w_10;
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_0_D_IN 
            = vlTOPp->input_engine_input_val[0xfU];
        vlTOPp->mksequential_sha_engine__DOT__w_1_D_IN 
            = vlTOPp->input_engine_input_val[0xeU];
        vlTOPp->mksequential_sha_engine__DOT__w_10_D_IN 
            = vlTOPp->input_engine_input_val[5U];
        vlTOPp->mksequential_sha_engine__DOT__w_11_D_IN 
            = vlTOPp->input_engine_input_val[4U];
        vlTOPp->mksequential_sha_engine__DOT__w_12_D_IN 
            = vlTOPp->input_engine_input_val[3U];
        vlTOPp->mksequential_sha_engine__DOT__w_13_D_IN 
            = vlTOPp->input_engine_input_val[2U];
        vlTOPp->mksequential_sha_engine__DOT__w_14_D_IN 
            = vlTOPp->input_engine_input_val[1U];
        vlTOPp->mksequential_sha_engine__DOT__w_2_D_IN 
            = vlTOPp->input_engine_input_val[0xdU];
        vlTOPp->mksequential_sha_engine__DOT__w_3_D_IN 
            = vlTOPp->input_engine_input_val[0xcU];
        vlTOPp->mksequential_sha_engine__DOT__w_4_D_IN 
            = vlTOPp->input_engine_input_val[0xbU];
        vlTOPp->mksequential_sha_engine__DOT__w_5_D_IN 
            = vlTOPp->input_engine_input_val[0xaU];
        vlTOPp->mksequential_sha_engine__DOT__w_6_D_IN 
            = vlTOPp->input_engine_input_val[9U];
        vlTOPp->mksequential_sha_engine__DOT__w_7_D_IN 
            = vlTOPp->input_engine_input_val[8U];
        vlTOPp->mksequential_sha_engine__DOT__w_8_D_IN 
            = vlTOPp->input_engine_input_val[7U];
        vlTOPp->mksequential_sha_engine__DOT__w_9_D_IN 
            = vlTOPp->input_engine_input_val[6U];
    }
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[0U] 
        = vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[0U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[1U] 
        = vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[1U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[2U] 
        = vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[2U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[3U] 
        = vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[3U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[4U] 
        = vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[4U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[5U] 
        = vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[5U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[6U] 
        = vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[6U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[7U] 
        = vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434[7U];
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3473 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3475 
           + vlTOPp->mksequential_sha_engine__DOT__y___05Fh3476);
    vlTOPp->mksequential_sha_engine__DOT__pre_comp_D_IN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2)
            ? vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_1
            : vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_2);
    vlTOPp->output_engine_get[0U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[0U];
    vlTOPp->output_engine_get[1U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[1U];
    vlTOPp->output_engine_get[2U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[2U];
    vlTOPp->output_engine_get[3U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[3U];
    vlTOPp->output_engine_get[4U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[4U];
    vlTOPp->output_engine_get[5U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[5U];
    vlTOPp->output_engine_get[6U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[6U];
    vlTOPp->output_engine_get[7U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[7U];
    vlTOPp->RDY_output_engine_get = vlTOPp->mksequential_sha_engine__DOT__RDY_output_engine_get;
    vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput 
        = vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_routput;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ 
        = vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_routput;
    vlTOPp->mksequential_sha_engine__DOT__MUX_w_15_write_1___05FVAL_1 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh5131 
           + vlTOPp->mksequential_sha_engine__DOT__y___05Fh5132);
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[0U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[0U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[1U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[1U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[2U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[2U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[3U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[3U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[4U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[4U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[5U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[5U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[6U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[6U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[7U] 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[7U];
    vlTOPp->mksequential_sha_engine__DOT__tmp1___05Fh2403 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3473 
           + vlTOPp->mksequential_sha_engine__DOT__pre_comp);
    vlTOPp->mksequential_sha_engine__DOT__state_D_IN 
        = (((IData)(vlTOPp->EN_reset) | (IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput))
            ? 0U : ((IData)(vlTOPp->mksequential_sha_engine__DOT__MUX_state_write_1___05FSEL_3)
                     ? 2U : ((IData)(vlTOPp->EN_input_engine)
                              ? 1U : 0U)));
    vlTOPp->mksequential_sha_engine__DOT__state_EN 
        = (((((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
              & (0x3fU == (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
             | (IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput)) 
            | (IData)(vlTOPp->EN_reset)) | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__ENQ 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d1di 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ) 
           & (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg));
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di 
        = (((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ) 
            & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg))) 
           | (((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ) 
               & (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ)) 
              & (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg)));
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h 
        = (1U & ((((~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ)) 
                   & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ))) 
                  | ((~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ)) 
                     & (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg))) 
                 | ((~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ)) 
                    & (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg))));
    vlTOPp->mksequential_sha_engine__DOT__w_15_D_IN 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2)
            ? vlTOPp->mksequential_sha_engine__DOT__MUX_w_15_write_1___05FVAL_1
            : vlTOPp->input_engine_input_val[0U]);
    vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_0_write_1___05FVAL_1 
        = (vlTOPp->mksequential_sha_engine__DOT__tmp1___05Fh2403 
           + vlTOPp->mksequential_sha_engine__DOT__tmp2___05Fh2404);
    vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_4_write_1___05FVAL_1 
        = (vlTOPp->mksequential_sha_engine__DOT__i_h_3 
           + vlTOPp->mksequential_sha_engine__DOT__tmp1___05Fh2403);
    if (vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) {
        vlTOPp->mksequential_sha_engine__DOT__i_h_0_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_0_write_1___05FVAL_1;
        vlTOPp->mksequential_sha_engine__DOT__i_h_4_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_4_write_1___05FVAL_1;
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_0_D_IN 
            = vlTOPp->input_engine_pre_hash[7U];
        vlTOPp->mksequential_sha_engine__DOT__i_h_4_D_IN 
            = vlTOPp->input_engine_pre_hash[3U];
    }
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RST_N = vlTOPp->RST_N;
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
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RST_N = VL_RAND_RESET_I(1);
    EN_reset = VL_RAND_RESET_I(1);
    RDY_reset = VL_RAND_RESET_I(1);
    ready = VL_RAND_RESET_I(1);
    RDY_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, input_engine_pre_hash);
    VL_RAND_RESET_W(512, input_engine_input_val);
    EN_input_engine = VL_RAND_RESET_I(1);
    RDY_input_engine = VL_RAND_RESET_I(1);
    EN_output_engine_get = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, output_engine_get);
    RDY_output_engine_get = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__CLK = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__RST_N = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__EN_reset = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__RDY_reset = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__ready = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__RDY_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__input_engine_pre_hash);
    VL_RAND_RESET_W(512, mksequential_sha_engine__DOT__input_engine_input_val);
    mksequential_sha_engine__DOT__EN_input_engine = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__RDY_input_engine = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__EN_output_engine_get = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__output_engine_get);
    mksequential_sha_engine__DOT__RDY_output_engine_get = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i = VL_RAND_RESET_I(6);
    mksequential_sha_engine__DOT__i_D_IN = VL_RAND_RESET_I(6);
    mksequential_sha_engine__DOT__i_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i_h_0 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_0_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_0_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i_h_1 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_1_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_1_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i_h_2 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_2_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_2_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i_h_3 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_3_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_3_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i_h_4 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_4_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_4_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i_h_5 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_5_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_5_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i_h_6 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_6_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_6_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__i_h_7 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_7_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__i_h_7_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__initial_val_0 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_0_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_0_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__initial_val_1 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_1_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_1_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__initial_val_2 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_2_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_2_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__initial_val_3 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_3_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_3_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__initial_val_4 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_4_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_4_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__initial_val_5 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_5_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_5_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__initial_val_6 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_6_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_6_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__initial_val_7 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_7_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__initial_val_7_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__pre_comp = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__pre_comp_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__pre_comp_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__state = VL_RAND_RESET_I(2);
    mksequential_sha_engine__DOT__state_D_IN = VL_RAND_RESET_I(2);
    mksequential_sha_engine__DOT__state_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_0 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_0_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_0_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_1 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_1_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_1_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_10 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_10_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_10_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_11 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_11_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_11_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_12 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_12_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_12_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_13 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_13_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_13_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_14 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_14_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_14_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_15 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_15_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_15_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_2 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_2_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_2_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_3 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_3_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_3_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_4 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_4_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_4_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_5 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_5_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_5_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_6 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_6_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_6_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_7 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_7_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_7_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_8 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_8_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_8_EN = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__w_9 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_9_D_IN = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__w_9_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__result_fifo_D_IN);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__result_fifo_D_OUT);
    mksequential_sha_engine__DOT__result_fifo_CLR = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo_DEQ = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo_EMPTY_N = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo_ENQ = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo_FULL_N = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__CAN_FIRE_RL_hash = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__CAN_FIRE_RL_routput = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__CAN_FIRE___05F_me_check_0 = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__CAN_FIRE_input_engine = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__CAN_FIRE_output_engine_get = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__CAN_FIRE_reset = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__WILL_FIRE_RL_hash = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__WILL_FIRE_RL_routput = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__WILL_FIRE___05F_me_check_0 = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__WILL_FIRE_input_engine = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__WILL_FIRE_output_engine_get = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__WILL_FIRE_reset = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__MUX_i_h_0_write_1___05FVAL_1 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__MUX_i_h_4_write_1___05FVAL_1 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_1 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_2 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__MUX_w_15_write_1___05FVAL_1 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__MUX_state_write_1___05FSEL_3 = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__v___05Fh2361 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__v___05Fh5778 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__v___05Fh2355 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__v___05Fh5772 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh2478 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__res___05Fh5434);
    VL_RAND_RESET_W(192, mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118);
    VL_RAND_RESET_W(128, mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117);
    mksequential_sha_engine__DOT__tmp1___05Fh2403 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__tmp2___05Fh2404 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh2477 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3473 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3475 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3489 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3491 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3678 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3695 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3717 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3719 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3904 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh3906 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh5131 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh5133 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh5164 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh5166 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh5296 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh5298 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh7036 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh3476 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh3490 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh3492 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh3679 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh3718 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh3720 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh3905 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh3907 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh5132 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh5134 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh5165 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh5167 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh5297 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__y___05Fh5299 = VL_RAND_RESET_I(32);
    mksequential_sha_engine__DOT__x___05Fh5420 = VL_RAND_RESET_I(6);
    mksequential_sha_engine__DOT__result_fifo__DOT__CLK = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__RST = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__result_fifo__DOT__D_IN);
    mksequential_sha_engine__DOT__result_fifo__DOT__ENQ = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__DEQ = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__CLR = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__FULL_N = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__EMPTY_N = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT);
    mksequential_sha_engine__DOT__result_fifo__DOT__full_reg = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg);
    VL_RAND_RESET_W(256, mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg);
    mksequential_sha_engine__DOT__result_fifo__DOT__d0di = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__d0d1 = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__d0h = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__d1di = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[0] = 0x428a2f98U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[1] = 0x71374491U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[2] = 0xb5c0fbcfU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[3] = 0xe9b5dba5U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[4] = 0x3956c25bU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[5] = 0x59f111f1U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[6] = 0x923f82a4U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[7] = 0xab1c5ed5U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[8] = 0xd807aa98U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[9] = 0x12835b01U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[10] = 0x243185beU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[11] = 0x550c7dc3U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[12] = 0x72be5d74U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[13] = 0x80deb1feU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[14] = 0x9bdc06a7U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[15] = 0xc19bf174U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[16] = 0xe49b69c1U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[17] = 0xefbe4786U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[18] = 0xfc19dc6U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[19] = 0x240ca1ccU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[20] = 0x2de92c6fU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[21] = 0x4a7484aaU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[22] = 0x5cb0a9dcU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[23] = 0x76f988daU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[24] = 0x983e5152U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[25] = 0xa831c66dU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[26] = 0xb00327c8U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[27] = 0xbf597fc7U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[28] = 0xc6e00bf3U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[29] = 0xd5a79147U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[30] = 0x6ca6351U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[31] = 0x14292967U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[32] = 0x27b70a85U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[33] = 0x2e1b2138U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[34] = 0x4d2c6dfcU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[35] = 0x53380d13U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[36] = 0x650a7354U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[37] = 0x766a0abbU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[38] = 0x81c2c92eU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[39] = 0x92722c85U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[40] = 0xa2bfe8a1U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[41] = 0xa81a664bU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[42] = 0xc24b8b70U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[43] = 0xc76c51a3U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[44] = 0xd192e819U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[45] = 0xd6990624U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[46] = 0xf40e3585U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[47] = 0x106aa070U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[48] = 0x19a4c116U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[49] = 0x1e376c08U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[50] = 0x2748774cU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[51] = 0x34b0bcb5U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[52] = 0x391c0cb3U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[53] = 0x4ed8aa4aU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[54] = 0x5b9cca4fU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[55] = 0x682e6ff3U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[56] = 0x748f82eeU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[57] = 0x78a5636fU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[58] = 0x84c87814U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[59] = 0x8cc70208U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[60] = 0x90befffaU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[61] = 0xa4506cebU;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[62] = 0xbef9a3f7U;
    __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[63] = 0xc67178f2U;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
